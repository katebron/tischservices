<?php
/**
 * @file
 * course.features.inc
 */

/**
 * Implements hook_node_info().
 */
function course_node_info() {
  $items = array(
    'course' => array(
      'name' => t('Course'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
