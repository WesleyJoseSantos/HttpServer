/**
 * @file HttpServer.h
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-05-06
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef __HTTPSERVER__H__
#define __HTTPSERVER__H__

#include "Http.h"
#include "HttpParser.h"
#include "HttpRequest.h"
#include "HttpResponse.h"

typedef void OnRequestCallback(HttpRequest *);

class HttpServer
{
private:
public:
    HttpServer();
    HttpServer(int port);
    void start();
    void stop();
    void on(const char *uri, HttpMethod method, OnRequestCallback callback);
};

#endif //!__HTTPSERVER__H__