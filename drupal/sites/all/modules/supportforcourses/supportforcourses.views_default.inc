<?php
/**
 * @file
 * supportforcourses.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function supportforcourses_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'support_for_course';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'support for course';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'course support';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_course_affiliation_node']['id'] = 'reverse_field_course_affiliation_node';
  $handler->display->display_options['relationships']['reverse_field_course_affiliation_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_course_affiliation_node']['field'] = 'reverse_field_course_affiliation_node';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_course_connection_node']['id'] = 'reverse_field_course_connection_node';
  $handler->display->display_options['relationships']['reverse_field_course_connection_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_course_connection_node']['field'] = 'reverse_field_course_connection_node';
  /* Relationship: File Usage: File */
  $handler->display->display_options['relationships']['node_to_file']['id'] = 'node_to_file';
  $handler->display->display_options['relationships']['node_to_file']['table'] = 'file_usage';
  $handler->display->display_options['relationships']['node_to_file']['field'] = 'node_to_file';
  $handler->display->display_options['relationships']['node_to_file']['relationship'] = 'reverse_field_course_affiliation_node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: LibGuide Link */
  $handler->display->display_options['fields']['field_libguide_link']['id'] = 'field_libguide_link';
  $handler->display->display_options['fields']['field_libguide_link']['table'] = 'field_data_field_libguide_link';
  $handler->display->display_options['fields']['field_libguide_link']['field'] = 'field_libguide_link';
  $handler->display->display_options['fields']['field_libguide_link']['relationship'] = 'reverse_field_course_connection_node';
  $handler->display->display_options['fields']['field_libguide_link']['label'] = 'Research_guide';
  $handler->display->display_options['fields']['field_libguide_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_libguide_link']['alter']['text'] = '[field_libguide_link-url] ';
  $handler->display->display_options['fields']['field_libguide_link']['click_sort_column'] = 'url';
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'reverse_field_course_affiliation_node';
  $handler->display->display_options['fields']['field_first_name']['label'] = 'First_name';
  $handler->display->display_options['fields']['field_first_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'reverse_field_course_affiliation_node';
  $handler->display->display_options['fields']['field_last_name']['label'] = 'Last_name';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['field_staff_title']['id'] = 'field_staff_title';
  $handler->display->display_options['fields']['field_staff_title']['table'] = 'field_data_field_staff_title';
  $handler->display->display_options['fields']['field_staff_title']['field'] = 'field_staff_title';
  $handler->display->display_options['fields']['field_staff_title']['relationship'] = 'reverse_field_course_affiliation_node';
  $handler->display->display_options['fields']['field_staff_title']['label'] = 'Librarian_title';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['relationship'] = 'reverse_field_course_affiliation_node';
  /* Field: Content: Phone number */
  $handler->display->display_options['fields']['field_phone_number']['id'] = 'field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['table'] = 'field_data_field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['field'] = 'field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['relationship'] = 'reverse_field_course_affiliation_node';
  $handler->display->display_options['fields']['field_phone_number']['label'] = 'Phone';
  /* Field: File: Path */
  $handler->display->display_options['fields']['uri']['id'] = 'uri';
  $handler->display->display_options['fields']['uri']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri']['field'] = 'uri';
  $handler->display->display_options['fields']['uri']['relationship'] = 'node_to_file';
  $handler->display->display_options['fields']['uri']['label'] = 'Image_path';
  $handler->display->display_options['fields']['uri']['file_download_path'] = TRUE;
  /* Field: Content: course_subject */
  $handler->display->display_options['fields']['field_study_guide_subject']['id'] = 'field_study_guide_subject';
  $handler->display->display_options['fields']['field_study_guide_subject']['table'] = 'field_data_field_study_guide_subject';
  $handler->display->display_options['fields']['field_study_guide_subject']['field'] = 'field_study_guide_subject';
  $handler->display->display_options['fields']['field_study_guide_subject']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'course' => 'course',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'support_for_course';

  /* Display: course_list */
  $handler = $view->new_display('services', 'course_list', 'services_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'support_for_course';

  /* Display: course_list2 */
  $handler = $view->new_display('services', 'course_list2', 'services_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'support_for_course';
  $export['support_for_course'] = $view;

  return $export;
}
