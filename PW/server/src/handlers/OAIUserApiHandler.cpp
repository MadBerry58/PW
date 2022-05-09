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

#include "OAIUserApiHandler.h"
#include "OAIUserApiRequest.h"

namespace OpenAPI {

OAIUserApiHandler::OAIUserApiHandler(){

}

OAIUserApiHandler::~OAIUserApiHandler(){

}

void OAIUserApiHandler::createUser(OAIUser body) {
    Q_UNUSED(body);
    auto reqObj = qobject_cast<OAIUserApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        
        reqObj->createUserResponse();
    }
}
void OAIUserApiHandler::deleteUser(QString username) {
    Q_UNUSED(username);
    auto reqObj = qobject_cast<OAIUserApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        
        reqObj->deleteUserResponse();
    }
}
void OAIUserApiHandler::getUserByName(QString username) {
    Q_UNUSED(username);
    auto reqObj = qobject_cast<OAIUserApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        OAIUser res;
        reqObj->getUserByNameResponse(res);
    }
}
void OAIUserApiHandler::loginUser(QString username, QString password) {
    Q_UNUSED(username);
    Q_UNUSED(password);
    auto reqObj = qobject_cast<OAIUserApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        QString res;
        reqObj->loginUserResponse(res);
    }
}
void OAIUserApiHandler::logoutUser() {
    auto reqObj = qobject_cast<OAIUserApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        
        reqObj->logoutUserResponse();
    }
}
void OAIUserApiHandler::updateUser(QString username, OAIUser body) {
    Q_UNUSED(username);
    Q_UNUSED(body);
    auto reqObj = qobject_cast<OAIUserApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        
        reqObj->updateUserResponse();
    }
}


}