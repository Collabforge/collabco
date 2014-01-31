<?php
/**
 * @file
 * collabco_message.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function collabco_message_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function collabco_message_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_message_type().
 */
function collabco_message_default_message_type() {
  $items = array();
  $items['create_comment'] = entity_import('message_type', '{
    "name" : "create_comment",
    "description" : "Create comment",
    "argument_keys" : [ "!teaser" ],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "en",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "\\u003Ca href=\\u0022[message:user:url]\\u0022\\u003E@{message:user:name}\\u003C\\/a\\u003E \\u003Ca href=\\u0022[message:field-comment-ref:url]\\u0022\\u003Ecommented\\u003C\\/a\\u003E on \\u003Ca href=\\u0022[message:field-node-ref:url]\\u0022\\u003E[message:field-node-ref:title]\\u003C\\/a\\u003E",
          "format" : "php_code"
        },
        {
          "value" : "[message:field-comment-ref:body]\\r\\n",
          "format" : "php_code"
        },
        {
          "value" : "\\u003Ca href=\\u0022[message:field-comment-ref:url]\\u0022\\u003Ereply\\u003C\\/a\\u003E",
          "format" : "php_code"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['create_node'] = entity_import('message_type', '{
    "name" : "create_node",
    "description" : "Create node",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "en",
    "arguments" : [],
    "message_text" : { "und" : [
        {
          "value" : "\\u003Ca href=\\u0022[message:user:url]\\u0022\\u003E@{message:user:name}\\u003C\\/a\\u003E\\u003Cbr\\u003Ecreated \\u003Ca href=\\u0022[message:field-node-ref:url]\\u0022\\u003E[message:field-node-ref:title]\\u003C\\/a\\u003E",
          "format" : "php_code"
        },
        {
          "value" : "\\u003Ca href=\\u0022[message:field-node-ref:url]\\u0022\\u003Eread more\\u003C\\/a\\u003E",
          "format" : "php_code"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['user_register'] = entity_import('message_type', '{
    "name" : "user_register",
    "description" : "User register",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "en",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "\\u003Cp\\u003E\\u003Ca href=\\u0022[message:user:url]\\u0022\\u003E@{message:user:name}\\u003C\\/a\\u003E registered.\\u003C\\/p\\u003E\\r\\n",
          "format" : "php_code"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  return $items;
}
