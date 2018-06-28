<?php
/**
 * @file
 * uclalib_taxonomies.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uclalib_taxonomies_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function uclalib_taxonomies_image_default_styles() {
  $styles = array();

  // Exported image style: category_icon.
  $styles['category_icon'] = array(
    'label' => 'Category Icon',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 32,
          'height' => 32,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
