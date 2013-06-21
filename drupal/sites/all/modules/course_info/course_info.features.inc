<?php
/**
 * @file
 * course_info.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function course_info_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function course_info_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function course_info_node_info() {
  $items = array(
    'course' => array(
      'name' => t('Course'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'libguide' => array(
      'name' => t('LibGuide'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
