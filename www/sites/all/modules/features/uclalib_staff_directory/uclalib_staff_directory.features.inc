<?php
/**
 * @file
 * uclalib_staff_directory.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uclalib_staff_directory_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function uclalib_staff_directory_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function uclalib_staff_directory_default_search_api_index() {
  $items = array();
  $items['staff_directory'] = entity_import('search_api_index', '{
    "name" : "Staff Directory",
    "machine_name" : "staff_directory",
    "description" : null,
    "server" : "uclalib_solr_server",
    "item_type" : "node",
    "options" : {
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "field_staff_acad_dept_liaison" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_staff_area_of_expertise" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_staff_departments" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_staff_email" : { "type" : "text" },
        "field_staff_first_name" : { "type" : "text" },
        "field_staff_is_subject_librarian" : { "type" : "boolean" },
        "field_staff_job_title" : { "type" : "text" },
        "field_staff_last_name" : { "type" : "text" },
        "field_staff_location" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_staff_middle_name" : { "type" : "text" },
        "field_staff_name_prefix" : { "type" : "text" },
        "field_staff_name_suffix" : { "type" : "text" },
        "field_staff_phone" : { "type" : "text" },
        "field_staff_subject_areas" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "nid" : { "type" : "integer" },
        "search_api_language" : { "type" : "string" },
        "status" : { "type" : "integer" },
        "title" : { "type" : "text" },
        "type" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : { "default" : "0", "bundles" : { "staff_profile" : "staff_profile" } }
        },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_panelized_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "page_manager" } },
        "uclalib_search_staff_index_fields" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "field_staff_email" : true,
              "field_staff_first_name" : true,
              "field_staff_job_title" : true,
              "field_staff_last_name" : true,
              "field_staff_middle_name" : true,
              "field_staff_phone" : true,
              "field_staff_name_prefix" : true,
              "field_staff_name_suffix" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_staff_email" : true,
              "field_staff_first_name" : true,
              "field_staff_job_title" : true,
              "field_staff_last_name" : true,
              "field_staff_middle_name" : true,
              "field_staff_phone" : true,
              "field_staff_name_prefix" : true,
              "field_staff_name_suffix" : true
            },
            "title" : 0,
            "alt" : 0,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_staff_email" : true,
              "field_staff_first_name" : true,
              "field_staff_job_title" : true,
              "field_staff_last_name" : true,
              "field_staff_middle_name" : true,
              "field_staff_phone" : true,
              "field_staff_name_prefix" : true,
              "field_staff_name_suffix" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_staff_email" : true,
              "field_staff_first_name" : true,
              "field_staff_job_title" : true,
              "field_staff_last_name" : true,
              "field_staff_middle_name" : true,
              "field_staff_phone" : true,
              "field_staff_name_prefix" : true,
              "field_staff_name_suffix" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "0",
    "read_only" : "0"
  }');
  return $items;
}
