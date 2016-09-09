(function ($) {

  // Default behavior registers all panel panes with the mobile-collapsible
  // class added via Panels' CSS Properties dialog.
  Drupal.behaviors.mobileCollapsiblePanelPane = {
    attach: function (context, settings) {
      $(context).find('.panel-pane.mobile-collapsible').mobileCollapsible({
        breakpoint: "(max-width: 480px)",
        titleSelector: ".pane-title",
        contentSelector: ".pane-content"
      });
    }
  };

  // Fallback for panelized nodes that do not have the collapsible class
  // on the uclalib_nav sidebar block.
  Drupal.behaviors.mobileCollapsibleSideNav = {
    attach: function (context, settings) {
      $(context).find('.pane-uclalib-nav').mobileCollapsible({
        breakpoint: "(max-width: 767px)",
        titleSelector: ".pane-title",
        contentSelector: ".pane-content"
      }).addClass('mobile-collapsible-processed');

      // If the top-level page in sidebar nav is the active page, then change
      // the style to the darker blue dropdown.
      $(context).find('.pane-uclalib-nav .pane-title a.active')
        .closest('.pane-uclalib-nav')
        .addClass('mobile-collapsible--blue');
    }
  };

  // Make link list panes in main content column collapsible on mobile. Since
  // these panes may be added dynamically by content editors via panelizer, the
  // mobile collapsible functionality on these panes must be added here via
  // Javascript.
  Drupal.behaviors.mobileCollapsibleLinkList = {
    attach: function (context, settings) {
      $(context).find('.pane-bean-link-list:not(.sidebar-tier-2)').mobileCollapsible({
        breakpoint: "(max-width: 767px)",
        titleSelector: ".pane-title",
        contentSelector: ".pane-content"
      });
    }
  };

  // Make quick find panes collapsible on mobile. Since these panes may be
  // added dynamically by content editors via panelizer, the mobile collapsible
  // functionality on these panes must be added here via Javascript.
  Drupal.behaviors.mobileCollapsibleQuickFind = {
    attach: function (context, settings) {
      $(context).find('.pane-bean-quick-find').addClass('mobile-collapsible--blue').mobileCollapsible({
        breakpoint: "(max-width: 480px)",
        titleSelector: ".pane-title",
        contentSelector: ".pane-content"
      });
    }
  };

  // Adding the mobile-collapsible class to the news-events landing page is
  // unpredictable because it is overridden with panelizer, thus we add the
  // mobile collapsible functionality via Javascript.
  Drupal.behaviors.mobileCollapsibleNewsEventsLanding = {
    attach: function (context, settings) {
      $options = $(context).find('.pane-news-events-landing-display-panel-pane-1, .pane-news-events-landing-display-panel-pane-2').addClass('mobile-collapsible--blue').mobileCollapsible({
        breakpoint: "(max-width: 480px)",
        titleSelector: ".pane-title",
        contentSelector: ".pane-content"
      });
    }
  };

  // Adding the mobile-collapsible class to the opening-hours-table on Location
  // detail pages is unpredictable because this view mode is nearly always
  // overridden via panelizer, thus we make it collapsible via Javascript.
  Drupal.behaviors.mobileCollapsibleLocationHours = {
    attach: function (context, settings) {
      $options = $(context).find('.node-type-location .pane-opening-hours-table').addClass('mobile-collapsible--blue').mobileCollapsible({
        breakpoint: "(max-width: 620px)",
        titleSelector: ".pane-title",
        contentSelector: ".pane-content"
      });
    }
  };

  // Group the multiple individually collapsible sidebar facets into a single
  // collapsible "Search Facets" item for mobile.
  Drupal.behaviors.mobileCollapsibleSearchFacets = {
    attach: function (context, settings) {
      $options = $(context).find('.l-region--sidebar-left .sidebar-options');

      if ($options.length > 1) {
        // prepend a wrapper before the first sidebar-option which will be used
        // as the container to place all sidebar options in.
        $el = '<div class="js-sidebar-options-wrapper"><div class="js-pane-content pane-content"></div></div>';
        $options.wrapAll($el);

        // Add a clickable title.
        $('.js-sidebar-options-wrapper').prepend('<h2 class="js-pane-title pane-title">'+ Drupal.t('Search Filters')+'</h2>');

        // Setup the collapsible js functionality.
        $('.js-sidebar-options-wrapper').addClass('mobile-collapsible--title-hidden-on-desktop').mobileCollapsible({
          breakpoint: "(max-width: 767px)",
          titleSelector: "> .pane-title",
          contentSelector: "> .pane-content"
        });
      }
    }
  };

}(jQuery));
