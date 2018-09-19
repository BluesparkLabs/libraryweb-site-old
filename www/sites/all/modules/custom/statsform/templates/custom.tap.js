/******************************************************************************
 *
 * DOCUMENT READY
 *
 *****************************************************************************/

$(document).ready(function() {
    $('#ref').click(showReferral);

    // check/uncheck the checkboxes on Research Assistance by clicking on the div area
    //  and enable/disable submission if 1-or-more/none are checked
    $('.withCheckDivTouch').click(function() {
        var $checkbox = $(this).find(':checkbox');
        if( $checkbox[0].checked == 1 ){
            $checkbox[0].checked=0;
            $checkbox[0].value=0;
            $(this)[0].className="ui fluid card withCheckDivTouch";
            var x = document.getElementsByName("researchCheckbox");
            var i;
            var j = 0;
            for (i = 0; i < x.length; i++) {
                if (x[i].type == "checkbox") {
                    if (x[i].checked == true) {
                        j = 1;
                    }
                }
            }
            if (j <= 0){
                document.getElementById("submitResearchAssistance").disabled = true;
            } else if (j > 0){
                document.getElementById("submitResearchAssistance").disabled = false;
            }

        } else {
            $checkbox[0].checked=1;
            $checkbox[0].value=1;
            $(this)[0].className="ui fluid card withCheckDivTouchOn"
            document.getElementById("submitResearchAssistance").disabled = false;
        }
    });

    // check/uncheck the checkboxes on Research Assistance by clicking on the checkbox
    //  and enable/disable submission if 1-or-more/none are checked
    $('.withCheckBox').click(function() {
      var $checkbox = $(this).find(':checkbox');
      if( $checkbox[0].checked == 1 ){
          $checkbox[0].checked=0;
          $checkbox[0].value=0;
          var x = document.getElementsByName("researchCheckbox");
          var i;
          var j = 0;
          for (i = 0; i < x.length; i++) {
              if (x[i].type == "checkbox") {
                  if (x[i].checked == true) {
                      j = 1;
                  }
              }
          }
          if (j <= 0){
              document.getElementById("submitResearchAssistance").disabled = true;
          } else if (j > 0){
              document.getElementById("submitResearchAssistance").disabled = false;
          }

        } else {
          $checkbox[0].checked=1;
          $checkbox[0].value=1;
          document.getElementById("submitResearchAssistance").disabled = false;
      }
    });

    // increment the count boxes on Simple Search by clicking on the div area
    //  and enable/disable submission if 1-or-more/none are incremented above 0
    $('.withCount').click(function() {
        incrementCount($(this));
        if( document.getElementById("directional").textContent > 0  || document.getElementById("lookUp").textContent > 0  || document.getElementById("policyVal").textContent > 0  || document.getElementById("referralCount").textContent > 0  || document.getElementById("technicalVal").textContent > 0 ){

          document.getElementById("submitQuickQuestions").disabled = false;

        }
    });

    $('#directions').on('click', editDirections);
    $('#lookup').on('click', editLookup);
    $('#policy').on('click', editPolicy);
    $('#research').on('click', editResearch);
    $('#technical').on('click', editTechnical);

    $('#directionsResearch').on('taphold', editDirectionsResearch);
    $('#lookupResearch').on('taphold', editLookupResearch);
    $('#policyResearch').on('taphold', editPolicyResearch);
    $('#researchResearch').on('taphold', editResearchResearch);
    $('#technicalResearch').on('taphold', editTechnicalResearch);
    $('#people').on('click', editPeopleResearch);
    $('#minutes').on('click', editMinutesResearch);
});

/******************************************************************************
 *
 * IMPLEMENTATIONS
 *
 *****************************************************************************/

function showReferral() {
    $('#referral').modal('show');
}

function incrementCount(object) {
    /* Get the <div class="value"> object of that tile. */
    var countObject =
        $(object)
            .children('div.content')
            .children('div.ui.inverted.segment.left.floated')
            .children('div.ui.tiny.inverted.statistics.left.floated')
            .children('div.statistic')
            .children('div.value');

    var nameObject =
        $(object)
            .children('div.content')
            .children('div.header');

    var bName = nameObject.text();



/// dhc: prototype to fire ajax on single tap
///var animalContainer = document.getElementById("animal-info2");
///
///        $.ajax({
///          type: "POST",
///          url: "/statsform/ajax",
///          data: {
///            // For server checking
///            'bName': bName
///          },
///          dataType: "json",
///          success: function (data) {
///            // Display the time from successful response
///            if (data.message) {
///
///
///animalContainer.insertAdjacentHTML('beforeend', data.message);
///
///              $(".messages").remove();
///              $("#content").postpend('<br><br><br><br><br><br><div class="messages status">' + data.message + '</div>');
///            }
///          },
///          error: function (xmlhttp) {
///            // Error alert for failure
///            alert('Error occured: ' + xmlhttp.status);
///          }
///        });



    /* Update the count in integer form. */
    var count = parseInt(countObject.text());
    count++;

    /* Update the tile with new count. */
    countObject.text(String(count));
}

