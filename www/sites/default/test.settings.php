<?php

// Site-specific settings for test system
// Get database info from file which is excluded from repo
require_once('test.settings-db.php');

// Memcache settings
$conf['cache_backends'][] = 'sites/all/modules/contrib/memcache/memcache.inc';
$conf['cache_default_class'] = 'MemCacheDrupal';

$conf['memcache_servers'] = array(
  'test-memcached.library.ucla.edu:11211' => 'default',
);

// Tell Drupal that we are behind a reverse proxy server
$conf['reverse_proxy'] = TRUE;

// List of trusted IPs (IP numbers of our reverse proxies)
$conf['reverse_proxy_addresses'] = array(
  '127.0.0.1',
);

// Solr settings
$conf['search_api_solr_overrides'] = array(
  'uclalib_solr_server' => array(
    'name' => t('Solr Server (UCLA Test)'),
    'options' => array(
      'host' => 'test-solr.library.ucla.edu',
      'port' => '80',
      'path' => '/solr/www-test',
    ),
  ),
);

// Shibboleth settings
$conf['shib_auth_account_linking'] = 1;
$conf['shib_auth_account_linking_text'] = 'Link this account with another identity';
$conf['shib_auth_auto_destroy_session'] = 1;
$conf['shib_auth_email_variable'] = 'HTTP_SHIBMAIL';
$conf['shib_auth_full_handler_url'] = 'https://www-test.library.ucla.edu/Shibboleth.sso/Login';
$conf['shib_auth_full_logout_url'] = 'https://www-test.library.ucla.edu/Shibboleth.sso/Logout?return=https://shb.ais.ucla.edu/shibboleth-idp/Logout';
$conf['shib_auth_link_text'] = 'Shibboleth Login';
$conf['shib_auth_logout_url'] = 'https://shb.ais.ucla.edu/shibboleth-idp/Logout';
$conf['shib_auth_username_variable'] = 'HTTP_SHIBUCLAUNIVERSITYID';

// In Test, enable detailed errors
error_reporting(E_ALL);  // Have PHP complain about absolutely everything.
$conf['error_level'] = 2;  // Show all messages on your screen
ini_set('display_errors', TRUE);  // These lines give you content on WSOD pages.
ini_set('display_startup_errors', TRUE);
