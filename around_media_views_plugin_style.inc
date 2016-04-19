<?php

/**
 * @file
 * around_media style plugin for the Views module.
 */

/**
 * Implements a style type plugin for the Views module.
 */
class around_media_views_plugin_style extends views_plugin_style {

  /**
   * Render the display in this style.
   */
  function render() {
    // Group the rows according to the grouping field, if specified.
    $sets = $this->render_grouping($this->view->result, $this->options['grouping']);

    // Render each group separately and concatenate.
    $output = '';

    foreach ($sets as $title => $rows) {
      // Add caption field if chosen.
      $output .= theme($this->theme_functions(), array(
        'view' => $this->view,
        'options' => $this->options,
        'rows' => $rows,
        'title' => $title
          )
      );
    }

    return $output;
  }

}
