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
 * Graph
 *
 * @package OpenAPIServer\Model
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 */
class Graph extends BaseModel
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
  "required" : [ "graphID" ],
  "type" : "object",
  "properties" : {
    "graphID" : {
      "type" : "integer",
      "format" : "int64"
    },
    "parameters" : {
      "type" : "array",
      "description" : "The global parameters of the graph",
      "items" : {
        "$ref" : "#/components/schemas/Parameter"
      }
    },
    "views" : {
      "type" : "array",
      "items" : {
        "$ref" : "#/components/schemas/View"
      }
    },
    "defaultView" : {
      "type" : "integer",
      "description" : "The unique identifier of the default view",
      "format" : "int64"
    }
  },
  "xml" : {
    "name" : "Graph"
  }
}
SCHEMA;
}