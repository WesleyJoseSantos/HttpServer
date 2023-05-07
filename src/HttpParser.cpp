/**
 * @file HttpParser.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-05-06
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "HttpParser.h"
#include <string.h>

HttpParser::HttpParser() {}

HttpMethod HttpParser::parseMethod(char *reqStr)
{
    if (strncmp(reqStr, "GET", 3) == 0)
    {
        return HttpMethod::GET;
    }
    else if (strncmp(reqStr, "POST", 4) == 0)
    {
        return HttpMethod::POST;
    }
    else if (strncmp(reqStr, "PUT", 3) == 0)
    {
        return HttpMethod::PUT;
    }
    else if (strncmp(reqStr, "DELETE", 6) == 0)
    {
        return HttpMethod::DELETE;
    }
    else if (strncmp(reqStr, "PATCH", 5) == 0)
    {
        return HttpMethod::PATCH;
    }
    else if (strncmp(reqStr, "HEAD", 4) == 0)
    {
        return HttpMethod::HEAD;
    }
    else if (strncmp(reqStr, "OPTIONS", 7) == 0)
    {
        return HttpMethod::OPTIONS;
    }
    else
    {
        return HttpMethod::UNKNOWN;
    }
}

HttpError HttpParser::parseUrl(char *reqStr, HttpRequest *request)
{
    char url[HTTP_CONFIG_URL_SIZE];
    const char *first_space = strchr(reqStr, ' ');
    if (!first_space || first_space[1] != '/')
    {
        return HttpError::ParseFail;
    }
    const char *url_start = first_space + 1;

    const char *url_end = strchr(url_start, ' ');
    if (!url_end || url_end[1] != 'H')
    {
        return HttpError::ParseFail;
    }

    size_t url_len = (url_end - url_start) * sizeof(char);

    if (url_len > sizeof(url))
    {
        return HttpError::BufferOverflow;
    }

    memcpy(url, url_start, url_len);
    url[url_len] = '\0';

    request->setUrl(url);

    return HttpError::NoError;
}

HttpError HttpParser::parseBody(char *reqStr, HttpRequest *request)
{
    char body[HTTP_CONFIG_BODY_SIZE];
    size_t pos = strlen(reqStr);
    int crlf_count = 0;

    while (pos >= 3 && crlf_count < 2)
    {
        if (reqStr[pos] == '\n' &&
            reqStr[pos - 1] == '\r' &&
            reqStr[pos - 2] == '\n' &&
            reqStr[pos - 3] == '\r')
        {
            crlf_count = 2;
            pos++;
            break;
        }
        pos--;
    }

    if (crlf_count < 2)
    {
        return HttpError::ParseFail;
    }

    size_t body_len = strlen(reqStr + pos);
    if (body_len > sizeof(body))
    {
        return HttpError::BufferOverflow;
    }
    memcpy(body, reqStr + pos, body_len);
    body[body_len] = '\0';

    request->setBody(body);

    return HttpError::NoError;
}

HttpError HttpParser::parseRequest(char *reqStr, HttpRequest *request)
{
    request->setMethod(parseMethod(reqStr));

    HttpError error = parseUrl(reqStr, request);
    if (error != HttpError::NoError)
    {
        return error;
    }

    return parseBody(reqStr, request);
}