/* Quick Questions */
function editDirections() {
    /* Gather relevant elements. */
    var object =
        $('#directions')
            .children('div.ui.tiny.inverted.statistics.left.floated')
            .children('div.statistic')
            .children('div.value');
    var current_value = parseInt(object.text());
    var object_count = $('#new-directions-count');
    var object_modal = $('#directions-modal');

    /* Show modal with current count as default. */
    object_count.val(current_value+1);
    object_modal.modal('show');

    /* Update count on 'Enter', and hide modal. */
    object_modal.keypress(function(event) {
        var keycode = (event.keyCode ? event.keyCode : event.which);
        if (keycode == '13') {
            var new_value = parseInt(object_count.val());
            object.text(new_value);
            object_modal.modal('hide');
        }
        event.stopImmediatePropagation();
    });
}

function editLookup() {
    /* Gather relevant elements. */
    var object =
        $('#lookup')
            .children('div.ui.tiny.inverted.statistics.left.floated')
            .children('div.statistic')
            .children('div.value');
    var current_value = parseInt(object.text());
    var object_count = $('#new-lookup-count');
    var object_modal = $('#lookup-modal');

    /* Show modal with current count as default. */
    object_count.val(current_value+1);
    object_modal.modal('show');

    /* Update count on 'Enter', and hide modal. */
    object_modal.keypress(function(event) {
        var keycode = (event.keyCode ? event.keyCode : event.which);
        if (keycode == '13') {
            var new_value = parseInt(object_count.val());
            object.text(new_value);
            object_modal.modal('hide');
        }
        event.stopImmediatePropagation();
    });
}

function editPolicy() {
    /* Gather relevant elements. */
    var object =
        $('#policy')
            .children('div.ui.tiny.inverted.statistics.left.floated')
            .children('div.statistic')
            .children('div.value');
    var current_value = parseInt(object.text());
    var object_count = $('#new-policy-count');
    var object_modal = $('#policy-modal');

    /* Show modal with current count as default. */
    object_count.val(current_value+1);
    object_modal.modal('show');

    /* Update count on 'Enter', and hide modal. */
    object_modal.keypress(function(event) {
        var keycode = (event.keyCode ? event.keyCode : event.which);
        if (keycode == '13') {
            var new_value = parseInt(object_count.val());
            object.text(new_value);
            object_modal.modal('hide');
        }
        event.stopImmediatePropagation();
    });
}

function editResearch() {
    /* Gather relevant elements. */
    var object =
        $('#research')
            .children('div.ui.tiny.inverted.statistics.left.floated')
            .children('div.statistic')
            .children('div.value');
    var current_value = parseInt(object.text());
    var object_count = $('#new-research-count');
    var object_modal = $('#research-modal');

    /* Show modal with current count as default. */
    object_count.val(current_value+1);
    object_modal.modal('show');

    /* Update count on 'Enter', and hide modal. */
    object_modal.keypress(function(event) {
        var keycode = (event.keyCode ? event.keyCode : event.which);
        if (keycode == '13') {
            var new_value = parseInt(object_count.val());
            object.text(new_value);
            object_modal.modal('hide');
        }
        event.stopImmediatePropagation();
    });
}

function editTechnical() {
    /* Gather relevant elements. */
    var object =
        $('#technical')
            .children('div.ui.tiny.inverted.statistics.left.floated')
            .children('div.statistic')
            .children('div.value');
    var current_value = parseInt(object.text());
    var object_count = $('#new-technical-count');
    var object_modal = $('#technical-modal');

    /* Show modal with current count as default. */
    object_count.val(current_value+1);
    object_modal.modal('show');

    /* Update count on 'Enter', and hide modal. */
    object_modal.keypress(function(event) {
        var keycode = (event.keyCode ? event.keyCode : event.which);
        if (keycode == '13') {
            var new_value = parseInt(object_count.val());
            object.text(new_value);
            object_modal.modal('hide');
        }
        event.stopImmediatePropagation();
    });
}


/* Research Assistance */
function editDirectionsResearch() {
    /* Gather relevant elements. */
    var object =
        $('#directionsResearch')
            .children('div.ui.tiny.inverted.statistics.left.floated')
            .children('div.statistic')
            .children('div.value');
    var current_value = parseInt(object.text());
    var object_count = $('#new-directionsResearch-count');
    var object_modal = $('#directionsResearch-modal');

    /* Show modal with current count as default. */
    object_count.val(current_value);
    object_modal.modal('show');

    /* Update count on 'Enter', and hide modal. */
    object_modal.keypress(function(event) {
        var keycode = (event.keyCode ? event.keyCode : event.which);
        if (keycode == '13') {
            var new_value = parseInt(object_count.val());
            object.text(new_value);
            object_modal.modal('hide');
        }
        event.stopImmediatePropagation();
    });
}

