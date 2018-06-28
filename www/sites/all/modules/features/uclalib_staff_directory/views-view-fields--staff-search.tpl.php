<?php

/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>
<div class="ui fluid card">
  <div class="image" style="background: rgba(0, 0, 0, 0.0);">
    <?php if (strpos($fields['field_staff_image_thumbnail']->content, 'img')): ?> 
        <?php print $fields['field_staff_image_thumbnail']->content; ?>
      <?php else: ?> 
        <div class="placeholder" style="padding: 1em;">
          <img src="/<?php print drupal_get_path('module', 'uclalib_staff_directory'); ?>/noun_214280_d5d4d4_45.png">
        </div>
    <?php endif; ?>
  </div>
  <div class="content">
    <div class="header">
      <?php print $fields['title']->content ?>
    </div>
    <div class="description">
      <?php print $fields['field_staff_job_title']->content ?>
    </div>
  </div>
  <div class="extra content">
    <?php print $fields['field_staff_location']->content ?>
  </div>
</div>
