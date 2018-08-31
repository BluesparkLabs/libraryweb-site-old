<?php
/**
 * @file  Example configurations for local developer environments.
 *
 * Copy this file to settings.local.php and modify to your needs.
 */

/**
 * Database credentials for current environment.
 */
$databases['default']['default'] = [
  'database' => 'uclalib',
  'username' => 'uclalib',
  'password' => 'uclalib',
  'host' => 'uclalib.local',
  'port' => '3306',
  'driver' => 'mysql',
  'prefix' => '',
];

/**
 * Solr overrides for local environment.
 */
$conf['search_api_solr_overrides'] = [
  'uclalib_solr_server' => [
    'name' => t('Solr (local)'),
    'options' => [
      'host' => 'localhost',
      'port' => '8983',
      'path' => '/solr/uclalibdev',
    ],
  ],
];

/**
 * Stage File Proxy settings, loads images from production server domain.
 */
$conf['stage_file_proxy_origin'] = 'http://www.library.ucla.edu';

/**
 * Enable detailed error messages to screen on development environments.
 */
error_reporting(E_ALL);  // Have PHP complain about absolutely everything.
$conf['error_level'] = 2;  // Show all messages on your screen.
ini_set('display_errors', TRUE);  // Show errors to screen on WSOD.
ini_set('display_startup_errors', TRUE);

/**
 * Adds debugging information to the Drupal HTML output in the form
 * of inline html comments for each rendered template.
 */
$conf['theme_debug'] = TRUE;
