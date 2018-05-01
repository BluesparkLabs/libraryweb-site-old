<?php
/**
 * @file
 * uclalib_media.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function uclalib_media_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__audio';
  $strongarm->value = array(
    'view_modes' => array(
      'thumbnail' => array(
        'custom_settings' => FALSE,
      ),
      'custom_crop' => array(
        'custom_settings' => FALSE,
      ),
      'widescreen' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_file__audio'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__document';
  $strongarm->value = array(
    'view_modes' => array(
      'thumbnail' => array(
        'custom_settings' => FALSE,
      ),
      'custom_crop' => array(
        'custom_settings' => FALSE,
      ),
      'widescreen' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'preview' => array(
        'custom_settings' => TRUE,
      ),
      'wysiwyg' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'filename' => array(
          'weight' => '0',
        ),
        'preview' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(
        'file' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__document'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__image';
  $strongarm->value = array(
    'view_modes' => array(
      'thumbnail' => array(
        'custom_settings' => TRUE,
      ),
      'custom_crop' => array(
        'custom_settings' => TRUE,
      ),
      'widescreen' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'preview' => array(
        'custom_settings' => TRUE,
      ),
      'wysiwyg' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'filename' => array(
          'weight' => '2',
        ),
        'preview' => array(
          'weight' => '3',
        ),
        'redirect' => array(
          'weight' => '9',
        ),
      ),
      'display' => array(
        'file' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'thumbnail' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'custom_crop' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'widescreen' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__video';
  $strongarm->value = array(
    'view_modes' => array(
      'thumbnail' => array(
        'custom_settings' => FALSE,
      ),
      'custom_crop' => array(
        'custom_settings' => FALSE,
      ),
      'widescreen' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_file__video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'manualcrop_file_entity_settings_image';
  $strongarm->value = array(
    'manualcrop_enable' => 1,
    'manualcrop_keyboard' => 1,
    'manualcrop_thumblist' => 1,
    'manualcrop_inline_crop' => 0,
    'manualcrop_crop_info' => 1,
    'manualcrop_instant_preview' => 1,
    'manualcrop_instant_crop' => 0,
    'manualcrop_default_crop_area' => 1,
    'manualcrop_maximize_default_crop_area' => 0,
    'manualcrop_styles_mode' => 'include',
    'manualcrop_styles_list' => array(
      'custom_crop' => 'custom_crop',
      'thumbnail_crop' => 'thumbnail_crop',
      'widescreen_crop' => 'widescreen_crop',
    ),
    'manualcrop_require_cropping' => array(),
  );
  $export['manualcrop_file_entity_settings_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_backgroundcolor';
  $strongarm->value = '#000000';
  $export['media_backgroundcolor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_ckeditor_fully_rendered_files';
  $strongarm->value = 0;
  $export['media_ckeditor_fully_rendered_files'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_dialogclass';
  $strongarm->value = 'media-wrapper';
  $export['media_dialogclass'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_draggable';
  $strongarm->value = '0';
  $export['media_draggable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_height';
  $strongarm->value = '280';
  $export['media_height'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_icon_base_directory';
  $strongarm->value = 'public://media-icons';
  $export['media_icon_base_directory'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_minwidth';
  $strongarm->value = '500';
  $export['media_minwidth'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_modal';
  $strongarm->value = '1';
  $export['media_modal'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_opacity';
  $strongarm->value = '0.4';
  $export['media_opacity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_position';
  $strongarm->value = 'center';
  $export['media_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_resizable';
  $strongarm->value = '0';
  $export['media_resizable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_width';
  $strongarm->value = '670';
  $export['media_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_alignment';
  $strongarm->value = 1;
  $export['media_wysiwyg_alignment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_external_link';
  $strongarm->value = 0;
  $export['media_wysiwyg_external_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_remove_media_class';
  $strongarm->value = 0;
  $export['media_wysiwyg_remove_media_class'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_use_link_text_for_filename';
  $strongarm->value = 1;
  $export['media_wysiwyg_use_link_text_for_filename'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_wysiwyg_allowed_types';
  $strongarm->value = array(
    0 => 'image',
    1 => 'document',
  );
  $export['media_wysiwyg_wysiwyg_allowed_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_wysiwyg_browser_plugins';
  $strongarm->value = array(
    0 => 'upload',
    1 => 'media_default--media_browser_1',
    2 => 'media_default--media_browser_my_files',
  );
  $export['media_wysiwyg_wysiwyg_browser_plugins'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_wysiwyg_override_field_types';
  $strongarm->value = array(
    0 => 'text_long',
    1 => 'text',
  );
  $export['media_wysiwyg_wysiwyg_override_field_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_wysiwyg_override_multivalue';
  $strongarm->value = 0;
  $export['media_wysiwyg_wysiwyg_override_multivalue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_wysiwyg_upload_directory';
  $strongarm->value = 'media';
  $export['media_wysiwyg_wysiwyg_upload_directory'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_zindex';
  $strongarm->value = '10000';
  $export['media_zindex'] = $strongarm;

  return $export;
}