function editLookupResearch() {
    /* Gather relevant elements. */
    var object =
        $('#lookupResearch')
            .children('div.ui.tiny.inverted.statistics.left.floated')
            .children('div.statistic')
            .children('div.value');
    var current_value = parseInt(object.text());
    var object_count = $('#new-lookupResearch-count');
    var object_modal = $('#lookupResearch-modal');

    /* Show modal with current count as default. */
    object_count.val(current_value);
    object_modal.modal('show');

    /* Update count on 'Enter', and hide modal. */
    object_modal.keypress(function(event) {
        var keycode = (event.keyCode ? event.keyCode : event.which);
        if (keycode == '13') {
            var new_value = parseInt(object_count.val());
            object.text(new_value);
            object_modal.modal('hide');
        }
        event.stopImmediatePropagation();
    });
}

function editPolicyResearch() {
    /* Gather relevant elements. */
    var object =
        $('#policyResearch')
            .children('div.ui.tiny.inverted.statistics.left.floated')
            .children('div.statistic')
            .children('div.value');
    var current_value = parseInt(object.text());
    var object_count = $('#new-policyResearch-count');
    var object_modal = $('#policyResearch-modal');

    /* Show modal with current count as default. */
    object_count.val(current_value);
    object_modal.modal('show');

    /* Update count on 'Enter', and hide modal. */
    object_modal.keypress(function(event) {
        var keycode = (event.keyCode ? event.keyCode : event.which);
        if (keycode == '13') {
            var new_value = parseInt(object_count.val());
            object.text(new_value);
            object_modal.modal('hide');
        }
        event.stopImmediatePropagation();
    });
}

function editResearchResearch() {
    /* Gather relevant elements. */
    var object =
        $('#researchResearch')
            .children('div.ui.tiny.inverted.statistics.left.floated')
            .children('div.statistic')
            .children('div.value');
    var current_value = parseInt(object.text());
    var object_count = $('#new-researchResearch-count');
    var object_modal = $('#researchResearch-modal');

    /* Show modal with current count as default. */
    object_count.val(current_value);
    object_modal.modal('show');

    /* Update count on 'Enter', and hide modal. */
    object_modal.keypress(function(event) {
        var keycode = (event.keyCode ? event.keyCode : event.which);
        if (keycode == '13') {
            var new_value = parseInt(object_count.val());
            object.text(new_value);
            object_modal.modal('hide');
        }
        event.stopImmediatePropagation();
    });
}

function editTechnicalResearch() {
    /* Gather relevant elements. */
    var object =
        $('#technicalResearch')
            .children('div.ui.tiny.inverted.statistics.left.floated')
            .children('div.statistic')
            .children('div.value');
    var current_value = parseInt(object.text());
    var object_count = $('#new-technicalResearch-count');
    var object_modal = $('#technicalResearch-modal');

    /* Show modal with current count as default. */
    object_count.val(current_value);
    object_modal.modal('show');

    /* Update count on 'Enter', and hide modal. */
    object_modal.keypress(function(event) {
        var keycode = (event.keyCode ? event.keyCode : event.which);
        if (keycode == '13') {
            var new_value = parseInt(object_count.val());
            object.text(new_value);
            object_modal.modal('hide');
        }
        event.stopImmediatePropagation();
    });
}

function editPeopleResearch() {
    /* Gather relevant elements. */
    var object =
        $('#peopleResearch')
            .children('div.content.middle.aligned')
            .children('div.ui.inverted.segment.left.floated')
            .children('div.ui.tiny.inverted.statistics.left.floated')
            .children('div.statistic')
            .children('div.value');
    var current_value = parseInt(object.text());
    var object_count = $('#new-peopleResearch-count');
    var object_modal = $('#peopleResearch-modal');

    /* Show modal with current count as default. */
    object_count.val(current_value+1);
    object_modal.modal('show');

    /* Update count on 'Enter', and hide modal. */
    object_modal.keypress(function(event) {
        var keycode = (event.keyCode ? event.keyCode : event.which);
        if (keycode == '13') {
            var new_value = parseInt(object_count.val());
            object.text(new_value);
            object_modal.modal('hide');
        }
        event.stopImmediatePropagation();
    });
}

function editMinutesResearch() {
    /* Gather relevant elements. */
    var object =
        $('#minutesResearch')
            .children('div.content.middle.aligned')
            .children('div.ui.inverted.segment.left.floated')
            .children('div.ui.tiny.inverted.statistics.left.floated')
            .children('div.statistic')
            .children('div.value');
    var current_value = parseInt(object.text());
    var object_count = $('#new-minutesResearch-count');
    var object_modal = $('#minutesResearch-modal');

    /* Show modal with current count as default. */
    object_count.val(current_value+1);
    object_modal.modal('show');

    /* Update count on 'Enter', and hide modal. */
    object_modal.keypress(function(event) {
        var keycode = (event.keyCode ? event.keyCode : event.which);
        if (keycode == '13') {
            var new_value = parseInt(object_count.val());
            object.text(new_value);
            object_modal.modal('hide');
        }
        event.stopImmediatePropagation();
    });
}

