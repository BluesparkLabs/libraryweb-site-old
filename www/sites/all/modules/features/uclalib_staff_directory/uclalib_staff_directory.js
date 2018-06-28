// Hide the submit search button in favor of fancy icon
jQuery('#edit-submit-staff-search').hide();
// Make fancy icon submit form on click/tap
jQuery('#edit-search-api-views-fulltext-wrapper i').click(function() {
  jQuery('#views-exposed-form-staff-search-default').submit();
});
