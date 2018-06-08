<div class="hoursbackboneapp <?php print $lib['hours']['lid']; ?> pane-opening-hours-table">
  <table class="opening-hours-week libhours-week sticky-enabled">
    <thead>
      <tr>
        <th class="week-selector"><span class="week-range"><?php print $lib['hours']['weeks']['0']['week_range']; ?></span><a class="libhours-link next-week" href="#next" title="Next week">›</a></th>
        <?php foreach($lib['hours']['weeks']['0']['days'] as $day => $data) { ?>
          <th class="day-<?php print $data['abrv']; if ($data['current_day']) print " current-day"; ?>"><?php print $data['label']; ?></th>
        <?php } ?>
      </tr>
    </thead>
    <tbody>
      <?php foreach($lib['hours']['locations'] as $key => $location) { ?>
        <tr class="<?php ($key % 2 == 0) ? print 'even' : print 'odd'; ?>">
          <td class="title">
            <?php // render as link for sub-locations
              if ($key != 0 && $lib['hours']['locations'][$key]['url']) {
                print l($lib['hours']['locations'][$key]['name'], $lib['hours']['locations'][$key]['url']);
              } else {
                print $lib['hours']['locations'][$key]['name'];
              } 
            ?>
          </td>
          <?php foreach($lib['hours']['locations'][$key]['weeks'][0] as $day => $data) { ?>
            <td data-label="<?php print $lib['hours']['weeks'][0]['days'][$day]['label']; ?>" <?php if ($data['date'] == date("Y-m-d")) print ' class="current-day"'; ?>><?php print $lib['hours']['locations'][$key]['weeks'][0][$day]['rendered']; ?></td>
          <?php } ?>
        </tr>
      <?php } ?>
    </tbody>
  </table>
  
  <script type="text/template" id="libhours-template">
    <table class="opening-hours-week libhours-week sticky-enabled">
      <thead>
        <tr>
          <th class="week-selector">
            <% var week_index = this.current_week; 
              if (this.current_week > 0) { %>
                <a class="libhours-link previous-week" href="#prev" title="Previous week">‹</a><%
              } %>
              <span class="week-range"><% _.each(models, function(i) { %>
                <%= i.attributes.hours.locations["0"].weeks[i.collection.options.current_week].week_range %><%
              }); %></span>
              <a class="libhours-link next-week" href="#next" title="Next week">›</a>
          </th>
          <% 
            _.each(models, function(i) {
              _.each(i.attributes.hours.locations["0"].weeks[i.collection.options.current_week].days, function(day) { %>
                <th class="day-<%= day.abrv %><% if (day.current_day) { %><%= ' current-day' %><% } %>"><%= day.label %></th><%
              });
            }); 
          %>
        </tr>
      </thead>
      <tbody>
      <% _.each(this.collection.models["0"].attributes.hours.locations, function(location, index) { %>
        <tr class="<% if (index % 2 == 0) { %>even<% } else { %>odd<% } %>">
          <td class="title">
              <% // render as link for sub-locations
                if (location.parent_lid != 0 && location.url) { %>
                  <a href="<%= location.url %>"><%= location.name %></a><%
                } else { %>
                  <%= location.name %><%
                } 
              %>
          </td>
          <% _.each(location.weeks[week_index], function(day) { %>
            <% if (day.date) { %>
              <td data-label="<%= dateFormat(day.date, "ddd d", true) %>" <% if (day.date == dateFormat("yyyy-mm-dd")) { %>' class="current-day"'<% } %>><%= day.rendered %></td>
            <% } %>
          <% }); %>
        </tr>  
      <% }); %>
    </tbody>
    </table>
  </script>
</div>