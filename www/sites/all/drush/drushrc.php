<?php
/**
 * @file Common Drush settings for all server and development environments.
 */

/**
 * By default, database dumps from drush sql-sync and sql-dump will be stored
 * in the db folder outside the web root folder.
 */
$options['dump-dir'] = realpath(dirname(__FILE__) . '/../../../../db');

/**
 * By default, drush sql-dump and sql-sync commands that do not specify the
 * structure-tables-key option will use this common list of database tables
 * to avoid exporting data from tables that can be safely ignored from all
 * database dumps.
 */
$options['structure-tables']['common'] = [
  'cache',
  'cache_*',
  'history',
  'semaphore',
  'sessions',
  'watchdog',
];
$options['structure-tables-key'] = 'common';

/**
 * Specify the --structure-tables-key=minimal option for drush sql-dump and
 * sql-sync commands to create a smaller database dump for developers.
 *
 * NOTE: this option should not be used as a primary backup setting due to
 * data loss.
 */
$options['structure-tables']['minimal'] = array_merge($options['structure-tables']['common'], [
  'field_revision_*',
  'flood',
  'linkchecker_*',
  'search_dataset',
  'search_index',
  'search_node_links',
  'search_totals',
  'ucla_search_log',
  'webform_submi*',
]);

/**
 * Specify the --skip-tables-key=minimal option for drush sql-dump and
 * sql-sync commands to create a smaller database dump for developers.
 *
 * NOTE this option should not be used as a primary backup setting due to
 * data loss.
 */
$options['skip-tables']['minimal'] = [
  'field_deleted_*',
];

/**
 * Output sql dumps to a file with the database name and current date.
 */
$options['result-file'] = '@DATABASE_@DATE.sql';

/**
 * Compress the zipfile.
 */
$options['gzip'] = TRUE;

/**
 * Don't notify about Drush updates.
 */
$options['self-update'] = FALSE;

/**
 * Don't make backups of the files that are updated.
 */
$options['no-backup'] = TRUE;

/**
 * Useful shell aliases.
 */
$options['shell-aliases']['pull'] = '!git pull'; // We've all done it.
$options['shell-aliases']['offline'] = 'variable-set -y --always-set maintenance_mode 1';
$options['shell-aliases']['online'] = 'variable-delete -y --exact maintenance_mode';
