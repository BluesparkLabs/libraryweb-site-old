<?php

// Setup DB
$databases = array (
  'default' =>
  array (
    'default' =>
    array (
      'database' => 'uclalib',
      'username' => 'uclalib',
      'password' => 'uclalib',
      'host' => 'uclalib.local',
      'port' => '3306',
      'driver' => 'mysql',
      'prefix' => '',
    ),
  ),
);


// Tell Drupal that we are behind a reverse proxy server
//$conf['reverse_proxy'] = TRUE;

// List of trusted IPs (IP numbers of our reverse proxies)
//$conf['reverse_proxy_addresses'] = array(
//  '127.0.0.1',
//);

// Solr settings
$conf['search_api_solr_overrides'] = array(
  'uclalib_solr_server' => array(
    'name' => t('Solr (local)'),
    'options' => array(
      'host' => 'localhost',
      'port' => '8983',
      'path' => '/solr/uclalibdev',
    ),
  ),
);

$conf['stage_file_proxy_origin'] = 'http://www.library.ucla.edu';

// In local dev, enable detailed errors
error_reporting(E_ALL);  // Have PHP complain about absolutely everything.
$conf['error_level'] = 2;  // Show all messages on your screen
ini_set('display_errors', TRUE);  // These lines give you content on WSOD pages.
ini_set('display_startup_errors', TRUE);

$conf['theme_debug'] = TRUE;
