      <!--
      // STATSFORM SCRIPTS
      // STATSFORM SCRIPTS
      // STATSFORM SCRIPTS
      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
      -->
      <script type="text/javascript">

        //////////// the following section applies to the Form page only
        if( <?php print( $page['sf_page_name'] ); ?> == 2 ) {

          // make global
          var sfDateSubmit = 0;

          // this is displayed when switching between the Quick Questions and Research Asistance tabs
          var spMsgTxt = "Please re-select the Service Point when Switching between <em>Quick Search</em> and <em>Research Questions</em>.";

          // populate the dropdown menu for departments on the FORM PAGE ONLY with data from Web Services collected in the Drupal module
          var sf_depts_vals = <?php print( $page['sf_depts'] ); ?>;
          $.each(sf_depts_vals.department,function(key,innerjson){
            $("#deptWs").append("<option value=" + innerjson.DepartmentID + ">" + innerjson.DepartmentName + "</option>");
          });

          var sfUnit = document.getElementById("sfUnit").dataset.value;
          var sfServicePoint = document.getElementById("sfServicePoint").dataset.value;

          function resetForms() {
            /// reset Service Point on tab selection
            ///  Quick Questions Page
            document.getElementById("directional").textContent = 0;
            document.getElementById("lookUp").textContent = 0;
            document.getElementById("policyVal").textContent = 0;
            document.getElementById("referralCount").textContent = 0;
            document.getElementById("technicalVal").textContent = 0;

            /// reset Service Point on tab selection
            ///  Research Assistance Page
            document.getElementById("questionTopic").value = "";
            $('.ui.dropdown').dropdown('restore defaults'); // do this one first
            $('.ui.status,dropdown').dropdown('set text', 'Patron Status');
            $('.ui.status,dropdown').dropdown('set value', '1');
            $('.ui.mode,dropdown').dropdown('set text', 'Assistance Method');
            $('.ui.mode,dropdown').dropdown('set value', '01');
            document.getElementById("courseSection").value = "";
            document.getElementById("referralCheckbox").checked = false;
            document.getElementById("researchCheckbox").checked = false;
            document.getElementById("researchCheckbox").value = 0;
            document.getElementById("technicalCheckbox").checked = false;
            document.getElementById("technicalCheckbox").value = 0;
            document.getElementById("lookupCheckbox").checked = false;
            document.getElementById("lookupCheckbox").value = 0;
            document.getElementById("directionalCheckbox").checked = false;
            document.getElementById("directionalCheckbox").value = 0;
            document.getElementById("policyCheckbox").checked = false;
            document.getElementById("policyCheckbox").value = 0;
            document.getElementById("patronCount").textContent = 0;
            document.getElementById("minuteCount").textContent = 0;
            /// END - reset Service Point on tab selection
          }

        }
        //////////// the following section applies to the Form page only


        //////////// the following section applies to the BOTH pages

        // used to set the yyy-mmm-dd in ISO format
        Date.prototype.yyyymmdd = function() {
          var mm = (this.getMonth() + 1).toString(); // getMonth() is zero-based
          var dd = this.getDate().toString();

          return [this.getFullYear(), mm.length===2 ? '-' : '-0', mm, dd.length===2 ? '-' : '-0', dd].join(''); // padding
        };
        //////////// the following section applies to the BOTH pages


        // Actions to perform on page load
        // Actions to perform on page load
        //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        $(document).ready(function() {

        //////////// the following section applies to the PRELOGIN pages
          if( <?php print( $page['sf_page_name'] ); ?> == 0 ) {

            /// default settings
            document.getElementById("servicePoint").disabled = true;
            document.getElementById("unitIndividual").disabled = true;
            document.getElementById("unitGroup").disabled = true;
            document.getElementById("submit0").disabled = true;

            document.getElementById('result').className = 'show ui rgba(255, 255, 255, 0.15) button';
            document.getElementById('servicePoint').className = 'show ui rgba(255, 255, 255, 0.15) button';
            document.getElementById('unitIndividual').className = 'show ui rgba(255, 255, 255, 0.15) button';
            document.getElementById('unitGroup').className = 'show ui rgba(255, 255, 255, 0.15) button';
            document.getElementById('submit0').className = 'show ui rgba(255, 255, 255, 0.15) button';
    
            // if user is logged in when requesting the preLogin page, pop up a msg: reLogin or quit?
            if( <?php print( $page['sf_user_login'] ); ?> == 1 ) {

            //add in role check next, allow role of statsform to skip reLogin (applies to preLogin page)
            //if( <?php print( $page['sf_user_role'] ); ?> == 1 ) {
                $('.ui.united.large.directLoadWarningModal.modal')
                  .modal('setting', 'closable', false)
                  $('#directLoadWarningModal').modal('show')
                ;
            //}
            }

          }
        //////////// the following section applies to the PRELOGIN pages


        //////////// the following section applies to the FORM pages
          if( <?php print( $page['sf_page_name'] ); ?> == 2 ) {

            // these sre present to show status - logout out to go back to preLogin and change
//            document.getElementById("unitIndividual").disabled = true;
//            document.getElementById("unitGroup").disabled = true;

            // reinsert <br>'s and &nbsp;'s for display
            sfUnit = sfUnit.replace(/ /g, " <br>");
            sfUnit = sfUnit.replace(/%C2%A0/g, "&nbsp;");
            sfUnit = sfUnit.replace(/Data <br>/, "Data ");
            sfServicePoint = sfServicePoint.replace(/ /g, " <br>");
            sfServicePoint = sfServicePoint.replace(/^SEL <br>/, "SEL ");
            sfServicePoint = sfServicePoint.replace(/^LSC <br>/, "LSC ");
            sfServicePoint = sfServicePoint.replace(/^Access <br>/, "Access ");
            sfServicePoint = sfServicePoint.replace(/Service <br>/, "Service ");
            sfServicePoint = sfServicePoint.replace(/%C2%A0/g, "&nbsp;");

            // set checkbox values to 0/1 when checkbox is checked 
            //  on the Research Assistance page in order to use the same db field used by the Quick Questions page
            $('#referralCheckbox').change(function(){
              if(this.checked) {
                document.getElementById("referralCheckbox").value = 1;
              } else {
                document.getElementById("referralCheckbox").value = 0;
              }
            });
            $('#researchCheckbox').change(function(){
              if(this.checked) {
                document.getElementById("researchCheckbox").value = 1;
              } else {
                document.getElementById("researchCheckbox").value = 0;
              }
            });
            $('#technicalCheckbox').change(function(){
              if(this.checked) {
                document.getElementById("technicalCheckbox").value = 1;
              } else {
                document.getElementById("technicalCheckbox").value = 0;
              }
            });
            $('#lookupCheckbox').change(function(){
              if(this.checked) {
                document.getElementById("lookupCheckbox").value = 1;
              } else {
                document.getElementById("lookupCheckbox").value = 0;
              }
            });
            $('#directionalCheckbox').change(function(){
              if(this.checked) {
                document.getElementById("directionalCheckbox").value = 1;
              } else {
                document.getElementById("directionalCheckbox").value = 0;
              }
            });
            $('#policyCheckbox').change(function(){
              if(this.checked) {
                document.getElementById("policyCheckbox").value = 1;
              } else {
                document.getElementById("policyCheckbox").value = 0;
              }
            });

            // apply the user selections OBTAINED from the preLogin page
            // set Unit name
            $("#result").html( sfUnit );

            // set Unit color
            $sfUnitColor = document.getElementById("sfUnitColor").dataset.value;
            $sfUnitColor = 'show ui '+ $sfUnitColor + ' button';
            document.getElementById('result').className = $sfUnitColor;

            // set Service Point name
            $("#servicePoint").html( sfServicePoint );

            // set Service Point color
            $sfServicePointColor = document.getElementById("sfServicePointColor").dataset.value;
            $sfServicePointColor = 'show ui ' + $sfServicePointColor + ' button';
            document.getElementById('servicePoint').className = $sfServicePointColor;

            // set Individual Login button and Group button
            if( "<?php print( $page['sfUnitIndividualID'] ); ?>" == 'individual'){
              $("#unitIndividual").html( 'Set to use <br>UCLA <br>Login' );
              document.getElementById('unitIndividual').className = 'show ui positive button';
              $("#unitGroup").html( 'Choose <br>Group <br>Login' );
              document.getElementById('unitGroup').className = 'show ui basic rgba(255, 255, 255, 0.15) button label';
            } else if( "<?php print( $page['sfUnitIndividualID'] ); ?>" == 'notIndividual'){
              $("#unitIndividual").html( 'Choose <br>UCLA <br>Login' );
              document.getElementById('unitIndividual').className = 'show ui basic rgba(255, 255, 255, 0.15) button label';
              $sfUnitGroupLabel = "<?php print( $page['sfUnitGroupLabel'] ); ?>";
              $("#unitGroup").html( $sfUnitGroupLabel );
              document.getElementById('unitGroup').className = 'show ui positive button';
            }
            // apply the user selections OBTAINED from the preLogin page


            $('.combo.dropdown')
              .dropdown({
                action: 'combo'
              })
            ;

//            $('.dropdown')
//              .dropdown({
//                // you can use any ui transition
//                transition: 'drop'
//              })
//            ;

            /// Tabs
            $('.menu .item').tab(
              { evaluateScripts : 'true',
                'onVisible':function(){
                  fromTab = 1;

                  resetForms();
                  document.getElementById("submitQuickQuestions").disabled = true;
                  document.getElementById("servicePoint").click();
                }
              }
            );

            // disable submissionbuttons on load of FORM page
            document.getElementById("submitQuickQuestions").disabled = true;
            document.getElementById("submitResearchAssistance").disabled = true;

          }
          // the following section applies to the FORM page only


          //////////// the following section applies to the BOTH pages
            // date/time section
            var $padTime = $('#inputTime').pickatime({
              format: 'h:i a',
              formatSubmit: 'HH:i',
              hiddenName: true,
              editable: false,
              interval: 60
            });

            var $padDate = $('#inputDatetime').pickadate({
              format: 'dd mmm',
              formatSubmit: 'yyyy-mm-dd',
              hiddenName: true,
              selectYears: 2,
              selectMonths: true
            });

            // updates date/time display every 60 sec and runs on init
            function fn60sec() {
              var sfDate = new Date();
  
              var sfTimeOptions = { hour: 'numeric', minute: 'numeric'};
              var sfTimeDisplay = new Intl.DateTimeFormat('en-AU', sfTimeOptions).format(sfDate);
              document.getElementById("inputTime").value = sfTimeDisplay;

              var sfDateOptions = { day: 'numeric', month: 'short'};
              var sfDateDisplay = new Intl.DateTimeFormat('en-AU', sfDateOptions).format(sfDate);
              document.getElementById("inputDatetime").value = sfDateDisplay;

              // 2017-09-08
              sfDateSubmit = sfDate.yyyymmdd();
            }
            fn60sec();
            setInterval(fn60sec, 60*1000);
            // date/time section


            // if a button is tapped
            //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            $(document).on("click", ".show", function () {

              // if Unit button
              if( $(this).attr('id') == "result" ) {
                fromTab = 0;
                modal = 'libraryUnits';

              // else if Service Point button is tapped before Unit is set
              } else if( ($(this).attr('id') == "servicePoint") && (result.textContent == "Choose Library Unit") ) {
                alert("Please choose a Library Unit first.");
    //            modal = 'libraryMsg';

              // else if Service Point button is clicked after Unit is set
              } else if( $(this).attr('id') == "servicePoint" ) {

                // remove any &nbsp; from 1-line or 2-line labels
                tc_copy = result.textContent;
                tc_copy = tc_copy.replace(/^Clark Library.*/, "Clark Library");
                tc_copy = tc_copy.replace(/^East Asian.*/, "East Asian");
                tc_copy = tc_copy.replace(/^Rieber Hall.*/, "Rieber Hall");
                tc_copy = tc_copy.replace(/^ Law.*/, "Law");
                tc_copy = tc_copy.replace(/^ Management.*/, "Management");
                tc_copy = tc_copy.replace(/^ Music.*/, "Music");
                tc_copy = tc_copy.replace(/^ SEL.*/, "SEL");
                tc_copy = tc_copy.replace(/^ SRLF.*/, "SRLF");
                tc_copy = tc_copy.replace(/^ YRL.*/, "YRL");
                tc_copy = tc_copy.replace(/^ Arts.*/, "Arts");
                tc_copy = tc_copy.replace(/^ Biomed.*/, "Biomed");
                tc_copy = tc_copy.replace(/^ Powell.*/, "Powell");

                // Display extra message when switching between Quick Search and Research Questions
                if( fromTab==1 ){
                  fromTab = 0;
                  $(".header.tab-switch").show();
                } else {
                  $(".header.tab-switch").hide();
                }

                // set the modal that matches the Unit
                switch (tc_copy) {
                  // Arts
                  case 'Arts':
                    modal = 'unitArts';
                    break;
                  // Biomed Access Delivery Services, Biomed Reference
                  case 'Biomed':
                    modal = 'unitBiomed';
                    break;
                  // Biomed History and Special Collections, YRL Special Collections
                  case 'Library Special Collections':
                    modal = 'unitLibrarySpecialCollections';
                    break;
                  // Clark Library
                  case 'Clark Library':
                    modal = 'unitClark';
                    break;
                  // Powell
                  case 'Powell':
                    modal = 'unitPowell';
                    break;
                  // Digital Library Program
                  case 'Digital Library Program':
                    modal = 'unitDigitalLibraryProgram';
                    break;
                  // East Asian
                  case 'East Asian':
                    modal = 'unitEastAsian';
                    break;
                  // Law
                  case 'Law':
                    modal = 'unitLaw';
                    break;
                  // Management
                  case 'Management':
                    modal = 'unitManagement';
                    break;
                  // Music
                  case 'Music':
                    modal = 'unitMusic';
                    break;
                  // Rieber Hall
                  case 'Rieber Hall':
                    modal = 'unitRieberHall';
                    break;
                  // SEL EMS, SEL Geology/Geophysics
                  case 'SEL':
                    modal = 'unitSel';
                    break;
                  // SRLF
                  case 'SRLF':
                    modal = 'unitSrlf';
                    break;
                  // Social Science Data Archive
                  case 'Social Science Data Archive':
                    modal = 'unitSocialScienceDataArchive';
                    break;
                  // YRL Access Services, YRL/CRIS
                  case 'YRL':
                    modal = 'unitYrl';
                    break;
                }

              // else if Individual Login was tapped
              } else if( $(this).attr('id') == "unitIndividual" ) {
                //////////// the following section applies to the FORM pages
                if( <?php print( $page['sf_page_name'] ); ?> == 2 ) {
                  modal = 'changeLoginModal';
                } else {
                  modal = 'individualLogin';
                }

              // else if Group Login was tapped
              } else if( $(this).attr('id') == "unitGroup" ) {
                if( <?php print( $page['sf_page_name'] ); ?> == 2 ) {
                  modal = 'changeLoginModal';
                } else {
                  modal = 'groupLogin';
                }

              // else if the Submit button was clicked
              } else if( $(this).attr('id') == "submit0" ) {
                return false;
              }

              $('#'+modal+'.modal').modal("setting", {
                closable: false,
                onApprove: function () {
                  return false;
                }
              }).modal("show");

            // on button tap
            }).on("click", ".ui.button", function () {

              // respond to the item tapped on in the modal
              switch ($(this).data("value")) {

                //////////////////////////////////////////////////////////////////////////////////////
                // Unit selection from the modal named libraryUnits (note: some sfUnitPointID are 
                //  set/reset in the Service Point selection area (next area)

                // Arts
                case 'Arts':
                  document.getElementById('sfUnitPointID').dataset.value = sfUnitPointID = 'ART00';
                  $("#result").html(" <br>Arts <br>&nbsp;");
                  document.getElementById('result').className = 'show ui pink button';
                  $(".ui.modal").modal("hide");
                  document.getElementById('servicePoint').className = 'show basic ui black button';
                  $("#servicePoint").html("Choose <br>Service <br>Point");
                  document.getElementById("servicePoint").disabled = false;
                  break;

                // Biomed Access Delivery Services, Biomed Reference
                case 'Biomed':
                  document.getElementById('sfUnitPointID').dataset.value = sfUnitPointID = 'BIO01';
                  $("#result").html(" <br>Biomed <br>&nbsp;");
                  document.getElementById('result').className = 'show ui gray button';
                  $(".ui.modal").modal("hide");
                  document.getElementById('servicePoint').className = 'show basic ui black button';
                  $("#servicePoint").html("Choose <br>Service <br>Point");
                  document.getElementById("servicePoint").disabled = false;
                  break;

                // Biomed History and Special Collections, YRL Special Collections
                case 'Library Special Collections':
                  document.getElementById('sfUnitPointID').dataset.value = sfUnitPointID = 'BIO02'; // this may be overridden by the _unit_ case below
                  $("#result").html("Library <br>Special <br>Collections");
                  document.getElementById('result').className = 'show ui brown button';
                  $(".ui.modal").modal("hide");
                  document.getElementById('servicePoint').className = 'show basic ui black button';
                  $("#servicePoint").html("Choose <br>Service <br>Point");
                  document.getElementById("servicePoint").disabled = false;
                  break;

                // Clark Library
                case 'Clark Library':
                  document.getElementById('sfUnitPointID').dataset.value = sfUnitPointID = 'CLK00';
                  $("#result").html("Clark <br>Library <br> &nbsp;");
                  document.getElementById('result').className = 'show ui brown button';
                  $(".ui.modal").modal("hide");
                  document.getElementById('servicePoint').className = 'show basic ui black button';
                  $("#servicePoint").html("Choose <br>Service <br>Point");
                  document.getElementById("servicePoint").disabled = false;
                  break;

                // Powell
                case 'Powell':
                  document.getElementById('sfUnitPointID').dataset.value = sfUnitPointID = 'COL00';
                  $("#result").html(" <br>Powell <br>&nbsp;");
                  document.getElementById('result').className = 'show ui green button';
                  $(".ui.modal").modal("hide");
                  document.getElementById('servicePoint').className = 'show basic ui black button';
                  $("#servicePoint").html("Choose <br>Service <br>Point");
                  document.getElementById("servicePoint").disabled = false;
                  break;
    
                // Digital Library Program
                case 'Digital Library Program':
                  $("#result").html("Digital <br>Library <br>Program");
                  document.getElementById('result').className = 'show ui blue button';
                  $(".ui.modal").modal("hide");
                  document.getElementById('servicePoint').className = 'show basic ui black button';
                  $("#servicePoint").html("Choose <br>Service <br>Point");
                  document.getElementById("servicePoint").disabled = false;
                  break;
    
                //
                case 'East Asian':
                  $("#result").html("East <br>Asian <br>&nbsp;");
                  document.getElementById('result').className = 'show ui tan button';
                  $(".ui.modal").modal("hide");
                  document.getElementById('servicePoint').className = 'show basic ui black button';
                  $("#servicePoint").html("Choose <br>Service <br>Point");
                  document.getElementById("servicePoint").disabled = false;
                  break;
    
                // LAW
                case 'Law':
                  $("#result").html(" <br>Law <br>&nbsp;");
                  document.getElementById('result').className = 'show ui mauve button';
                  $(".ui.modal").modal("hide");
                  document.getElementById('servicePoint').className = 'show basic ui black button';
                  $("#servicePoint").html("Choose <br>Service <br>Point");
                  document.getElementById("servicePoint").disabled = false;
                  break;
    
                // Management
                case 'Management':
                  $("#result").html(" <br>Management <br>&nbsp;");
                  document.getElementById('result').className = 'show ui orange button';
                  $(".ui.modal").modal("hide");
                  document.getElementById('servicePoint').className = 'show basic ui black button';
                  $("#servicePoint").html("Choose <br>Service <br>Point");
                  document.getElementById("servicePoint").disabled = false;
                  break;
    
                // Music
                case 'Music':
                  $("#result").html(" <br>Music <br>&nbsp;");
                  document.getElementById('result').className = 'show ui tan button';
                  $(".ui.modal").modal("hide");
                  document.getElementById('servicePoint').className = 'show basic ui black button';
                  $("#servicePoint").html("Choose <br>Service <br>Point");
                  document.getElementById("servicePoint").disabled = false;
                  break;
    
                // Rieber Hall
                case 'Rieber Hall':
                  $("#result").html("Rieber <br>Hall <br>&nbsp;");
                  document.getElementById('result').className = 'show ui silver button';
                  $(".ui.modal").modal("hide");
                  document.getElementById('servicePoint').className = 'show basic ui black button';
                  $("#servicePoint").html("Choose <br>Service <br>Point");
                  document.getElementById("servicePoint").disabled = false;
                  break;
    
                // SEL EMS, SEL Geology/Geophysics
                case 'SEL':
                  document.getElementById('sfUnitPointID').dataset.value = sfUnitPointID = 'SEL01';
                  $("#result").html(" <br>SEL <br>&nbsp;");
                  document.getElementById('result').className = 'show ui yellow button';
                  $(".ui.modal").modal("hide");
                  document.getElementById('servicePoint').className = 'show basic ui black button';
                  $("#servicePoint").html("Choose <br>Service <br>Point");
                  document.getElementById("servicePoint").disabled = false;
                  break;
    
                // SRLF
                case 'SRLF':
                  document.getElementById('sfUnitPointID').dataset.value = sfUnitPointID = 'SRL00';
                  $("#result").html(" <br>SRLF <br>&nbsp;");
                  document.getElementById('result').className = 'show ui black button';
                  $(".ui.modal").modal("hide");
                  document.getElementById('servicePoint').className = 'show basic ui black button';
                  $("#servicePoint").html("Choose <br>Service <br>Point");
                  document.getElementById("servicePoint").disabled = false;
                  break;
    
                // Social Science Data Archive
                case 'Social Science Data Archive':
                  document.getElementById('sfUnitPointID').dataset.value = sfUnitPointID = 'SSD01';
                  $("#result").html("Social <br>Science <br>Data Archive");
                  document.getElementById('result').className = 'show ui tan button';
                  $(".ui.modal").modal("hide");
                  document.getElementById('servicePoint').className = 'show basic ui black button';
                  $("#servicePoint").html("Choose <br>Service <br>Point");
                  document.getElementById("servicePoint").disabled = false;
                  break;
    
                // YRL Access Services AND YRL/CRIS (may be changed in the Service Point Case statement below)
                case 'YRL':
                  $("#result").html(" <br>YRL <br>&nbsp;");
                  document.getElementById('result').className = 'show ui white button';
                  $(".ui.modal").modal("hide");
                  document.getElementById('servicePoint').className = 'show basic ui black button';
                  $("#servicePoint").html("Choose <br>Service <br>Point");
                  document.getElementById("servicePoint").disabled = false;
                  break;
    
                //////////////////////////////////////////////////////////////////////////////////////
                // Service Point selection from the appropriate unit modal
    
                // Access Services - A-level service desk
                case 'Access Services - A-level service desk':
                  document.getElementById('sfUnitPointID').dataset.value = sfUnitPointID = 'YRL07';
                  document.getElementById('sfServicePointID').dataset.value = sfServicePointID = "13";
                  $("#servicePoint").html("Access Serv. <br>A-Level <br>Service Desk");
                  document.getElementById('servicePoint').className = 'show ui black button';
                  $(".ui.modal").modal("hide");
                  document.getElementById("unitIndividual").disabled = false;
                  document.getElementById("unitGroup").disabled = false;
                  break;
    
                // HSS/IS, Reference desk
                case 'HSS/IS, Reference desk':
                  document.getElementById('sfUnitPointID').dataset.value = sfUnitPointID = 'YRL08';
                  document.getElementById('sfServicePointID').dataset.value = sfServicePointID = "01";
                  $("#servicePoint").html("HSS/IS <br>Reference <br>Desk");
                  document.getElementById('servicePoint').className = 'show ui black button';
                  $(".ui.modal").modal("hide");
                  document.getElementById("unitIndividual").disabled = false;
                  document.getElementById("unitGroup").disabled = false;
                  break;
    
                // HSS/IS, Off-desk
                case 'HSS/IS, Off-desk':
                  document.getElementById('sfUnitPointID').dataset.value = sfUnitPointID = 'YRL08';
                  document.getElementById('sfServicePointID').dataset.value = sfServicePointID = "02";
                  $("#servicePoint").html("HSS/IS <br>Off-Desk <br>&nbsp;");
                  document.getElementById('servicePoint').className = 'show ui yellow button';
                  $(".ui.modal").modal("hide");
                  document.getElementById("unitIndividual").disabled = false;
                  document.getElementById("unitGroup").disabled = false;
                  break;
    
                //
                case 'SEL Geology, Circulation Desk':
                  document.getElementById('sfUnitPointID').dataset.value = sfUnitPointID = 'SEL03';
                  document.getElementById('sfServicePointID').dataset.value = sfServicePointID = "03";
                  $("#servicePoint").html("SEL Geology <br>Circulation <br>Desk");
                  document.getElementById('servicePoint').className = 'show ui black button';
                  $(".ui.modal").modal("hide");
                  document.getElementById("unitIndividual").disabled = false;
                  document.getElementById("unitGroup").disabled = false;
                  break;
    
                //
                case 'SEL Boelter, Circulation Desk':
                  document.getElementById('sfUnitPointID').dataset.value = sfUnitPointID = 'SEL01';
                  document.getElementById('sfServicePointID').dataset.value = sfServicePointID = "03";
                  $("#servicePoint").html("SEL Boelter <br>Circulation <br>Desk");
                  document.getElementById('servicePoint').className = 'show ui black button';
                  $(".ui.modal").modal("hide");
                  document.getElementById("unitIndividual").disabled = false;
                  document.getElementById("unitGroup").disabled = false;
                  break;
    
    
                //
                case 'Rieber Hall 115':
                  document.getElementById('sfUnitPointID').dataset.value = sfUnitPointID = 'RBR00';
                  document.getElementById('sfServicePointID').dataset.value = sfServicePointID = "14";
                  $("#servicePoint").html("Rieber <br>Hall <br>115");
                  document.getElementById('servicePoint').className = 'show ui black button';
                  $(".ui.modal").modal("hide");
                  document.getElementById("unitIndividual").disabled = false;
                  document.getElementById("unitGroup").disabled = false;
                  break;
    
                //
                case 'Entrance Foyer':
                  document.getElementById('sfServicePointID').dataset.value = sfServicePointID = "06";
                  $("#servicePoint").html("Entrance <br>Foyer <br> <br>");
                  document.getElementById('servicePoint').className = 'show ui yellow button';
                  $(".ui.modal").modal("hide");
                  document.getElementById("unitIndividual").disabled = false;
                  document.getElementById("unitGroup").disabled = false;
                  break;
    
                //
                case 'InqLab1 (research and writing help)':
                  $("#servicePoint").html(" <br>InqLab1 <br> <br>");
                  document.getElementById('servicePoint').className = 'show ui yellow button';
                  $(".ui.modal").modal("hide");
                  document.getElementById("unitIndividual").disabled = false;
                  document.getElementById("unitGroup").disabled = false;
                  break;
    
                // Office
                case 'Office':
                  document.getElementById('sfServicePointID').dataset.value = sfServicePointID = "08";
                  $("#servicePoint").html("&nbsp; <br>Office <br>&nbsp;");
                  document.getElementById('servicePoint').className = 'show ui yellow button';
                  $(".ui.modal").modal("hide");
                  document.getElementById("unitIndividual").disabled = false;
                  document.getElementById("unitGroup").disabled = false;
                  break;
    
                // Social Science Data Archive Office
                case 'Social Science Data Archive Office':
                  document.getElementById('sfUnitPointID').dataset.value = sfUnitPointID = 'SSD01';
                  document.getElementById('sfServicePointID').dataset.value = sfServicePointID = "08";
                  $("#servicePoint").html("&nbsp; <br>Office <br>&nbsp;");
                  document.getElementById('servicePoint').className = 'show ui yellow button';
                  $(".ui.modal").modal("hide");
                  document.getElementById("unitIndividual").disabled = false;
                  document.getElementById("unitGroup").disabled = false;
                  break;
    
                // Inquiry Desk
                case 'Inquiry Desk':
                  document.getElementById('sfServicePointID').dataset.value = sfServicePointID = "05";
                  $("#servicePoint").html("Inquiry <br>Desk <br> <br>");
                  document.getElementById('servicePoint').className = 'show ui yellow button';
                  $(".ui.modal").modal("hide");
                  document.getElementById("unitIndividual").disabled = false;
                  document.getElementById("unitGroup").disabled = false;
                  break;
    
                // Off-desk
                case 'Off-desk':
                  document.getElementById('sfServicePointID').dataset.value = sfServicePointID = "02";
                  $("#servicePoint").html("&nbsp; <br>Off-Desk <br>&nbsp;");
                  document.getElementById('servicePoint').className = 'show ui yellow button';
                  $(".ui.modal").modal("hide");
                  document.getElementById("unitIndividual").disabled = false;
                  document.getElementById("unitGroup").disabled = false;
                  break;
    
                // Biomed Off-desk
                case 'Biomed Off-desk':
                  document.getElementById('sfUnitPointID').dataset.value = sfUnitPointID = 'BIO04';
                  document.getElementById('sfServicePointID').dataset.value = sfServicePointID = "02";
                  $("#servicePoint").html("&nbsp; <br>Off-Desk <br>&nbsp;");
                  document.getElementById('servicePoint').className = 'show ui yellow button';
                  $(".ui.modal").modal("hide");
                  document.getElementById("unitIndividual").disabled = false;
                  document.getElementById("unitGroup").disabled = false;
                  break;
    
                // DLP Off-desk
                case 'DLP Off-desk':
                  document.getElementById('sfUnitPointID').dataset.value = sfUnitPointID = 'DLP00';
                  document.getElementById('sfServicePointID').dataset.value = sfServicePointID = "02";
                  $("#servicePoint").html("&nbsp; <br>Off-Desk <br>&nbsp;");
                  document.getElementById('servicePoint').className = 'show ui yellow button';
                  $(".ui.modal").modal("hide");
                  document.getElementById("unitIndividual").disabled = false;
                  document.getElementById("unitGroup").disabled = false;
                  break;
    
                // East Asian Off-desk
                case 'East Asian Off-desk':
                  document.getElementById('sfUnitPointID').dataset.value = sfUnitPointID = 'EAL00';
                  document.getElementById('sfServicePointID').dataset.value = sfServicePointID = "02";
                  $("#servicePoint").html("&nbsp; <br>Off-Desk <br>&nbsp;");
                  document.getElementById('servicePoint').className = 'show ui yellow button';
                  $(".ui.modal").modal("hide");
                  document.getElementById("unitIndividual").disabled = false;
                  document.getElementById("unitGroup").disabled = false;
                  break;
    
                // Management Off-desk
                case 'Management Off-desk':
                  document.getElementById('sfUnitPointID').dataset.value = sfUnitPointID = 'MAN00';
                  document.getElementById('sfServicePointID').dataset.value = sfServicePointID = "02";
                  $("#servicePoint").html("&nbsp; <br>Off-Desk <br>&nbsp;");
                  document.getElementById('servicePoint').className = 'show ui yellow button';
                  $(".ui.modal").modal("hide");
                  document.getElementById("unitIndividual").disabled = false;
                  document.getElementById("unitGroup").disabled = false;
                  break;
    
                // Music Off-desk
                case 'Music Off-desk':
                  document.getElementById('sfUnitPointID').dataset.value = sfUnitPointID = 'MUS00';
                  document.getElementById('sfServicePointID').dataset.value = sfServicePointID = "02";
                  $("#servicePoint").html("&nbsp; <br>Off-Desk <br>&nbsp;");
                  document.getElementById('servicePoint').className = 'show ui yellow button';
                  $(".ui.modal").modal("hide");
                  document.getElementById("unitIndividual").disabled = false;
                  document.getElementById("unitGroup").disabled = false;
                  break;
    
                // LSC Off-desk
                case 'LSC Off-desk':
                  document.getElementById('sfUnitPointID').dataset.value = sfUnitPointID = 'YRL03';
                  document.getElementById('sfServicePointID').dataset.value = sfServicePointID = "02";
                  $("#servicePoint").html("LSC <br>Off-desk <br> <br>");
                  document.getElementById('servicePoint').className = 'show ui black button';
                  $(".ui.modal").modal("hide");
                  document.getElementById("unitIndividual").disabled = false;
                  document.getElementById("unitGroup").disabled = false;
                  break;
    
                // SEL Boelter, Off-desk
                case 'SEL Boelter, Off-desk':
                  document.getElementById('sfUnitPointID').dataset.value = sfUnitPointID = 'SEL01';
                  document.getElementById('sfServicePointID').dataset.value = sfServicePointID = "02";
                  $("#servicePoint").html("SEL <br>Boelter <br>Off-desk <br>");
                  document.getElementById('servicePoint').className = 'show ui black button';
                  $(".ui.modal").modal("hide");
                  document.getElementById("unitIndividual").disabled = false;
                  document.getElementById("unitGroup").disabled = false;
                  break;
    
                //
                case 'LSC Biomed':
                  document.getElementById('sfUnitPointID').dataset.value = sfUnitPointID = 'BIO02';
                  document.getElementById('sfServicePointID').dataset.value = sfServicePointID = "08";
                  $("#servicePoint").html("LSC <br>Biomed <br>&nbsp;");
                  document.getElementById('servicePoint').className = 'show ui yellow button';
                  $(".ui.modal").modal("hide");
                  document.getElementById("unitIndividual").disabled = false;
                  document.getElementById("unitGroup").disabled = false;
                  break;
    
                // The Circulation Desk
                case 'The Circulation Desk':
                  document.getElementById('sfServicePointID').dataset.value = sfServicePointID = "03";
                  $("#servicePoint").html("The <br>Circulation <br>Desk");
                  document.getElementById('servicePoint').className = 'show ui black button';
                  $(".ui.modal").modal("hide");
                  document.getElementById("unitIndividual").disabled = false;
                  document.getElementById("unitGroup").disabled = false;
                  break;
    
                // Law Circulation Desk
                case 'Law Circulation Desk':
                  document.getElementById('sfUnitPointID').dataset.value = sfUnitPointID = 'LAW00';
                  document.getElementById('sfServicePointID').dataset.value = sfServicePointID = "03";
                  $("#servicePoint").html("Law <br>Circulation <br>Desk");
                  document.getElementById('servicePoint').className = 'show ui black button';
                  $(".ui.modal").modal("hide");
                  document.getElementById("unitIndividual").disabled = false;
                  document.getElementById("unitGroup").disabled = false;
                  break;
    
                // Arts Circulation Desk
                case 'Arts Circulation Desk':
                  document.getElementById('sfServicePointID').dataset.value = sfServicePointID = "03";
                  document.getElementById('sfServicePointID').dataset.value = "03";
                  $("#servicePoint").html("Arts <br>Circulation <br>Desk");
                  document.getElementById('servicePoint').className = 'show ui black button';
                  $(".ui.modal").modal("hide");
                  document.getElementById("unitIndividual").disabled = false;
                  document.getElementById("unitGroup").disabled = false;
                  break;
    
                // Biomed Circulation Desk
                case 'Biomed Circulation Desk':
                  document.getElementById('sfUnitPointID').dataset.value = sfUnitPointID = 'BIO01';
                  document.getElementById('sfServicePointID').dataset.value = sfServicePointID = "03";
                  $("#servicePoint").html("Biomed <br>Circulation <br>Desk");
                  document.getElementById('servicePoint').className = 'show ui black button';
                  $(".ui.modal").modal("hide");
                  document.getElementById("unitIndividual").disabled = false;
                  document.getElementById("unitGroup").disabled = false;
                  break;
    
                // Management Circulation Desk
                case 'Management Circulation Desk':
                  document.getElementById('sfUnitPointID').dataset.value = sfUnitPointID = 'MAN00';
                  document.getElementById('sfServicePointID').dataset.value = sfServicePointID = "03";
                  $("#servicePoint").html("Management <br>Circulation <br>Desk");
                  document.getElementById('servicePoint').className = 'show ui black button';
                  $(".ui.modal").modal("hide");
                  document.getElementById("unitIndividual").disabled = false;
                  document.getElementById("unitGroup").disabled = false;
                  break;
    
                // Music Circulation Desk
                case 'Music Circulation Desk':
                  document.getElementById('sfUnitPointID').dataset.value = sfUnitPointID = 'MUS00';
                  document.getElementById('sfServicePointID').dataset.value = sfServicePointID = "03";
                  $("#servicePoint").html("Music <br>Circulation <br>Desk");
                  document.getElementById('servicePoint').className = 'show ui black button';
                  $(".ui.modal").modal("hide");
                  document.getElementById("unitIndividual").disabled = false;
                  document.getElementById("unitGroup").disabled = false;
                  break;
    
                // SRLF Circulation Desk
                case 'SRLF Circulation Desk':
                  document.getElementById('sfUnitPointID').dataset.value = sfUnitPointID = 'SRL00';
                  document.getElementById('sfServicePointID').dataset.value = sfServicePointID = "03";
                  $("#servicePoint").html("SRLF <br>Circulation <br>Desk");
                  document.getElementById('servicePoint').className = 'show ui black button';
                  $(".ui.modal").modal("hide");
                  document.getElementById("unitIndividual").disabled = false;
                  document.getElementById("unitGroup").disabled = false;
                  break;
    
                // YRL Access Services Circulation Desk
                case 'YRL Access Services Circulation Desk':
                  document.getElementById('sfUnitPointID').dataset.value = sfUnitPointID = 'YRL07';
                  document.getElementById('sfServicePointID').dataset.value = sfServicePointID = "03";
                  $("#servicePoint").html("YRL <br>Circulation <br>Desk");
                  document.getElementById('servicePoint').className = 'show ui black button';
                  $(".ui.modal").modal("hide");
                  document.getElementById("unitIndividual").disabled = false;
                  document.getElementById("unitGroup").disabled = false;
                  break;
    
                //
                case 'The Reference Desk':
                  document.getElementById('sfServicePointID').dataset.value = sfServicePointID = "01";
                  $("#servicePoint").html("The <br>Reference <br>Desk");
                  document.getElementById('servicePoint').className = 'show ui black button';
                  $(".ui.modal").modal("hide");
                  document.getElementById("unitIndividual").disabled = false;
                  document.getElementById("unitGroup").disabled = false;
                  break;
    
                // Biomed Reference Desk
                case 'Biomed Reference Desk':
                  document.getElementById('sfUnitPointID').dataset.value = sfUnitPointID = 'BIO04';
                  document.getElementById('sfServicePointID').dataset.value = sfServicePointID = "01";
                  $("#servicePoint").html("The <br>Reference <br>Desk");
                  document.getElementById('servicePoint').className = 'show ui black button';
                  $(".ui.modal").modal("hide");
                  document.getElementById("unitIndividual").disabled = false;
                  document.getElementById("unitGroup").disabled = false;
                  break;
    
                // LSC YRL Reference desk
                case 'LSC YRL Reference desk':
                  document.getElementById('sfUnitPointID').dataset.value = sfUnitPointID = 'YRL03';
                  document.getElementById('sfServicePointID').dataset.value = sfServicePointID = "01";
                  $("#servicePoint").html("LSC YRL <br>Reference <br>Desk");
                  document.getElementById('servicePoint').className = 'show ui black button';
                  $(".ui.modal").modal("hide");
                  document.getElementById("unitIndividual").disabled = false;
                  document.getElementById("unitGroup").disabled = false;
                  break;
    
                // Law Reference desk
                case 'Law Reference Desk':
                  document.getElementById('sfUnitPointID').dataset.value = sfUnitPointID = 'LAW00';
                  document.getElementById('sfServicePointID').dataset.value = sfServicePointID = "01";
                  $("#servicePoint").html("The <br>Reference <br>Desk");
                  document.getElementById('servicePoint').className = 'show ui black button';
                  $(".ui.modal").modal("hide");
                  document.getElementById("unitIndividual").disabled = false;
                  document.getElementById("unitGroup").disabled = false;
                  break;
    
                // Management Reference desk
                case 'Management Reference Desk':
                  document.getElementById('sfUnitPointID').dataset.value = sfUnitPointID = 'MAN00';
                  document.getElementById('sfServicePointID').dataset.value = sfServicePointID = "01";
                  $("#servicePoint").html("The <br>Reference <br>Desk");
                  document.getElementById('servicePoint').className = 'show ui black button';
                  $(".ui.modal").modal("hide");
                  document.getElementById("unitIndividual").disabled = false;
                  document.getElementById("unitGroup").disabled = false;
                  break;
    
                // Music Reference desk
                case 'Music Reference Desk':
                  document.getElementById('sfUnitPointID').dataset.value = sfUnitPointID = 'MUS00';
                  document.getElementById('sfServicePointID').dataset.value = sfServicePointID = "01";
                  $("#servicePoint").html("The <br>Reference <br>Desk");
                  document.getElementById('servicePoint').className = 'show ui black button';
                  $(".ui.modal").modal("hide");
                  document.getElementById("unitIndividual").disabled = false;
                  document.getElementById("unitGroup").disabled = false;
                  break;
    
                // SEL Boelter, Reference Desk
                case 'SEL Boelter, Reference Desk':
                  document.getElementById('sfUnitPointID').dataset.value = sfUnitPointID = 'SEL01';
                  document.getElementById('sfServicePointID').dataset.value = sfServicePointID = "01";
                  $("#servicePoint").html("SEL Boelter <br>Reference <br>Desk");
                  document.getElementById('servicePoint').className = 'show ui black button';
                  $(".ui.modal").modal("hide");
                  document.getElementById("unitIndividual").disabled = false;
                  document.getElementById("unitGroup").disabled = false;
                  break;
    
                //
                case 'Reference Desk, 2nd Flr':
                  $("#servicePoint").html("Reference <br>Desk, <br>2nd Flr");
                  document.getElementById('servicePoint').className = 'show ui black button';
                  $(".ui.modal").modal("hide");
                  document.getElementById("unitIndividual").disabled = false;
                  document.getElementById("unitGroup").disabled = false;
                  break;
    
                //
                case 'Science and Engineering Library Service':
                  $("#servicePoint").html("SEL <br>Library <br>Service");
                  document.getElementById('servicePoint').className = 'show ui brown button';
                  $(".ui.modal").modal("hide");
                  document.getElementById("unitIndividual").disabled = false;
                  document.getElementById("unitGroup").disabled = false;
                  break;
    
                //
                case 'A-Level Service Desk':
                  $("#servicePoint").html("A-Level <br>Service <br>Desk");
                  document.getElementById('servicePoint').className = 'show ui brown button';
                  $(".ui.modal").modal("hide");
                  document.getElementById("unitIndividual").disabled = false;
                  document.getElementById("unitGroup").disabled = false;
                  break;
    
                // The Information Desk
                case 'The Information Desk':
                  $("#servicePoint").html("The <br>Information <br>Desk");
                  document.getElementById('servicePoint').className = 'show ui gray button';
                  $(".ui.modal").modal("hide");
                  document.getElementById("unitIndividual").disabled = false;
                  document.getElementById("unitGroup").disabled = false;
                  break;
    
                // East Asian Information Desk
                case 'East Asian Information Desk':
                  document.getElementById('sfUnitPointID').dataset.value = sfUnitPointID = 'EAL00';
                  document.getElementById('sfServicePointID').dataset.value = sfServicePointID = "07";
                  $("#servicePoint").html("The <br>Information <br>Desk");
                  document.getElementById('servicePoint').className = 'show ui gray button';
                  $(".ui.modal").modal("hide");
                  document.getElementById("unitIndividual").disabled = false;
                  document.getElementById("unitGroup").disabled = false;
                  break;
    
                //
                case 'The Cashier Window':
                  $("#servicePoint").html("The <br>Cashier <br>Window");
                  document.getElementById('servicePoint').className = 'show ui olive button';
                  $(".ui.modal").modal("hide");
                  document.getElementById("unitIndividual").disabled = false;
                  document.getElementById("unitGroup").disabled = false;
                  break;
    
                //
                case 'Phone Answering Station':
                  $("#servicePoint").html("Phone <br>Answering <br>Station");
                  document.getElementById('servicePoint').className = 'show ui pink button';
                  $(".ui.modal").modal("hide");
                  document.getElementById("unitIndividual").disabled = false;
                  document.getElementById("unitGroup").disabled = false;
                  break;
    
                //////////////////////////////////////////////////////////////////////////////////////
                // Login, individual section
                //
                case 'UCLA Login':
                  $("#unitIndividual").html("Set to use <br>UCLA <br>Login");
                  document.getElementById('unitIndividual').className = 'show ui positive button';
                  document.getElementById('unitGroup').className = 'show ui basic rgba(255, 255, 255, 0.15) button label';
                  $("#unitGroup").html("Choose <br>Group <br>Login");
                  sfUnitIndividualID = 'individual';
                  sfUnitIndividualLabel = 'Set to use <br>UCLA <br>Login';
                  sfUnitIndividualColor = 'show ui positive button';
                  sfUnitGroupID = '';
                  sfUnitGroupLabel = 'Choose <br>Group <br>Login';
                  sfUnitGroupColor = 'show ui basic rgba(255, 255, 255, 0.15) button label';
                  $(".ui.modal").modal("hide");
                  document.getElementById("submit0").disabled = false;
                  break;
    
                //////////////////////////////////////////////////////////////////////////////////////
                // Login selection, group selection
                //
                case ($(this).data("value").match(/^sfGroup/) || {}).input:
                  sfGroupVals = $(this).data("value").split("_");
                  $("#unitGroup").html(sfGroupVals[2].wrap(20));
                  document.getElementById('unitGroup').className = 'show ui positive button label';
                  document.getElementById('unitIndividual').className = 'show ui basic rgba(255, 255, 255, 0.15) button';
                  $("#unitIndividual").html("Choose <br>Single <br>Login");
                  sfUnitGroupID = sfGroupVals[1];
                  sfUnitGroupLabel = sfGroupVals[2].wrap(20);
                  sfUnitGroupColor = 'show ui positive button label';
                  sfUnitIndividualID = 'notIndividual';
                  sfUnitIndividualLabel = 'Choose <br>Single <br>Login';
                  sfUnitIndividualColor = 'show ui basic rgba(255, 255, 255, 0.15)';
                  $(".ui.modal").modal("hide");
                  document.getElementById("submit0").disabled = false;
                  break;
    
                //////////////////////////////////////////////////////////////////////////////////////
                // Login, reLogin Cancel
                //
                case ($(this).data("value").match(/^reLoginCancel/) || {}).input:
                  // location.href = 'https://www.library.ucla.edu';
                  $(".ui.modal").modal("hide");
                  document.getElementById("submit0").disabled = false;
                  break;
    
                // Login, reLogin
                //
                case ($(this).data("value").match(/^reLogin/) || {}).input:
                  location.href = '/services/statsform?reLogin=1';
                  $('.ui.united.large.reLoginConfSpinner.modal')
                    .modal('setting', 'closable', false)
                    $('#reLoginConfSpinner').modal('show')
                  ;
                  // $(".ui.modal").modal("hide");
                  break;

                // Logout section
                //
                case ($(this).data("value").match(/^logout/) || {}).input:
                  location.href = '/statsform/logout';
                  $(".ui.modal").modal("hide");
                  document.getElementById("submit0").disabled = false;
                  break;

              }
              // respond to the item tapped on in the modal
    
    
              // disable the submit button "Go to Login" if Unit or Service Point or Login Type are not set chosen - else enable
              if( (document.getElementById("result").textContent == "Choose Library Unit") || (document.getElementById("servicePoint").textContent == "Choose Service Point") || ((document.getElementById("unitIndividual").textContent == "Choose Single Login") && (document.getElementById("unitGroup").textContent == "Choose Group Login")) ) {
    
                document.getElementById("submit0").disabled = true;
              } else {
                document.getElementById("submit0").disabled = false;
              }
            });
            //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            // if a button is tapped


            // Semanti-UI icon names to choose from for group modal, possibly other modals
            var semanticIcons = [ 
"search","mail outline","external","signal","setting","home","inbox","browser","tag","tags","calendar","comment","comments","shop","privacy","settings","trophy","payment","feed","alarm outline","tasks","cloud","lab","mail","idea","dashboard","sitemap","alarm","terminal","code","protect","calendar outline","ticket","external square","map","bug","mail square","history","options","comment outline","comments outline","text telephone","find","wifi","alarm slash","alarm slash outline","copyright","at","eyedropper","paint brush","heartbeat","download","repeat","refresh","lock","bookmark","print","write","theme","adjust","edit","external share","ban","mail forward","share","expand","compress","unhide","hide","random","retweet","sign out","pin","sign in","upload","call","call square","remove bookmark","unlock","configure","filter","wizard","undo","exchange","cloud download","cloud upload","reply","reply all","erase","unlock alternate","archive","translate","recycle","send","send outline","share alternate","share alternate square","wait","write square","share square","add to cart","in cart","add user","remove user","help circle","info circle","warning","warning circle","warning sign","help","info","announcement","birthday","users","doctor","child","user","handicap","student","spy","female","male","woman","man","non binary transgender","intergender","transgender","lesbian","gay","heterosexual","other gender","other gender vertical","other gender horizontal","neuter","grid layout","list layout","block layout","zoom","zoom out","resize vertical","resize horizontal","maximize","crop","cocktail","road","flag","book","gift","leaf","fire","plane","magnet","legal","lemon","world","travel","shipping","money","lightning","rain","treatment","suitcase","bar","flag outline","flag checkered","puzzle","fire extinguisher","rocket","anchor","bullseye","sun","moon","fax","life ring","bomb","soccer","calculator","diamond","crosshairs","asterisk","certificate","circle","quote left","quote right","ellipsis horizontal","ellipsis vertical","cube","cubes","circle notched","circle thin","square outline","square","checkmark","remove","checkmark box","move","add circle","minus circle","remove circle","check circle","remove circle outline","check circle outline","plus","minus","add square","radio","selected radio","minus square","minus square outline","check square","plus square outline","toggle off","toggle on","film","sound","photo","bar chart","camera retro","newspaper","area chart","pie chart","line chart","arrow circle outline down","arrow circle outline up","chevron left","chevron right","arrow left","arrow right","arrow up","arrow down","chevron up","chevron down","pointing right","pointing left","pointing up","pointing down","arrow circle left","arrow circle right","arrow circle up","arrow circle down","caret down","caret up","caret left","caret right","angle double left","angle double right","angle double up","angle double down","angle left","angle right","angle up","angle down","chevron circle left","chevron circle right","chevron circle up","chevron circle down","toggle down","toggle up","toggle right","long arrow down","long arrow up","long arrow left","long arrow right","arrow circle outline right","arrow circle outline left","toggle left","power","trash","trash outline","disk outline","desktop","laptop","tablet","mobile","game","keyboard","plug","folder","folder open","level up","level down","file","file outline","file text","file text outline","folder outline","folder open outline","file pdf outline","file word outline","file excel outline","file powerpoint outline","file image outline","file archive outline","file audio outline","file video outline","file code outline","barcode","qrcode","fork","html5","css3","rss","rss square","openid","database","server","heart","star","empty star","thumbs outline up","thumbs outline down","star half","empty heart","smile","frown","meh","star half empty","thumbs up","thumbs down","music","video play outline","volume off","volume down","volume up","record","step backward","fast backward","backward","play","pause","stop","forward","fast forward","step forward","eject","unmute","mute","video play","closed captioning","marker","coffee","food","building outline","hospital","emergency","first aid","military","h","location arrow","space shuttle","university","building","paw","spoon","car","taxi","tree","bicycle","bus","ship","motorcycle","street view","hotel","train","subway","table","columns","sort","sort ascending","sort descending","sort alphabet ascending","sort alphabet descending","sort content ascending","sort content descending","sort numeric ascending","sort numeric descending","font","bold","italic","text height","text width","align left","align center","align right","align justify","list","outdent","indent","linkify","cut","copy","attach","save","content","unordered list","ordered list","strikethrough","underline","paste","unlink","superscript","subscript","header","paragraph","euro","pound","dollar","rupee","yen","ruble","won","lira","shekel","paypal","paypal card","google wallet","visa","mastercard","discover","american express","stripe","twitter square","facebook square","linkedin square","github square","twitter","facebook","github","pinterest","pinterest square","google plus square","google plus","linkedin","github alternate","maxcdn","bitcoin","youtube square","youtube","xing","xing square","youtube play","dropbox","stack overflow","instagram","flickr","adn","bitbucket","bitbucket square","tumblr","tumblr square","apple","windows","android","linux","dribbble","skype","foursquare","trello","gittip","vk","weibo","renren","pagelines","stack exchange","vimeo","slack","wordpress","yahoo","google","reddit","reddit square","stumbleupon circle","stumbleupon","delicious","digg","pied piper","pied piper alternate","drupal","joomla","behance","behance square","steam","steam square","spotify","deviantart","soundcloud","vine","codepen","jsfiddle","rebel","empire","git square","git","hacker news","tencent weibo","qq","wechat","slideshare","twitch","yelp","lastfm","lastfm square","ioxhost","angellist","meanpath","buysellads","connectdevelop","dashcube","forumbee","leanpub","sellsy","shirtsinbulk","simplybuilt","skyatlas","whatsapp","viacoin","medium","like","favorite","video","check","close","cancel","delete","x","user times","user close","user cancel","user delete","user x","zoom in","magnify","shutdown","clock","time","play circle outline","headphone","camera","video camera","picture","pencil","compose","point","tint","signup","plus circle","dont","minimize","add","eye","attention","cart","shuffle","talk","chat","shopping cart","bar graph","area graph","pie graph","line graph","key","cogs","discussions","like outline","dislike outline","heart outline","log out","thumb tack","winner","bookmark outline","phone","phone square","credit card","hdd outline","bullhorn","bell","bell outline","bell slash","bell slash outline","hand outline right","hand outline left","hand outline up","hand outline down","globe","wrench","briefcase","group","flask","sidebar","bars","list ul","list ol","numbered list","magic","truck","currency","triangle down","dropdown","triangle up","triangle left","triangle right","envelope","conversation","umbrella","clipboard","lightbulb","ambulance","medkit","fighter jet","beer","plus square","computer","circle outline","intersex","asexual","spinner","gamepad","star half full","question","eraser","microphone","microphone slash","shield","target","play circle","pencil square","compass","amex","eur","gbp","usd","inr","cny","rmb","jpy","rouble","rub","krw","btc","sheqel","ils","try","zip","dot circle outline","sliders","wi-fi","graduation","weixin","binoculars","gratipay","genderless","teletype","power cord","tty","cc","plus cart","arrow down cart","detective","venus","mars","mercury","venus double","female homosexual","mars double","male homosexual","venus mars","mars stroke","mars alternate","mars vertical","mars horizontal","mars stroke vertical","mars stroke horizontal","facebook official","pinterest official","bed"];

          // populate the modal with users/groups with data from Web Services collected in the Drupal module
          var cnt = 0;
          usersArray = new Array();
          var sf_groupList_vals = <?php print( $page['sf_groupList'] ); ?>;
          $.each(sf_groupList_vals.users,function(key,innerjson){
            // leading div name="..." is for sorting purposes
            usersArray[cnt] = "<div name='" + innerjson.Name + "'><div class='actions'><div class='ui approve button' data-value='sfGroups_" + innerjson.LogonID + "_" + innerjson.Name + "'><div class='ui card'><div class='blurring dimmable image'><div class='ui center'><i class='huge " + semanticIcons[cnt+5] + " icon'></i></div><div class='ui fluid large label'><center>" + innerjson.Name + "</center></div></div></div></div></div></div>";    
            cnt+=1;
          });
          usersArray.sort();
          usersArray.forEach(function(entry) {
            $("#albums1").append(entry);
          });

        // PROTOTYPES
        // used to set the yyy-mmm-dd in ISO format
        Date.prototype.yyyymmdd = function() {
          var mm = (this.getMonth() + 1).toString(); // getMonth() is zero-based
          var dd = this.getDate().toString();
          return [this.getFullYear(), mm.length===2 ? '-' : '-0', mm, dd.length===2 ? '-' : '-0', dd].join(''); // padding
        };

        String.prototype.wrap= function(len){
          var temp = this.split(/\s+/);
          var res = "";
          index = 1;
          temp.forEach(function(entry) {
            if( res.length + entry.length > index*len ){
              res = res + "<br>";
              index += 1;
            }
            if( res.length == 0 ){
              res = entry;
            } else {
              res = res + " " + entry;
            }
          });
          return res;
        };

          //////////// the following section applies to the BOTH pages

          //////////// the following section applies to the PRELOGIN pages
          if( <?php print( $page['sf_page_name'] ); ?> == 0 ) {

            // SUBMIT Section for Go To Login -------------------------------------------------------------------------------------------------------
            // SUBMIT Section for Go To Login -------------------------------------------------------------------------------------------------------
              $('#submit0').click(function() {

              // collect user choices
              var sfUnitColor = document.getElementById('result').className;
              var sfServicePointColor = document.getElementById('servicePoint').className;
              var sfUnitColorArray = sfUnitColor.split(" ");
              var sfServicePointColorArray = sfServicePointColor.split(" ");
              sfUnitColor = sfUnitColorArray[2];
              sfServicePointColor = sfServicePointColorArray[2];
//            var sfGroupLogonID = groupLogonID;

              // create and make request with query string
              location.href = '/statsform/login?sfUnit='+result.textContent+'&sfUnitPointID='+sfUnitPointID+'&sfServicePointID='+sfServicePointID+'&sfServicePoint='+servicePoint.textContent+'&sfUnitColor='+sfUnitColor+'&sfServicePointColor='+sfServicePointColor+'&sfUnitIndividualID='+sfUnitIndividualID+'&sfUnitIndividualLabel='+sfUnitIndividualLabel+'&sfUnitIndividualColor='+sfUnitIndividualColor+'&sfUnitGroupID='+sfUnitGroupID+'&sfUnitGroupLabel='+sfUnitGroupLabel+'&sfUnitGroupColor='+sfUnitGroupColor+'&sfSession=false';
            });
          }
          //////////// the following section applies to the PRELOGIN pages

        });
        //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Actions to perform on page load
        // Actions to perform on page load


        //////////// the following section applies to the Form page only
        if( <?php print( $page['sf_page_name'] ); ?> == 2 ) {

          // ajax section
          // ajax section
          // ajax section
          //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
          //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

          (function ($) {

          Drupal.behaviors.statsformAjax = {
            attach: function (context, settings) {

              // Bind an AJAX callback for the Submit buttons on the Quick Questions and Research Assistance pages
              var ajaxQuickQuestions = $('#submitQuickQuestions');
              var ajaxResearchAssistance = $('#submitResearchAssistance');
              var statsformLogoutLink = $('#logout');

              // SUBMIT Section for Quick Search .................................................................
              // SUBMIT Section for Quick Search .................................................................
              ajaxQuickQuestions.click(function(event) {

                // Prevent the default link action
                event.preventDefault();

                //  disable submission if none of the count boxes have been incremented past 0
                if( document.getElementById("directional").textContent == 0  && document.getElementById("lookUp").textContent == 0  && document.getElementById("policyVal").textContent == 0  && document.getElementById("referralCount").textContent == 0  && document.getElementById("technicalVal").textContent == 0 ){
                  document.getElementById("submitQuickQuestions").disabled = true;

                // proceed if one or count boxes were incremented
                } else {

                  // debug alerts
                  //alert(document.getElementById("sfToken").dataset.value);
                  alert(document.getElementById("sfUnitPointID").dataset.value);
                  alert(document.getElementById("sfServicePointID").dataset.value);
                  //alert(sfDateSubmit);
                  //alert(document.getElementById("inputTime").value);
                  //alert(document.getElementById("userName").dataset.value);
                  //alert(document.getElementById("directional").textContent);
                  //alert(document.getElementById("lookUp").textContent);
                  //alert(document.getElementById("policyVal").textContent);
                  //alert(document.getElementById("referralCount").textContent);
                  //alert(document.getElementById("technicalVal").textContent);
  
                  $.ajax({
                    type: "POST",
                    url: "/statsform/ajax",
                    data: {
                      'from_js': true,
                      'sfToken': document.getElementById("sfToken").dataset.value,
                      /// 'sfToken': 'badTokenTest'
                      'sfUnitPointID': document.getElementById("sfUnitPointID").dataset.value,
                      'sfServicePointID': document.getElementById("sfServicePointID").dataset.value,
                      'sfInputDatetime': sfDateSubmit,
  ///                    'sfInputDatetime': document.getElementsByName("inputDatetime")[0].value, // simo checkboxes
                      'sfInputTime': ' '+document.getElementById("inputTime").value,
  ///                    'sfInputTime': ' '+document.getElementsByName("inputTime")[0].value,
                      'sfOperator': document.getElementById("userName").dataset.value,
                      'sfTimeSpent': '1',
                      'sfDetailed': 'false', // always false for the Quick Questions session
                      'sfTypeID001': '01',
                      'sfModeID001': '01',
                      'sfDirectional': document.getElementById("directional").textContent,
                      'sfTypeID002': '02',
                      'sfModeID002': '01',
                      'sfLookUp': document.getElementById("lookUp").textContent,
                      'sfTypeID003': '12',
                      'sfModeID003': '01',
                      'sfPolicyVal': document.getElementById("policyVal").textContent,
                      'sfTypeID004': '01',
                      'sfModeID004': '01',
                      'sfReferralCount': document.getElementById("referralCount").textContent,
                      'sfTypeID005': '10',
                      'sfModeID005': '01',
                      'sfTechnicalVal': document.getElementById("technicalVal").textContent,
                    },
                    dataType: "json",
                    success: function (data) {
                      // Display the time from successful response
                      if( data.wsResponse.code == 200 ) {
                        alert("Data saved:\n  "+$("#result")[0].textContent.trim()+"\n  "+$("#servicePoint")[0].textContent.trim()+"\n  "+document.getElementById("userName").dataset.value+"\n  "+document.getElementsByName("inputDatetime")[0].value+"\n  "+document.getElementById("inputTime").value);
                        resetForms();
                        document.getElementById("submitQuickQuestions").disabled = true;
                      } else if( data.wsResponse.code == 500 ) {
                        alert("Web service error 500 - Please contact the Help Desk.");
                      } else {
                        alert("Web service error 000  - Please contact the Help Desk.");
                      }
                    },
                    error: function (xmlhttp) {
                      // Error alert for failure
                      alert("Web service error AJAX - Please contact the Help Desk. " + xmlhttp.status);
                    }
                  });
                }
                // proceed if one or count boxes were incremented
                
              });
              // SUBMIT Section for Quick Search .................................................................
              // SUBMIT Section for Quick Search .................................................................


              // SUBMIT Section for Research Assistance ..........................................................
              // SUBMIT Section for Research Assistance ..........................................................
              ajaxResearchAssistance.click(function(event) {

                // Prevent the default link action
                event.preventDefault();

                // Get the request URL without the query string
                ///var ajaxUrl = ajaxQuickQuestions.attr('href').split('?');

                $.ajax({
                  type: "POST",
                  url: "/statsform/ajax",
                  data: {
                    'from_js': true,
                    'sfToken': document.getElementById("sfToken").dataset.value,
                    /// 'sfToken': 'badTokenTest'
                    'sfUnitPointID': document.getElementById("sfUnitPointID").dataset.value,
                    'sfServicePointID': document.getElementById("sfServicePointID").dataset.value,
                    'sfInputDatetime': sfDateSubmit,
///                    'sfInputDatetime': document.getElementsByName("inputDatetime")[0].value, // simo checkboxes
                    'sfInputTime': ' '+document.getElementById("inputTime").value,
///                    'sfInputTime': ' '+document.getElementsByName("inputTime")[0].value,
                    'sfOperator': document.getElementById("userName").dataset.value,
                    'sfDetailed': 'true', // always true for the Research Assistant session
                    'sfTopic': document.getElementById("questionTopic").value,
                    'sfPatronType': document.getElementById("patronStatusInput").value,
                    'sfDeptID': document.getElementById("deptWs").value,
                    'sfCourse': document.getElementById("courseSection").value,
                    'sfTypeID004': '13',
                    'sfModeID004': document.getElementById("interactionModeInput").value,
                    'sfReferralCount': document.getElementById("referralCheckbox").value,
                    'sfTypeID006': '05',
                    'sfModeID006': document.getElementById("interactionModeInput").value,
                    'sfResearchAsst': document.getElementById("researchCheckbox").value,
                    'sfTypeID005': '10',
                    'sfModeID005': document.getElementById("interactionModeInput").value,
                    'sfTechnicalVal': document.getElementById("technicalCheckbox").value,
                    'sfTypeID002': '02',
                    'sfModeID002': document.getElementById("interactionModeInput").value,
                    'sfLookUp': document.getElementById("lookupCheckbox").value,
                    'sfTypeID001': '01',
                    'sfModeID001': document.getElementById("interactionModeInput").value,
                    'sfDirectional': document.getElementById("directionalCheckbox").value,
                    'sfTypeID003': '12',
                    'sfModeID003': document.getElementById("interactionModeInput").value,
                    'sfPolicyVal': document.getElementById("policyCheckbox").value,
                    'sfPatronCount': document.getElementById("patronCount").textContent,
                    'sfTimeSpent': document.getElementById("minuteCount").textContent,
                  },
                  dataType: "json",
                  success: function (data) {
                    // Display the time from successful response
                      if( data.wsResponse.code == 200 ) {
                        alert("Data saved:\n  "+$("#result")[0].textContent.trim()+"\n  "+$("#servicePoint")[0].textContent.trim()+"\n  "+document.getElementById("userName").dataset.value+"\n  "+document.getElementsByName("inputDatetime")[0].value+"\n  "+document.getElementById("inputTime").value);
                        resetForms();
                        document.getElementById("submitQuickQuestions").disabled = true;
                      } else if( data.wsResponse.code == 500 ) {
                        alert("Web service error 500 - Please contact the Help Desk.");
                      } else {
                        alert("Web service error 000  - Please contact the Help Desk.");
                      }
                  },
                  error: function (xmlhttp) {
                    // Error alert for failure
                    alert("Web service error AJAX - Please contact the Help Desk. " + xmlhttp.status);
                  }
                });
              });
              // SUBMIT Section for Research Assistance .................................................................
              // SUBMIT Section for Research Assistance .................................................................

              // LOGOUT section .........................................................................................
              // LOGOUT section .........................................................................................
              $('.ui.logout.dropdown')
                .dropdown(
                  {
                    // use action in place of onchange to avoid popping up on for reset after the submits
                    action: function(value) {
                      $('.ui.united.large.logoutModal.modal')
                        .modal('setting', 'closable', false)
                        $('#logoutModal').modal('show')
                      ;
                    }
                  });
              // LOGOUT section .........................................................................................
              // LOGOUT section .........................................................................................


            } // attach
          }; // behaviors
        })(jQuery);
        //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // ajax section
        // ajax section
        // ajax section


        }
        //////////// the following section applies to the Form page only

      </script>
      <!--
      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
      // STATSFORM SCRIPTS
      // STATSFORM SCRIPTS
      // STATSFORM SCRIPTS
      -->

