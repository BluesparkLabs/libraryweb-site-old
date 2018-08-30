<?php
$repo_root = dirname(dirname(dirname(dirname(dirname(__FILE__)))));

// Ignore the *data* in the following tables when transfering the database.
$structure_tables = array(
  'custom' => array(
    'cache',
    'cache_block',
    'cache_bootstrap',
    'cache_field',
    'cache_filter',
    'cache_form',
    'cache_image',
    'cache_libraries',
    'cache_menu',
    'cache_page',
    'cache_path',
    'cache_search_api_solr',
    'cache_token',
    'cache_views',
    'cache_views_data',
    'history',
    'sessions',
    'watchdog',
  ),
);

// Your local development server.
$aliases['uclalib.local'] = array(
  'uri' => 'uclalib.local',
  'root' => "$repo_root/www",
  'path-aliases' => array(
    '%dump' => "$repo_root/db/local-" . date('Ymdhis') . '.sql',
  ),
  'command-specific' => array(
    'sql-sync' => array(
      'structure-tables-key' => 'custom',
      'structure-tables' => $structure_tables,
    ),
    'rsync' => array(
      'mode' => 'rlptDz',
    ),
  ),
  'target-command-specific' => array(
    'sql-sync' => array(
      'enable' => array('stage_file_proxy'),
    ),
  ),
);
