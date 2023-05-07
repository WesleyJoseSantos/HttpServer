/**
 * @file Http.h
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-05-06
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef __HTTP__H__
#define __HTTP__H__

#define HTTP_STATUS_CONTINUE "100 Continue"
#define HTTP_STATUS_SWITCHING_PROTOCOLS "101 Switching Protocols"
#define HTTP_STATUS_PROCESSING "102 Processing"
#define HTTP_STATUS_OK "200 OK"
#define HTTP_STATUS_CREATED "201 Created"
#define HTTP_STATUS_ACCEPTED "202 Accepted"
#define HTTP_STATUS_NON_AUTHORITATIVE_INFORMATION "203 Non-Authoritative Information"
#define HTTP_STATUS_NO_CONTENT "204 No Content"
#define HTTP_STATUS_RESET_CONTENT "205 Reset Content"
#define HTTP_STATUS_PARTIAL_CONTENT "206 Partial Content"
#define HTTP_STATUS_MULTIPLE_CHOICES "300 Multiple Choices"
#define HTTP_STATUS_MOVED_PERMANENTLY "301 Moved Permanently"
#define HTTP_STATUS_FOUND "302 Found"
#define HTTP_STATUS_SEE_OTHER "303 See Other"
#define HTTP_STATUS_NOT_MODIFIED "304 Not Modified"
#define HTTP_STATUS_USE_PROXY "305 Use Proxy"
#define HTTP_STATUS_TEMPORARY_REDIRECT "307 Temporary Redirect"
#define HTTP_STATUS_BAD_REQUEST "400 Bad Request"
#define HTTP_STATUS_UNAUTHORIZED "401 Unauthorized"
#define HTTP_STATUS_PAYMENT_REQUIRED "402 Payment Required"
#define HTTP_STATUS_FORBIDDEN "403 Forbidden"
#define HTTP_STATUS_NOT_FOUND "404 Not Found"
#define HTTP_STATUS_METHOD_NOT_ALLOWED "405 Method Not Allowed"
#define HTTP_STATUS_NOT_ACCEPTABLE "406 Not Acceptable"
#define HTTP_STATUS_PROXY_AUTHENTICATION_REQUIRED "407 Proxy Authentication Required"
#define HTTP_STATUS_REQUEST_TIMEOUT "408 Request Timeout"
#define HTTP_STATUS_CONFLICT "409 Conflict"
#define HTTP_STATUS_GONE "410 Gone"
#define HTTP_STATUS_LENGTH_REQUIRED "411 Length Required"
#define HTTP_STATUS_PRECONDITION_FAILED "412 Precondition Failed"
#define HTTP_STATUS_REQUEST_ENTITY_TOO_LARGE "413 Request Entity Too Large"
#define HTTP_STATUS_REQUEST_URI_TOO_LONG "414 Request-URI Too Long"
#define HTTP_STATUS_UNSUPPORTED_MEDIA_TYPE "415 Unsupported Media Type"
#define HTTP_STATUS_REQUESTED_RANGE_NOT_SATISFIABLE "416 Requested Range Not Satisfiable"
#define HTTP_STATUS_EXPECTATION_FAILED "417 Expectation Failed"
#define HTTP_STATUS_INTERNAL_SERVER_ERROR "500 Internal Server Error"
#define HTTP_STATUS_NOT_IMPLEMENTED "501 Not Implemented"
#define HTTP_STATUS_BAD_GATEWAY "502 Bad Gateway"
#define HTTP_STATUS_SERVICE_UNAVAILABLE "503 Service Unavailable"
#define HTTP_STATUS_GATEWAY_TIMEOUT "504 Gateway Timeout"
#define HTTP_STATUS_VERSION_NOT_SUPPORTED "505 HTTP Version Not Supported"

#define HTTP_CONTENT_TYPE_TEXT "text/plain"
#define HTTP_CONTENT_TYPE_HTML "text/html"
#define HTTP_CONTENT_TYPE_JSON "application/json"
#define HTTP_CONTENT_TYPE_XML "application/xml"
#define HTTP_CONTENT_TYPE_OCTET_STREAM "application/octet-stream"
#define HTTP_CONTENT_TYPE_MULTIPART_FORM_DATA "multipart/form-data"
#define HTTP_CONTENT_TYPE_IMAGE_JPEG "image/jpeg"
#define HTTP_CONTENT_TYPE_IMAGE_PNG "image/png"
#define HTTP_CONTENT_TYPE_AUDIO_MPEG "audio/mpeg"
#define HTTP_CONTENT_TYPE_VIDEO_MP4 "video/mp4"
#define HTTP_CONTENT_TYPE_APPLICATION_PDF "application/pdf"

enum class HttpMethod
{
  GET,
  POST,
  PUT,
  DELETE,
  PATCH,
  HEAD,
  OPTIONS,
  UNKNOWN
};

enum class HttpStatusCode
{
  // Informational
  Continue = 100,
  SwitchingProtocols = 101,
  Processing = 102,

  // Success
  OK = 200,
  Created = 201,
  Accepted = 202,
  NoContent = 204,
  ResetContent = 205,
  PartialContent = 206,

  // Redirection
  MultipleChoices = 300,
  MovedPermanently = 301,
  Found = 302,
  SeeOther = 303,
  NotModified = 304,
  TemporaryRedirect = 307,

  // Client Errors
  BadRequest = 400,
  Unauthorized = 401,
  Forbidden = 403,
  NotFound = 404,
  MethodNotAllowed = 405,
  RequestTimeout = 408,
  Conflict = 409,
  Gone = 410,
  LengthRequired = 411,
  PreconditionFailed = 412,
  PayloadTooLarge = 413,
  URITooLong = 414,
  UnsupportedMediaType = 415,

  // Server Errors
  InternalServerError = 500,
  NotImplemented = 501,
  BadGateway = 502,
  ServiceUnavailable = 503,
  GatewayTimeout = 504,
  HTTPVersionNotSupported = 505
};

enum class HttpContentType
{
  TextPlain,
  TextHtml,
  ApplicationJson,
  ApplicationXml,
  ApplicationOctetStream,
  MultipartFormData,
  ImageJpeg,
  ImagePng,
  AudioMpeg,
  VideoMp4,
  ApplicationPdf
};

enum HttpError
{
  NoError,
  ParseFail,
  BufferOverflow,
};

#endif //!__HTTP__H__