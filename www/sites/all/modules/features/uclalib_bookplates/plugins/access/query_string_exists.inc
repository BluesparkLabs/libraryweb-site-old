<?php

/**
 * @file
 * Plugin for controlling access based on the existence of a query string.
 */

$plugin = array(
    'title' => t('Query string exists'),
    'description' => t('Control access by whether or not a query string exists.'),
    'callback' => 'ctools_query_string_exists_ctools_access_check',
    'settings form' => 'ctools_query_string_exists_ctools_access_settings',
    'summary' => 'ctools_query_string_exists_ctools_access_summary',
    'defaults' => array('key' => ''),
  );
