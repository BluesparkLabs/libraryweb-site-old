<?php
/**
 * @file
 * uclalib_staff_directory.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function uclalib_staff_directory_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['bean-staff-directory-quick-links'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'staff-directory-quick-links',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uclalib_omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uclalib_omega',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
