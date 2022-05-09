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

#include "OAIAction.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIAction::OAIAction(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAction::OAIAction() {
    this->initializeModel();
}

OAIAction::~OAIAction() {}

void OAIAction::initializeModel() {

    m_action_type_isSet = false;
    m_action_type_isValid = false;

    m_source_parameter_id_isSet = false;
    m_source_parameter_id_isValid = false;

    m_target_parameter_id_isSet = false;
    m_target_parameter_id_isValid = false;
}

void OAIAction::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIAction::fromJsonObject(QJsonObject json) {

    m_action_type_isValid = ::OpenAPI::fromJsonValue(action_type, json[QString("actionType")]);
    m_action_type_isSet = !json[QString("actionType")].isNull() && m_action_type_isValid;

    m_source_parameter_id_isValid = ::OpenAPI::fromJsonValue(source_parameter_id, json[QString("sourceParameterID")]);
    m_source_parameter_id_isSet = !json[QString("sourceParameterID")].isNull() && m_source_parameter_id_isValid;

    m_target_parameter_id_isValid = ::OpenAPI::fromJsonValue(target_parameter_id, json[QString("targetParameterID")]);
    m_target_parameter_id_isSet = !json[QString("targetParameterID")].isNull() && m_target_parameter_id_isValid;
}

QString OAIAction::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIAction::asJsonObject() const {
    QJsonObject obj;
    if (m_action_type_isSet) {
        obj.insert(QString("actionType"), ::OpenAPI::toJsonValue(action_type));
    }
    if (m_source_parameter_id_isSet) {
        obj.insert(QString("sourceParameterID"), ::OpenAPI::toJsonValue(source_parameter_id));
    }
    if (m_target_parameter_id_isSet) {
        obj.insert(QString("targetParameterID"), ::OpenAPI::toJsonValue(target_parameter_id));
    }
    return obj;
}

QString OAIAction::getActionType() const {
    return action_type;
}
void OAIAction::setActionType(const QString &action_type) {
    this->action_type = action_type;
    this->m_action_type_isSet = true;
}

bool OAIAction::is_action_type_Set() const{
    return m_action_type_isSet;
}

bool OAIAction::is_action_type_Valid() const{
    return m_action_type_isValid;
}

qint64 OAIAction::getSourceParameterId() const {
    return source_parameter_id;
}
void OAIAction::setSourceParameterId(const qint64 &source_parameter_id) {
    this->source_parameter_id = source_parameter_id;
    this->m_source_parameter_id_isSet = true;
}

bool OAIAction::is_source_parameter_id_Set() const{
    return m_source_parameter_id_isSet;
}

bool OAIAction::is_source_parameter_id_Valid() const{
    return m_source_parameter_id_isValid;
}

qint64 OAIAction::getTargetParameterId() const {
    return target_parameter_id;
}
void OAIAction::setTargetParameterId(const qint64 &target_parameter_id) {
    this->target_parameter_id = target_parameter_id;
    this->m_target_parameter_id_isSet = true;
}

bool OAIAction::is_target_parameter_id_Set() const{
    return m_target_parameter_id_isSet;
}

bool OAIAction::is_target_parameter_id_Valid() const{
    return m_target_parameter_id_isValid;
}

bool OAIAction::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_action_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_source_parameter_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_target_parameter_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIAction::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_action_type_isValid && m_source_parameter_id_isValid && m_target_parameter_id_isValid && true;
}

} // namespace OpenAPI
