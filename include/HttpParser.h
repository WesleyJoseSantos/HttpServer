/**
 * @file HttpParser.h
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-05-06
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef __HTTPPARSER__H__
#define __HTTPPARSER__H__

#include "Http.h"
#include "HttpRequest.h"

class HttpParser
{
private:
    HttpMethod parseMethod(char *reqStr);
    HttpError parseUrl(char *reqStr, HttpRequest *req);
    HttpError parseBody(char *reqStr, HttpRequest *req);

public:
    HttpParser();
    HttpError parseRequest(char *reqStr, HttpRequest *req);
};

#endif //!__HTTPPARSER__H__