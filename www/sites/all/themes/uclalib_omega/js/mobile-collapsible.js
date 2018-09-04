// jQuery plugin to make elements collapsible on mobile.
// Usage example with default options:
// $( ".js-mobile-collapsible" ).mobileCollapsible({
//     breakpoint: "(max-width: 600px)",
//     titleSelector: ".mobile-collapsible__title",
//     contentSelector: ".mobile-collapsible__content",
//     activeClass: "is-mobile",
//     openClass: "is-open"
// });

(function( $ ) {

  $.fn.mobileCollapsible = function( options ) {

    return this.each(function() {
      new mobileCollapsible( this, options );
    });

  };

  function mobileCollapsible( element, options ) {
      this.element = element;
      this.options = $.extend( {}, $.fn.mobileCollapsible.defaults, options );

      this.init();
  }

  mobileCollapsible.prototype.init = function () {
    var mc = this,
      $el = $(mc.element)

    if ($el.hasClass('mobile-collapsible-processed')) {
      return;
    }
    if (!$el.hasClass('mobile-collapsible')) {
      $el.addClass('mobile-collapsible');
    }
    mc.media = window.matchMedia( mc.options.breakpoint );
    mc.media.addListener(function(data) {
      mc.checkBreakpoint( data );
    });
    mc.checkBreakpoint( mc.media );

    console.log(mc.options.titleSelector);
    $el.find(mc.options.titleSelector).on('click', function (e) {
      if (mc.media.matches) {
        e.preventDefault();
        mc.toggle();
      }
    });

    // Prevent clicks on active links to the current page.
    $el.find('.active').on('click', function (e) {
      e.preventDefault();
    })
    $el.addClass('mobile-collapsible-processed');
  }

  mobileCollapsible.prototype.checkBreakpoint = function( media ) {
    if(media.matches) {
      this.addCollapsibility();
    }
    else {
      this.removeCollapsibility();
    }
  }

  mobileCollapsible.prototype.addCollapsibility = function() {
    $(this.element).addClass(this.options.activeClass);
  }

  mobileCollapsible.prototype.removeCollapsibility = function() {
    $(this.element).removeClass(this.options.activeClass);
  }

  mobileCollapsible.prototype.toggle = function() {
    $(this.element).toggleClass(this.options.openClass);
  }

  $.fn.mobileCollapsible.defaults = {
    breakpoint: '(max-width: 480px)',
    titleSelector: ".mobile-collapsible__title",
    contentSelector: ".mobile-collapsible__content",
    activeClass: 'is-mobile',
    openClass: 'is-open'
  };

}( jQuery ));
