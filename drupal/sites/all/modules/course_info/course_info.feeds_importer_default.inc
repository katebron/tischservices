<?php
/**
 * @file
 * course_info.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function course_info_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'course_importer';
  $feeds_importer->config = array(
    'name' => 'Course importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ';',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'course',
        'expire' => '-1',
        'author' => '2',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Course',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Name',
            'target' => 'body',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => 1800,
    'expire_period' => 3600,
    'import_on_create' => TRUE,
    'process_in_background' => FALSE,
  );
  $export['course_importer'] = $feeds_importer;

  return $export;
}
