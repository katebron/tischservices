<?php
/**
 * @file
 * tischstaff.features.inc
 */

/**
 * Implements hook_node_info().
 */
function tischstaff_node_info() {
  $items = array(
    'tisch_staff' => array(
      'name' => t('Tisch staff'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Tisch Staff'),
      'help' => '',
    ),
  );
  return $items;
}
