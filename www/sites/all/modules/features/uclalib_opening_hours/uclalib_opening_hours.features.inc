<?php
/**
 * @file
 * uclalib_opening_hours.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uclalib_opening_hours_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ctools_custom_content" && $api == "ctools_content") {
    return array("version" => "1");
  }
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
function uclalib_opening_hours_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
