<?php

/**
 * Implements hook_views_data().
 */
function ucla_libhours_views_data() {
  return array(
    'views' => array(
      'ucla_libhours_filter_open_now' => array(
        'title' => t('LibHours Open Now'),
        'group' => 'LibHours',
        'help' => t('Only show results that are open now.'),
        'filter' => array(
          'label' => t('Open Now'),
          'handler' => 'Drupal\ucla_libhours\Views\Handlers\Filter\UclaLibHoursFilterOpenNow',
        )
      )
    ) 
  );
}