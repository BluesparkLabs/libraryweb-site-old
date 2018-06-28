<?php
/**
 * @file
 * uclalib_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uclalib_search_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function uclalib_search_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function uclalib_search_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: promoted_locations
  $nodequeues['promoted_locations'] = array(
    'name' => 'promoted_locations',
    'title' => 'Promoted Locations',
    'subqueue_title' => '',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'destination',
      1 => 'location',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_default_search_api_index().
 */
function uclalib_search_default_search_api_index() {
  $items = array();
  $items['location_search'] = entity_import('search_api_index', '{
    "name" : "Location Search",
    "machine_name" : "location_search",
    "description" : null,
    "server" : "uclalib_solr_server",
    "item_type" : "node",
    "options" : {
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "body:summary" : { "type" : "text" },
        "body:value" : { "type" : "text" },
        "field_address" : { "type" : "text" },
        "field_amenities" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_destination_email" : { "type" : "text" },
        "field_destination_phone" : { "type" : "text" },
        "field_equipment" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_location_alt_names" : { "type" : "list\\u003Ctext\\u003E" },
        "field_location_building" : { "type" : "string" },
        "field_location_email" : { "type" : "text" },
        "field_location_nickname" : { "type" : "text" },
        "field_location_phone" : { "type" : "text" },
        "field_study_areas" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "nid" : { "type" : "integer" },
        "queue_position" : { "type" : "integer" },
        "search_api_language" : { "type" : "string" },
        "title" : { "type" : "text" },
        "type" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : {
            "default" : "0",
            "bundles" : { "destination" : "destination", "location" : "location" }
          }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 1, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "title" : true } }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : { "title" : true },
            "title" : 0,
            "alt" : 0,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : { "title" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "title" : true },
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
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0"
  }');
  $items['page_manager_pages'] = entity_import('search_api_index', '{
    "name" : "Page manager pages",
    "machine_name" : "page_manager_pages",
    "description" : null,
    "server" : "uclalib_solr_server",
    "item_type" : "search_api_page_manager",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : { "content" : { "type" : "text" }, "title" : { "type" : "text" } },
      "data_alter_callbacks" : {
        "uclalib_search_staff_index_fields" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_panelized_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : false } },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : false } },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "title" : true, "content" : true } }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : { "title" : true, "content" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : { "title" : true, "content" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "title" : true, "content" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 1,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0"
  }');
  $items['site_general_search'] = entity_import('search_api_index', '{
    "name" : "Site General Search",
    "machine_name" : "site_general_search",
    "description" : null,
    "server" : "uclalib_solr_server",
    "item_type" : "node",
    "options" : {
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "body:summary" : { "type" : "text" },
        "body:value" : { "type" : "text" },
        "changed" : { "type" : "date" },
        "created" : { "type" : "date" },
        "field_address" : { "type" : "text" },
        "field_amenities" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_amenities:description" : { "type" : "list\\u003Ctext\\u003E" },
        "field_amenities:name" : { "type" : "list\\u003Ctext\\u003E" },
        "field_destination_email" : { "type" : "text" },
        "field_destination_location" : { "type" : "integer", "entity_type" : "node" },
        "field_destination_phone" : { "type" : "text" },
        "field_equipment" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_equipment:description" : { "type" : "list\\u003Ctext\\u003E" },
        "field_equipment:name" : { "type" : "list\\u003Ctext\\u003E" },
        "field_event_audience" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_event_category" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_event_date" : { "type" : "date" },
        "field_event_location" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_event_related_content" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_event_series" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_event_subtitle" : { "type" : "text" },
        "field_exhibition_end" : { "type" : "date" },
        "field_exhibition_related_content" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_exhibition_start" : { "type" : "date" },
        "field_exhibition_subtitle" : { "type" : "text" },
        "field_location_alt_names" : { "type" : "list\\u003Ctext\\u003E" },
        "field_location_building" : { "type" : "text" },
        "field_location_email" : { "type" : "text" },
        "field_location_nickname" : { "type" : "text" },
        "field_location_phone" : { "type" : "text" },
        "field_news_audience" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_news_categories" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_news_location" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_news_related_content" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_news_series" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_resource_associated_loc" : { "type" : "integer", "entity_type" : "node" },
        "field_resource_type" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_staff_acad_dept_liaison" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_staff_area_of_expertise" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_staff_departments" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_staff_email" : { "type" : "text" },
        "field_staff_first_name" : { "type" : "text" },
        "field_staff_glossary_index" : { "type" : "string" },
        "field_staff_is_subject_librarian" : { "type" : "boolean" },
        "field_staff_job_title" : { "type" : "text" },
        "field_staff_last_name" : { "type" : "text" },
        "field_staff_location" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_staff_middle_name" : { "type" : "text" },
        "field_staff_phone" : { "type" : "text" },
        "field_study_areas" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_study_areas:description" : { "type" : "list\\u003Ctext\\u003E" },
        "field_study_areas:name" : { "type" : "list\\u003Ctext\\u003E" },
        "nid" : { "type" : "integer" },
        "search_api_access_node" : { "type" : "list\\u003Cstring\\u003E" },
        "search_api_language" : { "type" : "string" },
        "search_api_panelized" : { "type" : "text" },
        "search_api_url" : { "type" : "uri" },
        "search_api_viewed" : { "type" : "text" },
        "status" : { "type" : "boolean" },
        "title" : { "type" : "text" },
        "type" : { "type" : "string" },
        "url" : { "type" : "uri" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_panelized_entity" : { "status" : 1, "weight" : "0", "settings" : { "mode" : "page_manager" } },
        "uclalib_search_staff_index_fields" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_node_access" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_url" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 1, "weight" : "0", "settings" : { "mode" : "full" } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : { "title" : true } }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : { "title" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : { "title" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "title" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 1,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0"
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function uclalib_search_default_search_api_server() {
  $items = array();
  $items['uclalib_solr_server'] = entity_import('search_api_server', '{
    "name" : "Solr (dev)",
    "machine_name" : "uclalib_solr_server",
    "description" : "",
    "class" : "search_api_solr_service",
    "options" : {
      "clean_ids" : true,
      "site_hash_form" : [],
      "site_hash" : false,
      "scheme" : "http",
      "host" : "index",
      "port" : "8983",
      "path" : "\\/solr\\/collection1",
      "http_user" : "",
      "http_pass" : "",
      "excerpt" : 1,
      "retrieve_data" : 0,
      "highlight_data" : 0,
      "skip_schema_check" : 0,
      "solr_version" : "",
      "http_method" : "AUTO"
    },
    "enabled" : "1"
  }');
  return $items;
}
