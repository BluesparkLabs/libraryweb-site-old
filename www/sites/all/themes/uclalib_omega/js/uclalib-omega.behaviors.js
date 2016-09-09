(function ($) {

  Drupal.behaviors.uclalibSearchToggle = {
    attach: function () {
      $('.header-search-form-label').click( function () {
        $(this).toggleClass('is-active');
      });
    }
  };

  // Expand facet blocks with checked elements.
  Drupal.behaviors.uclalibFacetHeader = {
    attach: function () {
      $('.ctools-collapsible-container ul input[type="checkbox"]:checked').parents('.ctools-collapsible-content').siblings('h2').click();
    }
  };

  // Allow collapsible vertical tabs on mobile layouts.
  Drupal.behaviors.uclalibMobileVerticalTabs = {
    attach: function () {
      $('.vertical-tabs-list li a').click( function () {
        $(this).parents('.vertical-tabs-list').toggleClass('is-expanded');
      });
    }
  };

})(jQuery);

function fancybox_beforeshow() {
  this.title = '<div class="title">' + (this.title ? '' + this.title + '' : '') + '</div><div class="slide-numbers" style="position: absolute; top: 0; left: 0;">' + (this.index + 1) + ' of ' + this.group.length + '</div>';
}

function fancybox_aftershow() {
  width = jQuery('.fancybox-title .child').width();
  image_width = jQuery('.fancybox-image').width();
  image_height = jQuery('.fancybox-image').height();
  jQuery('.fancybox-title .slide-numbers').css("margin-left", -(image_width - width - 390) + "px");
  jQuery('.fancybox-title .slide-numbers').css("top", -(image_height + 30) + "px");
}
