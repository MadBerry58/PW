/**
 * PW GRAPH
 * This is a sample server graph server.  You can find out more about     Swagger at [http://swagger.io](http://swagger.io) or on [irc.freenode.net, #swagger](http://swagger.io/irc/).      For this sample, you can use the api key `special-key` to test the authorization     filters.
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: apiteam@swagger.io
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QVariantMap>
#include <QDebug>

#include "OAIHelpers.h"
#include "OAIHomepageApiRequest.h"

namespace OpenAPI {

OAIHomepageApiRequest::OAIHomepageApiRequest(QHttpEngine::Socket *s, QSharedPointer<OAIHomepageApiHandler> hdl) : QObject(s), socket(s), handler(hdl) {
    auto headers = s->headers();
    for(auto itr = headers.begin(); itr != headers.end(); itr++) {
        requestHeaders.insert(QString(itr.key()), QString(itr.value()));
    }
}

OAIHomepageApiRequest::~OAIHomepageApiRequest(){
    disconnect(this, nullptr, nullptr, nullptr);
    qDebug() << "OAIHomepageApiRequest::~OAIHomepageApiRequest()";
}

QMap<QString, QString>
OAIHomepageApiRequest::getRequestHeaders() const {
    return requestHeaders;
}

void OAIHomepageApiRequest::setResponseHeaders(const QMultiMap<QString, QString>& headers){
    for(auto itr = headers.begin(); itr != headers.end(); ++itr) {
        responseHeaders.insert(itr.key(), itr.value());
    }
}


QHttpEngine::Socket* OAIHomepageApiRequest::getRawSocket(){
    return socket;
}


void OAIHomepageApiRequest::getHomepageRequest(){
    qDebug() << "/v2/";
    connect(this, &OAIHomepageApiRequest::getHomepage, handler.data(), &OAIHomepageApiHandler::getHomepage);

    


    emit getHomepage();
}



void OAIHomepageApiRequest::getHomepageResponse(){
    setSocketResponseHeaders();
    socket->setStatusCode(QHttpEngine::Socket::OK);
    socket->writeHeaders();
    if(socket->isOpen()){
        socket->close();
    }
}


void OAIHomepageApiRequest::getHomepageError(QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    socket->setStatusCode(QHttpEngine::Socket::NotFound);
    socket->write(error_str.toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}


void OAIHomepageApiRequest::sendCustomResponse(QByteArray & res, QNetworkReply::NetworkError error_type){
    Q_UNUSED(error_type); // TODO
    socket->write(res);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIHomepageApiRequest::sendCustomResponse(QIODevice *res, QNetworkReply::NetworkError error_type){
    Q_UNUSED(error_type);  // TODO
    socket->write(res->readAll());
    if(socket->isOpen()){
        socket->close();
    }
}

}