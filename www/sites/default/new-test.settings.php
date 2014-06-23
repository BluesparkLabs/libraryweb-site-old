<?php

// Site-specific settings for new-test
// Get database info from file which is excluded from repo
require_once('new-test.settings-db.php');

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
      'host' => 'temp-solrsearch.library.ucla.edu',
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
$conf['shib_auth_full_handler_url'] = 'https://new-test.library.ucla.edu/Shibboleth.sso/Login';
$conf['shib_auth_full_logout_url'] = 'https://new-test.library.ucla.edu/Shibboleth.sso/Logout?return=https://shb.ais.ucla.edu/shibboleth-idp/Logout';
$conf['shib_auth_link_text'] = 'Shibboleth Login';
$conf['shib_auth_logout_url'] = 'https://shb.ais.ucla.edu/shibboleth-idp/Logout';
$conf['shib_auth_username_variable'] = 'HTTP_SHIBUCLAUNIVERSITYID';

