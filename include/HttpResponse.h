/**
 * @file HttpResponse.h
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-05-06
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef __HTTPRESPONSE__H__
#define __HTTPRESPONSE__H__

#include "Http.h"

class HttpResponse
{
private:
    const char *statusCode;
    const char *contentType;
    char *body;

public:
    HttpResponse();
    HttpResponse(HttpStatusCode statusCode, HttpContentType contentType, char *body);
    void setStatusCode(HttpStatusCode statusCode);
    void setContentType(HttpContentType contentType);
    void setBody(char *body);
};

#endif //!__HTTPRESPONSE__H__