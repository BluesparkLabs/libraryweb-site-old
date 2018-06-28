<span class="uclalib-nav-breadcrumb"><a href="/staff">Staff Directory</a> »</span>
<?php foreach ($rows as $delta => $row): ?>
  <div<?php print $row_attributes[$delta]; ?>>
    <?php print $row; ?>
  </div>
<?php endforeach; ?>
