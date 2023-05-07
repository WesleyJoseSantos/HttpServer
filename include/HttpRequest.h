/**
 * @file HttpRequest.h
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-05-06
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef __HTTPREQUEST__H__
#define __HTTPREQUEST__H__

#include "Http.h"
#include "HttpConfig.h"

class HttpRequest
{
private:
    HttpMethod method;
    char url[HTTP_CONFIG_URL_SIZE];
    char body[HTTP_CONFIG_BODY_SIZE];

public:
    HttpRequest();
    HttpRequest(HttpMethod method, char *url, char *body);
    void setMethod(HttpMethod method);
    void setUrl(char *url);
    void setBody(char *body);
};

#endif //!__HTTPREQUEST__H__