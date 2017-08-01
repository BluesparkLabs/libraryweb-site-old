(function($) {
  Drupal.behaviors.uclalib_location = {
    attach: function (context, settings) {
      // Open Now backbone stuff
      var libHoursAppLocationModel = Backbone.Model.extend({
        url: '/ajax/libhours/hours/today/'+ settings.ucla_libhours.hours.lid
      });
      var libHoursAppLocationOpenNowView = Backbone.View.extend({
        el: '.open-now-pane',
        initialize: function() {
          this.model = new libHoursAppLocationModel();
          this.listenTo(this.model, 'sync', this.render);
          this.model.fetch();
        },
        render: function() {
          var todays_hours = this.model.toJSON();
          if (todays_hours.locations["0"].times.currently_open) {
            $(this.el).html('<span class="location-open-now">Open Now</span>');
          } else {
            $(this.el).html('<span class="location-open-now">Closed</span>');
          }
        }
      });
      var open_now = new libHoursAppLocationOpenNowView();
    }
  };
})(jQuery);