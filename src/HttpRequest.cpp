/**
 * @file HttpRequest.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-05-06
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "HttpRequest.h"
#include "string.h"

HttpRequest::HttpRequest() {}

HttpRequest::HttpRequest(HttpMethod method, char *url, char *body)
{
    setMethod(method);
    setUrl(url);
    setBody(body);
}

void HttpRequest::setMethod(HttpMethod method)
{
    this->method = method;
}

void HttpRequest::setUrl(char *url)
{
    strcpy(this->url, url);
}

void HttpRequest::setBody(char *body)
{
    strcpy(this->body, body);
}
