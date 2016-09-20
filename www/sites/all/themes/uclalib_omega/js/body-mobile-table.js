(function ($) {

  Drupal.behaviors.uclalibBodyMobileTable = {
    attach: function (context) {
      var _this = this;
      _this.$bodyWrapper = $(context).find('.field--type-text-with-summary');
      _this.$table = _this.$bodyWrapper.find('table');
      // If there aren't any tables. Do nothing.
      if(_this.$table.length) {
        _this.check()
      }
    },
    // If there are ths, do our normal responsive thing.
    // If not, just do enough to stop them breaking.
    check: function() {
      var _this = this;
      _this.$ths = _this.$table.find('th');
      if(_this.$ths.length) {
        _this.responsify();
      }
      else {
        _this.makingDo();
      }
    },
    responsify: function() {
      var _this = this;
      _this.$bodyWrapper.addClass('responsive-data-table');
      _this.$trs = _this.$table.find('tr');
      for (var i = _this.$trs.length - 1; i >= 0; i--) {
        var $tr = $(_this.$trs[i]);
        var $tds = $tr.find('td');
        for (var j = $tds.length - 1; j >= 0; j--) {
          var $td = $($tds[j]);
          var th = _this.$ths[j];
          $td.attr('data-label', th.innerText);
        }
      }
    },
    makingDo: function() {
      var _this = this;
      _this.$bodyWrapper.addClass('responsive-contained-table');
    }
  };

})(jQuery);
