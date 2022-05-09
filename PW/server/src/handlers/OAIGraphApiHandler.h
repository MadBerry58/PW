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

#ifndef OAI_OAIGraphApiHandler_H
#define OAI_OAIGraphApiHandler_H

#include <QObject>

#include "OAIGraph.h"
#include "OAINode.h"
#include <QString>

namespace OpenAPI {

class OAIGraphApiHandler : public QObject
{
    Q_OBJECT

public:
    OAIGraphApiHandler();
    virtual ~OAIGraphApiHandler();


public slots:
    virtual void addCustomGraph(OAINode body);
    virtual void addFilterView(qint64 graph_id, qint64 view_index, QString target_parameter);
    virtual void addGraphParameter(qint64 graph_id, QString name, QString parameter_type, QString parameter_value);
    virtual void addTemplateGraph(OAIGraph body);
    virtual void deleteGraph(qint64 graph_id, QString api_key);
    virtual void editGraphParameter(qint64 graph_id, QString name, QString parameter_value);
    virtual void getGraphById(qint64 graph_id);
    virtual void graphsGet();
    

};

}

#endif // OAI_OAIGraphApiHandler_H
