<?php

/**
 * PW GRAPH
 * PHP version 7.4
 *
 * @package OpenAPIServer
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 */

/**
 * This is a sample server graph server.  You can find out more about     Swagger at [http://swagger.io](http://swagger.io) or on [irc.freenode.net, #swagger](http://swagger.io/irc/).      For this sample, you can use the api key `special-key` to test the authorization     filters.
 * The version of the OpenAPI document: 1.0.0
 * Contact: apiteam@swagger.io
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */

/**
 * NOTE: This class is auto generated by the openapi generator program.
 * https://github.com/openapitools/openapi-generator
 */
namespace OpenAPIServer\Model;

use OpenAPIServer\BaseModel;

/**
 * Node
 *
 * @package OpenAPIServer\Model
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 */
class Node extends BaseModel
{
    /**
     * @var string Models namespace.
     * Can be required for data deserialization when model contains referenced schemas.
     */
    protected const MODELS_NAMESPACE = '\OpenAPIServer\Model';

    /**
     * @var string Constant with OAS schema of current class.
     * Should be overwritten by inherited class.
     */
    protected const MODEL_SCHEMA = <<<'SCHEMA'
{
  "required" : [ "nodeID" ],
  "type" : "object",
  "properties" : {
    "nodeID" : {
      "type" : "integer",
      "format" : "int64"
    },
    "status" : {
      "type" : "string",
      "description" : "Node status",
      "default" : "Pending",
      "enum" : [ "Pending", "Complete", "Failed" ]
    },
    "parameters" : {
      "type" : "array",
      "description" : "Node internal parameters",
      "items" : {
        "$ref" : "#/components/schemas/Parameter"
      }
    },
    "relations" : {
      "type" : "array",
      "xml" : {
        "name" : "relation",
        "wrapped" : true
      },
      "items" : {
        "$ref" : "#/components/schemas/Relation"
      }
    }
  },
  "xml" : {
    "name" : "Node"
  }
}
SCHEMA;
}
