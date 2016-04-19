<?php

/**
 * @file
 * Contains core functions for the Views module support.
 */
/*
 * Implements hook_views_plugins().
 *
 * This function annnounces the style plugin for Around.media views.
 */
function around_media_views_plugins() {
  return array(
    'style' => array(
      // Style plugin for the plugin.
      'around_media' => array(
        'title' => t('Around.Media'),
        'help' => t('Display the results in an Around.Media widget.'),
        'handler' => 'around_media_views_plugin_style',
        'theme' => 'around_media',
        'theme file' => 'around_media.theme.inc',
        'theme path' => drupal_get_path('module', 'around_media') . '/theme',
        'uses row plugin' => TRUE,
        'uses fields' => TRUE,
        'uses options' => TRUE,
        'type' => 'normal',
        'even empty' => FALSE,
      ),
    ),
  );
}
