var libHoursApp = libHoursApp || {};
(function($) {
  Drupal.behaviors.ucla_libhours = {
    attach: function (context, settings) {
      Drupal.libHoursAppCollections = new Array();
      // Collection of Hours
      libHoursApp.HoursCollection = Backbone.Collection.extend({
        url: function(){
          return '/ajax/libhours/'+ this.options.library +'/weeks/'+ this.options.next_week;
        },
        initialize: function(models, options){
          this.options = options;
        }
      });
      // App View
      libHoursApp.appView = Backbone.View.extend({
        el: '.hoursbackboneapp',
        template: _.template($('#libhours-template').html()),
        events: {
          'click a.libhours-link.next-week': 'fetchNextWeek',
          'click a.libhours-link.previous-week': 'showPrevWeek'
        },
        initialize: function() {
          _.bindAll(this, 'render', 'fetchNextWeek');
          var collection = new libHoursApp.HoursCollection([], {
            library: settings.ucla_libhours.hours.lid,
            next_week: 1
          });
          this.collection = new libHoursApp.HoursCollection([], {
            library: this.el.classList[1],
            next_week: 1
          });
          Drupal.libHoursAppCollections.push(collection);
          // set initial first week to 0. 
          this.current_week = 0;
        },
        render: function() {
          if (this.current_week >= 0) {
            this.$el.html(this.template(this.collection));
          }
        },
        fetchNextWeek: function() {
          var self = this;
          // TODO: check if I already have next week, if so, show it otherwise fetch it
          // bump next_week option for next request
          this.current_week++;
          this.collection.options.current_week = this.current_week;
          this.collection.options.next_week = this.current_week + 1;
          this.collection.fetch({
            success: function(collection, response, options) {
              // set the new week range of the fetched week
              $(self.$el.selector +' th.week-selector .week-range').text(response.hours.locations["0"].weeks["0"].week_range );
            },
            error: function (error, response) {
            }
          }).done(function() { self.render(); });
        },
        showPrevWeek: function() {
          // remove prev arrow on first week display
          if (this.current_week === 0) {
            $('th.week-selector a.libhours-link.previous-week').remove();
          }
          // decrement the current week and render
          this.current_week--;
          this.collection.options.current_week--;
          this.collection.options.next_week--;
          this.render();
        }
      });
      Drupal.libHoursAppViews = new Array();
      // instantiate the apps
      $('.hoursbackboneapp').each(function(index, element) {
        var view = new libHoursApp.appView({el: '.'+element.classList[1]});
        Drupal.libHoursAppViews.push(view);
      });

      // Open Now backbone stuff
      var libHoursAppLocationModel = Backbone.Model.extend({
        url: '/ajax/libhours/hours/today/'+ Drupal.settings.ucla_libhours.hours.lid
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
            $(this.el).html('<span class="location-open-now">Open</span>');
          } else {
            $(this.el).html('<span class="location-open-now">Closed</span>');
          }
        }
      });
      var open_now = new libHoursAppLocationOpenNowView();
    }
  };
})(jQuery);