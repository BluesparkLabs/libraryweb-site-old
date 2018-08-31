<?php
$repo_root = dirname(dirname(dirname(dirname(dirname(__FILE__)))));

// Your local development environment.
$aliases['uclalib.local'] = array(
  'uri' => 'uclalib.local',
  'root' => "$repo_root/www",
  'command-specific' => array(
    'sql-sync' => array(
      'structure-tables-key' => 'minimal',
    ),
    'sql-dump' => array(
      'structure-tables-key' => 'minimal',
    ),
    'rsync' => array(
      'mode' => 'rlptDzv',
    ),
  ),
  'target-command-specific' => array(
    'sql-sync' => array(
      'enable' => array('stage_file_proxy'),
    ),
  ),
);
