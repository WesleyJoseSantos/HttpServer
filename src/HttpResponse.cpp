/**
 * @file HttpResponse.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-05-06
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "HttpResponse.h"
#include "string.h"

HttpResponse::HttpResponse() {}

HttpResponse::HttpResponse(HttpStatusCode statusCode, HttpContentType contentType, char *body)
{
    setStatusCode(statusCode);
    setContentType(contentType);
    setBody(body);
}

void HttpResponse::setStatusCode(HttpStatusCode statusCode)
{
    switch (statusCode)
    {
    case HttpStatusCode::Continue:
        this->statusCode = HTTP_STATUS_CONTINUE;
        break;
    case HttpStatusCode::SwitchingProtocols:
        this->statusCode = HTTP_STATUS_SWITCHING_PROTOCOLS;
        break;
    case HttpStatusCode::Processing:
        this->statusCode = HTTP_STATUS_PROCESSING;
        break;
    case HttpStatusCode::OK:
        this->statusCode = HTTP_STATUS_OK;
        break;
    case HttpStatusCode::Created:
        this->statusCode = HTTP_STATUS_CREATED;
        break;
    case HttpStatusCode::Accepted:
        this->statusCode = HTTP_STATUS_ACCEPTED;
        break;
    case HttpStatusCode::NoContent:
        this->statusCode = HTTP_STATUS_NO_CONTENT;
        break;
    case HttpStatusCode::ResetContent:
        this->statusCode = HTTP_STATUS_RESET_CONTENT;
        break;
    case HttpStatusCode::PartialContent:
        this->statusCode = HTTP_STATUS_PARTIAL_CONTENT;
        break;
    case HttpStatusCode::MultipleChoices:
        this->statusCode = HTTP_STATUS_MULTIPLE_CHOICES;
        break;
    case HttpStatusCode::MovedPermanently:
        this->statusCode = HTTP_STATUS_MOVED_PERMANENTLY;
        break;
    case HttpStatusCode::Found:
        this->statusCode = HTTP_STATUS_FOUND;
        break;
    case HttpStatusCode::SeeOther:
        this->statusCode = HTTP_STATUS_SEE_OTHER;
        break;
    case HttpStatusCode::NotModified:
        this->statusCode = HTTP_STATUS_NOT_MODIFIED;
        break;
    case HttpStatusCode::TemporaryRedirect:
        this->statusCode = HTTP_STATUS_TEMPORARY_REDIRECT;
        break;
    case HttpStatusCode::BadRequest:
        this->statusCode = HTTP_STATUS_BAD_REQUEST;
        break;
    case HttpStatusCode::Unauthorized:
        this->statusCode = HTTP_STATUS_UNAUTHORIZED;
        break;
    case HttpStatusCode::Forbidden:
        this->statusCode = HTTP_STATUS_FORBIDDEN;
        break;
    case HttpStatusCode::NotFound:
        this->statusCode = HTTP_STATUS_NOT_FOUND;
        break;
    case HttpStatusCode::MethodNotAllowed:
        this->statusCode = HTTP_STATUS_METHOD_NOT_ALLOWED;
        break;
    case HttpStatusCode::RequestTimeout:
        this->statusCode = HTTP_STATUS_REQUEST_TIMEOUT;
        break;
    case HttpStatusCode::Conflict:
        this->statusCode = HTTP_STATUS_CONFLICT;
        break;
    case HttpStatusCode::Gone:
        this->statusCode = HTTP_STATUS_GONE;
        break;
    case HttpStatusCode::LengthRequired:
        this->statusCode = HTTP_STATUS_LENGTH_REQUIRED;
        break;
    case HttpStatusCode::PreconditionFailed:
        this->statusCode = HTTP_STATUS_PRECONDITION_FAILED;
        break;
    case HttpStatusCode::PayloadTooLarge:
        this->statusCode = HTTP_STATUS_REQUEST_ENTITY_TOO_LARGE;
        break;
    case HttpStatusCode::URITooLong:
        this->statusCode = HTTP_STATUS_REQUEST_URI_TOO_LONG;
        break;
    case HttpStatusCode::UnsupportedMediaType:
        this->statusCode = HTTP_STATUS_UNSUPPORTED_MEDIA_TYPE;
        break;
    case HttpStatusCode::InternalServerError:
        this->statusCode = HTTP_STATUS_INTERNAL_SERVER_ERROR;
        break;
    case HttpStatusCode::NotImplemented:
        this->statusCode = HTTP_STATUS_NOT_IMPLEMENTED;
        break;
    case HttpStatusCode::BadGateway:
        this->statusCode = HTTP_STATUS_BAD_GATEWAY;
        break;
    case HttpStatusCode::ServiceUnavailable:
        this->statusCode = HTTP_STATUS_SERVICE_UNAVAILABLE;
        break;
    case HttpStatusCode::GatewayTimeout:
        this->statusCode = HTTP_STATUS_GATEWAY_TIMEOUT;
        break;
    case HttpStatusCode::HTTPVersionNotSupported:
        this->statusCode = HTTP_STATUS_VERSION_NOT_SUPPORTED;
        break;
    }
}

void HttpResponse::setContentType(HttpContentType contentType)
{
    switch (contentType)
    {
    case HttpContentType::TextPlain:
        this->contentType = HTTP_CONTENT_TYPE_TEXT;
        break;
    case HttpContentType::TextHtml:
        this->contentType = HTTP_CONTENT_TYPE_HTML;
        break;
    case HttpContentType::ApplicationJson:
        this->contentType = HTTP_CONTENT_TYPE_JSON;
        break;
    case HttpContentType::ApplicationXml:
        this->contentType = HTTP_CONTENT_TYPE_XML;
        break;
    case HttpContentType::ApplicationOctetStream:
        this->contentType = HTTP_CONTENT_TYPE_OCTET_STREAM;
        break;
    case HttpContentType::MultipartFormData:
        this->contentType = HTTP_CONTENT_TYPE_MULTIPART_FORM_DATA;
        break;
    case HttpContentType::ImageJpeg:
        this->contentType = HTTP_CONTENT_TYPE_IMAGE_JPEG;
        break;
    case HttpContentType::ImagePng:
        this->contentType = HTTP_CONTENT_TYPE_IMAGE_PNG;
        break;
    case HttpContentType::AudioMpeg:
        this->contentType = HTTP_CONTENT_TYPE_AUDIO_MPEG;
        break;
    case HttpContentType::VideoMp4:
        this->contentType = HTTP_CONTENT_TYPE_VIDEO_MP4;
        break;
    case HttpContentType::ApplicationPdf:
        this->contentType = HTTP_CONTENT_TYPE_APPLICATION_PDF;
        break;
    }
}

void HttpResponse::setBody(char *body)
{
    strcpy(this->body, body);
}
