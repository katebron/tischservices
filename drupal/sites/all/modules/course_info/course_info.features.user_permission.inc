<?php
/**
 * @file
 * course_info.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function course_info_user_default_permissions() {
  $permissions = array();

  // Exported permission: clear course_importer feeds.
  $permissions['clear course_importer feeds'] = array(
    'name' => 'clear course_importer feeds',
    'roles' => array(
      'student web developer' => 'student web developer',
    ),
    'module' => 'feeds',
  );

  // Exported permission: create course content.
  $permissions['create course content'] = array(
    'name' => 'create course content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any course content.
  $permissions['delete any course content'] = array(
    'name' => 'delete any course content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own course content.
  $permissions['delete own course content'] = array(
    'name' => 'delete own course content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any course content.
  $permissions['edit any course content'] = array(
    'name' => 'edit any course content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own course content.
  $permissions['edit own course content'] = array(
    'name' => 'edit own course content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: import course_importer feeds.
  $permissions['import course_importer feeds'] = array(
    'name' => 'import course_importer feeds',
    'roles' => array(
      'student web developer' => 'student web developer',
    ),
    'module' => 'feeds',
  );

  // Exported permission: unlock course_importer feeds.
  $permissions['unlock course_importer feeds'] = array(
    'name' => 'unlock course_importer feeds',
    'roles' => array(
      'student web developer' => 'student web developer',
    ),
    'module' => 'feeds',
  );

  return $permissions;
}
