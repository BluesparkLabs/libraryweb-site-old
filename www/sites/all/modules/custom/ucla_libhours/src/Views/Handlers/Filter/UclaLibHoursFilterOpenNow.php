<?php

namespace Drupal\ucla_libhours\Views\Handlers\Filter;

/**
* @file
* Views filter plugin to filter by "open now" with the new Hours API
*/
class UclaLibHoursFilterOpenNow extends \views_handler_filter_boolean_operator {
  public function query() {
    // See if the "open now filter" exists on this view.
    if (isset($this->view->filter['ucla_libhours_filter_open_now']) && $this->view->filter['ucla_libhours_filter_open_now']->value) {
      // The "open now" filter exists, if it's exposed, we also need to check if the exposed checkbox is checked.
      if ($this->view->filter['ucla_libhours_filter_open_now']->options['exposed']) {
        // The filter is exposed, check if it has been checked.
        if (!isset($this->view->exposed_input['ucla_libhours_filter_open_now']) || (isset($this->view->exposed_input['ucla_libhours_filter_open_now']) && !$this->view->exposed_input['ucla_libhours_filter_open_now'])) {
          // The filter checkbox is not checked, don't add our filtering.
          return;
        }
      }
      // We got this far, so it's time to limit the query results to items that are open now.
      $this->get_hours_results();

      $nids = array_keys($this->hours_results['node']);
      foreach ($nids as $nid) {
        $this->query->condition('nid', $nid, 'IN', $this->options['group']);
      }
      $this->query->where[$this->options['group']]['type'] = 'OR';
    }
  }
  
  // returns an array of Node IDs of locations that are Open Now
  public function get_hours_results() {
    try {
      $service_hours = wsclient_service_load('service_library_hours');
      // call UCLA Library service to get ALL todays hours
      $todays_hours = $service_hours->getToday('hours', 'today', 0);
    }
    catch (WSClientException $exception) {
      // TODO: log exception to watchdog and maybe to screen (or even #slack)
      return false;
    }
    // put open locations in an array
    foreach ($todays_hours['locations'] as $key => $location) {
      if ($location['times']['currently_open']) {
        $lids[] = $location['lid'];
      }
    }
    $query = new \EntityFieldQuery();
    $query->fieldCondition('field_hours', 'value', $lids, 'IN');

    return $this->hours_results = $query->execute();
  }

  function value_form(&$form, &$form_state) {
    parent::value_form($form, $form_state);
    $form['value']['#type'] = 'checkbox';
  }
}