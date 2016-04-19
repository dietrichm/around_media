<?php

/**
 * @file
 * Theme functions for FlexSlider Views
 */
function theme_around_media(&$vars) {
  global $language;

  // Get the ID from the first field of the result
  $around_media_id = 'V7WO2'; //array_values((array) $vars['rows'][0])[0];
  $attributes = array(
    'data-tour' => $around_media_id,
    'data-lang' => $language->language,
    'style' => 'width: 100%; height: 400px;'
  );

  $output = array(
    '#type' => 'markup',
    '#prefix' => '<div id="360view" style="max-height: 400px; overflow: hidden;">',
    '#markup' => '<div id="around"' . drupal_attributes($attributes) . '></div>',
    '#suffix' => '</div>',
  );
  drupal_add_js('http://cdn.around.media/am-frmwrk2.min.js', array('type' => 'external'));

  return drupal_render($output);
}
