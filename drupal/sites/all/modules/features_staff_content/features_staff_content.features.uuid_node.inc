<?php
/**
 * @file
 * features_staff_content.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function features_staff_content_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => '1',
  'title' => 'Julie-Ann Bryson',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => 'f0a818ae-2396-dbe4-2d98-73a430ed9c31',
  'type' => 'tisch_staff',
  'language' => 'und',
  'created' => '1344370864',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => '0ab465e7-d2af-0194-fd40-9917315dedb3',
  'revision_uid' => '1',
  'field_first_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Julie-Ann',
        'format' => NULL,
        'safe_value' => 'Julie-Ann',
      ),
    ),
  ),
  'field_last_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Bryson',
        'format' => NULL,
        'safe_value' => 'Bryson',
      ),
    ),
  ),
  'field_staff_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Music Library Assistant',
        'format' => NULL,
        'safe_value' => 'Music Library Assistant',
      ),
    ),
  ),
  'field_email' => array(
    'und' => array(
      0 => array(
        'value' => 'julie-ann.bryson@tufts.edu',
        'format' => NULL,
        'safe_value' => 'julie-ann.bryson@tufts.edu',
      ),
    ),
  ),
  'field_staff_image' => array(),
  'field_department' => array(
    'und' => array(
      0 => array(
        'tid' => '85',
      ),
    ),
  ),
  'field_expert_' => array(
    'und' => array(
      0 => array(
        'value' => '0',
      ),
    ),
  ),
  'field_phone_number' => array(
    'und' => array(
      0 => array(
        'value' => '617-627-5862',
        'format' => NULL,
        'safe_value' => '617-627-5862',
      ),
    ),
  ),
  'field_subject_expert' => array(
    'und' => array(
      0 => array(
        'tid' => '162',
      ),
    ),
  ),
  'field_course_affiliation' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'millennium_biblio_data' => FALSE,
  'name' => 'admin',
  'picture' => '0',
  'data' => 'a:2:{s:5:"block";a:1:{s:6:"search";a:1:{s:4:"form";i:1;}}s:7:"contact";i:1;}',
  'date' => '2012-08-07 16:21:04 -0400',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Bryan Revis',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => '788c7486-4e5c-f6b4-b55d-c377b1091936',
  'type' => 'tisch_staff',
  'language' => 'und',
  'created' => '1344370772',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => '1a77d429-854e-b5e4-dd45-3163960252b9',
  'revision_uid' => '1',
  'field_first_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Bryan',
        'format' => NULL,
        'safe_value' => 'Bryan',
      ),
    ),
  ),
  'field_last_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Revis',
        'format' => NULL,
        'safe_value' => 'Revis',
      ),
    ),
  ),
  'field_staff_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Digital Media Technologist',
        'format' => NULL,
        'safe_value' => 'Digital Media Technologist',
      ),
    ),
  ),
  'field_email' => array(
    'und' => array(
      0 => array(
        'value' => 'bryan.revis@tufts.edu',
        'format' => NULL,
        'safe_value' => 'bryan.revis@tufts.edu',
      ),
    ),
  ),
  'field_staff_image' => array(),
  'field_department' => array(
    'und' => array(
      0 => array(
        'tid' => '29',
      ),
    ),
  ),
  'field_expert_' => array(
    'und' => array(
      0 => array(
        'value' => '0',
      ),
    ),
  ),
  'field_phone_number' => array(),
  'field_subject_expert' => array(),
  'field_course_affiliation' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'millennium_biblio_data' => FALSE,
  'name' => 'admin',
  'picture' => '0',
  'data' => 'a:2:{s:5:"block";a:1:{s:6:"search";a:1:{s:4:"form";i:1;}}s:7:"contact";i:1;}',
  'date' => '2012-08-07 16:19:32 -0400',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Connie Reik',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => '1276549a-fe6d-6e44-3d0d-50ff7fa65b93',
  'type' => 'tisch_staff',
  'language' => 'und',
  'created' => '1344275057',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => '1bd10e0a-52f9-6e24-ed4a-13076a74b822',
  'revision_uid' => '1',
  'field_first_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Connie',
        'format' => NULL,
        'safe_value' => 'Connie',
      ),
    ),
  ),
  'field_last_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Reik',
        'format' => NULL,
        'safe_value' => 'Reik',
      ),
    ),
  ),
  'field_staff_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Coordinator of Government Publications',
        'format' => NULL,
        'safe_value' => 'Coordinator of Government Publications',
      ),
    ),
  ),
  'field_email' => array(
    'und' => array(
      0 => array(
        'value' => 'connie.reik@tufts.edu ',
        'format' => NULL,
        'safe_value' => 'connie.reik@tufts.edu ',
      ),
    ),
  ),
  'field_staff_image' => array(
    'und' => array(
      0 => array(
        'fid' => '129',
        'alt' => '',
        'title' => '',
        'width' => '117',
        'height' => '116',
        'uid' => '1',
        'filename' => 'cReik.jpg',
        'uri' => 'public://cReik.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => '27253',
        'status' => '1',
        'timestamp' => '1344278935',
        'type' => 'image',
        'uuid' => '96ab3ba9-7fc7-8ad4-05d9-115a7c9704f5',
        'rdf_mapping' => array(),
      ),
    ),
  ),
  'field_department' => array(
    'und' => array(
      0 => array(
        'tid' => '28',
      ),
    ),
  ),
  'field_expert_' => array(
    'und' => array(
      0 => array(
        'value' => '1',
      ),
    ),
  ),
  'field_phone_number' => array(
    'und' => array(
      0 => array(
        'value' => '617-627-2073',
        'format' => NULL,
        'safe_value' => '617-627-2073',
      ),
    ),
  ),
  'field_subject_expert' => array(
    'und' => array(
      0 => array(
        'tid' => '145',
      ),
      1 => array(
        'tid' => '152',
      ),
      2 => array(
        'tid' => '21',
      ),
      3 => array(
        'tid' => '160',
      ),
      4 => array(
        'tid' => '166',
      ),
      5 => array(
        'tid' => '170',
      ),
    ),
  ),
  'field_course_affiliation' => array(
    'und' => array(
      0 => array(
        'target_id' => '233',
      ),
      1 => array(
        'target_id' => '234',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'millennium_biblio_data' => FALSE,
  'name' => 'admin',
  'picture' => '0',
  'data' => 'a:2:{s:5:"block";a:1:{s:6:"search";a:1:{s:4:"form";i:1;}}s:7:"contact";i:1;}',
  'date' => '2012-08-06 13:44:17 -0400',
);
  $nodes[] = array(
  'uid' => '3',
  'title' => 'Chris Barbour',
  'log' => '',
  'status' => '1',
  'comment' => '2',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => '0e03995f-203e-3714-095a-a7b264d6031a',
  'type' => 'tisch_staff',
  'language' => 'und',
  'created' => '1325709568',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => '2cd8c8e8-5af1-5624-f916-1545931ca861',
  'revision_uid' => '1',
  'field_first_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Chris',
        'format' => NULL,
        'safe_value' => 'Chris',
      ),
    ),
  ),
  'field_last_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Barbour',
        'format' => NULL,
        'safe_value' => 'Barbour',
      ),
    ),
  ),
  'field_staff_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Humanities Bibliographer',
        'format' => NULL,
        'safe_value' => 'Humanities Bibliographer',
      ),
    ),
  ),
  'field_email' => array(
    'und' => array(
      0 => array(
        'value' => 'christopher.barbour@tisch.edu',
        'format' => NULL,
        'safe_value' => 'christopher.barbour@tisch.edu',
      ),
    ),
  ),
  'field_staff_image' => array(
    'und' => array(
      0 => array(
        'fid' => '91',
        'alt' => 'Chris Barber',
        'title' => '',
        'width' => '140',
        'height' => '202',
        'uid' => '3',
        'filename' => 'chrisBarber.jpg',
        'uri' => 'public://chrisBarber.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => '5145',
        'status' => '1',
        'timestamp' => '1329250899',
        'type' => 'image',
        'uuid' => '1ce8022a-f548-bda4-dda8-6743c9dd5e2f',
        'rdf_mapping' => array(),
      ),
    ),
  ),
  'field_department' => array(
    'und' => array(
      0 => array(
        'tid' => '30',
      ),
    ),
  ),
  'field_expert_' => array(
    'und' => array(
      0 => array(
        'value' => '1',
      ),
    ),
  ),
  'field_phone_number' => array(
    'und' => array(
      0 => array(
        'value' => '617-627-2398',
        'format' => NULL,
        'safe_value' => '617-627-2398',
      ),
    ),
  ),
  'field_subject_expert' => array(
    'und' => array(
      0 => array(
        'tid' => '20',
      ),
      1 => array(
        'tid' => '38',
      ),
      2 => array(
        'tid' => '21',
      ),
    ),
  ),
  'field_course_affiliation' => array(
    'und' => array(
      0 => array(
        'target_id' => '205',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '3',
  'comment_count' => '0',
  'millennium_biblio_data' => FALSE,
  'name' => 'Kate',
  'picture' => '0',
  'data' => 'a:1:{s:7:"contact";i:1;}',
  'date' => '2012-01-04 15:39:28 -0500',
);
  $nodes[] = array(
  'uid' => '3',
  'title' => 'Chao Chen',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => 'eb0557a6-9b0d-2634-390d-7e068d8d8226',
  'type' => 'tisch_staff',
  'language' => 'und',
  'created' => '1327459342',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => '308ee72f-9635-1b04-d94c-109b7848c0bd',
  'revision_uid' => '1',
  'field_first_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Chao',
        'format' => NULL,
        'safe_value' => 'Chao',
      ),
    ),
  ),
  'field_last_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Chen',
        'format' => NULL,
        'safe_value' => 'Chen',
      ),
    ),
  ),
  'field_staff_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Reference Librarian',
        'format' => NULL,
        'safe_value' => 'Reference Librarian',
      ),
    ),
  ),
  'field_email' => array(
    'und' => array(
      0 => array(
        'value' => 'chao.chen@tufts.edu',
        'format' => NULL,
        'safe_value' => 'chao.chen@tufts.edu',
      ),
    ),
  ),
  'field_staff_image' => array(
    'und' => array(
      0 => array(
        'fid' => '92',
        'alt' => 'Chao Chen',
        'title' => '',
        'width' => '95',
        'height' => '96',
        'uid' => '3',
        'filename' => 'chaoChen.jpg',
        'uri' => 'public://chaoChen.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => '15048',
        'status' => '1',
        'timestamp' => '1329250922',
        'type' => 'image',
        'uuid' => '3cbba1bb-bda5-13a4-0d4d-a81c8daf76f9',
        'rdf_mapping' => array(),
      ),
    ),
  ),
  'field_department' => array(
    'und' => array(
      0 => array(
        'tid' => '28',
      ),
    ),
  ),
  'field_expert_' => array(
    'und' => array(
      0 => array(
        'value' => '1',
      ),
    ),
  ),
  'field_phone_number' => array(
    'und' => array(
      0 => array(
        'value' => '617-627-2057',
        'format' => NULL,
        'safe_value' => '617-627-2057',
      ),
    ),
  ),
  'field_subject_expert' => array(
    'und' => array(
      0 => array(
        'tid' => '38',
      ),
    ),
  ),
  'field_course_affiliation' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '3',
  'comment_count' => '0',
  'millennium_biblio_data' => FALSE,
  'name' => 'Kate',
  'picture' => '0',
  'data' => 'a:1:{s:7:"contact";i:1;}',
  'date' => '2012-01-24 21:42:22 -0500',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Dana Elder',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => 'ac8d3728-593e-d284-312a-7daa806f47ab',
  'type' => 'tisch_staff',
  'language' => 'und',
  'created' => '1344370292',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => '38b79e0c-842c-cda4-0142-244fc2d9513c',
  'revision_uid' => '1',
  'field_first_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Dana',
        'format' => NULL,
        'safe_value' => 'Dana',
      ),
    ),
  ),
  'field_last_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Elder',
        'format' => NULL,
        'safe_value' => 'Elder',
      ),
    ),
  ),
  'field_staff_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Library Assistant',
        'format' => NULL,
        'safe_value' => 'Library Assistant',
      ),
    ),
  ),
  'field_email' => array(
    'und' => array(
      0 => array(
        'value' => 'dana.elder@tufts.edu',
        'format' => NULL,
        'safe_value' => 'dana.elder@tufts.edu',
      ),
    ),
  ),
  'field_staff_image' => array(),
  'field_department' => array(
    'und' => array(
      0 => array(
        'tid' => '102',
      ),
    ),
  ),
  'field_expert_' => array(
    'und' => array(
      0 => array(
        'value' => '0',
      ),
    ),
  ),
  'field_phone_number' => array(
    'und' => array(
      0 => array(
        'value' => '617-627-2686',
        'format' => NULL,
        'safe_value' => '617-627-2686',
      ),
    ),
  ),
  'field_subject_expert' => array(),
  'field_course_affiliation' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'millennium_biblio_data' => FALSE,
  'name' => 'admin',
  'picture' => '0',
  'data' => 'a:2:{s:5:"block";a:1:{s:6:"search";a:1:{s:4:"form";i:1;}}s:7:"contact";i:1;}',
  'date' => '2012-08-07 16:11:32 -0400',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Miles Donovan',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => 'a564dd32-57e6-cbb4-e50f-d48f8331f4f0',
  'type' => 'tisch_staff',
  'language' => 'und',
  'created' => '1344370653',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => '5b932d68-5b26-ee04-b1c6-7b6df692f935',
  'revision_uid' => '1',
  'field_first_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Miles',
        'format' => NULL,
        'safe_value' => 'Miles',
      ),
    ),
  ),
  'field_last_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Donovan',
        'format' => NULL,
        'safe_value' => 'Donovan',
      ),
    ),
  ),
  'field_staff_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Library Assistant',
        'format' => NULL,
        'safe_value' => 'Library Assistant',
      ),
    ),
  ),
  'field_email' => array(
    'und' => array(
      0 => array(
        'value' => 'william.donovan@tufts.edu',
        'format' => NULL,
        'safe_value' => 'william.donovan@tufts.edu',
      ),
    ),
  ),
  'field_staff_image' => array(),
  'field_department' => array(
    'und' => array(
      0 => array(
        'tid' => '27',
      ),
    ),
  ),
  'field_expert_' => array(
    'und' => array(
      0 => array(
        'value' => '0',
      ),
    ),
  ),
  'field_phone_number' => array(),
  'field_subject_expert' => array(),
  'field_course_affiliation' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'millennium_biblio_data' => FALSE,
  'name' => 'admin',
  'picture' => '0',
  'data' => 'a:2:{s:5:"block";a:1:{s:6:"search";a:1:{s:4:"form";i:1;}}s:7:"contact";i:1;}',
  'date' => '2012-08-07 16:17:33 -0400',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Susan Brady',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => '3014c93b-2f82-6394-adf2-028604a27c31',
  'type' => 'tisch_staff',
  'language' => 'und',
  'created' => '1344370435',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => '62886b7b-aa2b-7b74-e506-87ab04d1dbe3',
  'revision_uid' => '1',
  'field_first_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Susan',
        'format' => NULL,
        'safe_value' => 'Susan',
      ),
    ),
  ),
  'field_last_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Brady',
        'format' => NULL,
        'safe_value' => 'Brady',
      ),
    ),
  ),
  'field_staff_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Library Assistant',
        'format' => NULL,
        'safe_value' => 'Library Assistant',
      ),
    ),
  ),
  'field_email' => array(
    'und' => array(
      0 => array(
        'value' => 'susan.brady@tufts.edu',
        'format' => NULL,
        'safe_value' => 'susan.brady@tufts.edu',
      ),
    ),
  ),
  'field_staff_image' => array(),
  'field_department' => array(
    'und' => array(
      0 => array(
        'tid' => '26',
      ),
    ),
  ),
  'field_expert_' => array(
    'und' => array(
      0 => array(
        'value' => '0',
      ),
    ),
  ),
  'field_phone_number' => array(),
  'field_subject_expert' => array(),
  'field_course_affiliation' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'millennium_biblio_data' => FALSE,
  'name' => 'admin',
  'picture' => '0',
  'data' => 'a:2:{s:5:"block";a:1:{s:6:"search";a:1:{s:4:"form";i:1;}}s:7:"contact";i:1;}',
  'date' => '2012-08-07 16:13:55 -0400',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Alex May',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => '6b681fd5-5ab9-c634-31f5-a02410de98d9',
  'type' => 'tisch_staff',
  'language' => 'und',
  'created' => '1344370367',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => '705163bd-ea73-4504-3908-671b9424004d',
  'revision_uid' => '1',
  'field_first_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Alex',
        'format' => NULL,
        'safe_value' => 'Alex',
      ),
    ),
  ),
  'field_last_name' => array(
    'und' => array(
      0 => array(
        'value' => 'May',
        'format' => NULL,
        'safe_value' => 'May',
      ),
    ),
  ),
  'field_staff_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Cataloging and Metadata Services Librarian',
        'format' => NULL,
        'safe_value' => 'Cataloging and Metadata Services Librarian',
      ),
    ),
  ),
  'field_email' => array(
    'und' => array(
      0 => array(
        'value' => 'alexander.may@tufts.edu',
        'format' => NULL,
        'safe_value' => 'alexander.may@tufts.edu',
      ),
    ),
  ),
  'field_staff_image' => array(),
  'field_department' => array(
    'und' => array(
      0 => array(
        'tid' => '102',
      ),
    ),
  ),
  'field_expert_' => array(
    'und' => array(
      0 => array(
        'value' => '1',
      ),
    ),
  ),
  'field_phone_number' => array(),
  'field_subject_expert' => array(
    'und' => array(
      0 => array(
        'tid' => '146',
      ),
      1 => array(
        'tid' => '136',
      ),
    ),
  ),
  'field_course_affiliation' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'millennium_biblio_data' => FALSE,
  'name' => 'admin',
  'picture' => '0',
  'data' => 'a:2:{s:5:"block";a:1:{s:6:"search";a:1:{s:4:"form";i:1;}}s:7:"contact";i:1;}',
  'date' => '2012-08-07 16:12:47 -0400',
);
  $nodes[] = array(
  'uid' => '3',
  'title' => 'Karen Vagts',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => 'cbffbb81-9043-7f94-ddd7-9e8efaa041de',
  'type' => 'tisch_staff',
  'language' => 'und',
  'created' => '1326987699',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => '743b076c-b6fc-f1d4-cd28-e2afa179ed0d',
  'revision_uid' => '1',
  'field_first_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Karen',
        'format' => NULL,
        'safe_value' => 'Karen',
      ),
    ),
  ),
  'field_last_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Vagts',
        'format' => NULL,
        'safe_value' => 'Vagts',
      ),
    ),
  ),
  'field_staff_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Research and Instruction Librarian',
        'format' => NULL,
        'safe_value' => 'Research and Instruction Librarian',
      ),
    ),
  ),
  'field_email' => array(
    'und' => array(
      0 => array(
        'value' => 'karen.vagts@tufts.edu',
        'format' => NULL,
        'safe_value' => 'karen.vagts@tufts.edu',
      ),
    ),
  ),
  'field_staff_image' => array(
    'und' => array(
      0 => array(
        'fid' => '87',
        'alt' => 'Karen Vagts',
        'title' => 'Karen Vagts',
        'width' => '129',
        'height' => '146',
        'uid' => '3',
        'filename' => 'karenvagts.jpg',
        'uri' => 'public://karenvagts.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => '8167',
        'status' => '1',
        'timestamp' => '1326987699',
        'type' => 'image',
        'uuid' => '14d62eab-cb22-6604-6d82-941dc3197d08',
        'rdf_mapping' => array(),
      ),
    ),
  ),
  'field_department' => array(
    'und' => array(
      0 => array(
        'tid' => '28',
      ),
    ),
  ),
  'field_expert_' => array(
    'und' => array(
      0 => array(
        'value' => '1',
      ),
    ),
  ),
  'field_phone_number' => array(
    'und' => array(
      0 => array(
        'value' => '617-627-2095',
        'format' => NULL,
        'safe_value' => '617-627-2095',
      ),
    ),
  ),
  'field_subject_expert' => array(
    'und' => array(
      0 => array(
        'tid' => '22',
      ),
      1 => array(
        'tid' => '141',
      ),
      2 => array(
        'tid' => '161',
      ),
      3 => array(
        'tid' => '147',
      ),
      4 => array(
        'tid' => '154',
      ),
    ),
  ),
  'field_course_affiliation' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '3',
  'comment_count' => '0',
  'millennium_biblio_data' => FALSE,
  'name' => 'Kate',
  'picture' => '0',
  'data' => 'a:1:{s:7:"contact";i:1;}',
  'date' => '2012-01-19 10:41:39 -0500',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Laurie Sabol',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => '2f499e08-2b43-0804-cd78-87cb2736a4ca',
  'type' => 'tisch_staff',
  'language' => 'und',
  'created' => '1344275406',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => '8bf4f473-25f5-f244-7977-268b1a0c53b6',
  'revision_uid' => '1',
  'field_first_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Laurie',
        'format' => NULL,
        'safe_value' => 'Laurie',
      ),
    ),
  ),
  'field_last_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Sabol',
        'format' => NULL,
        'safe_value' => 'Sabol',
      ),
    ),
  ),
  'field_staff_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Library Instruction Coordinator',
        'format' => NULL,
        'safe_value' => 'Library Instruction Coordinator',
      ),
    ),
  ),
  'field_email' => array(
    'und' => array(
      0 => array(
        'value' => 'Laurie.sabol@tufts.edu',
        'format' => NULL,
        'safe_value' => 'Laurie.sabol@tufts.edu',
      ),
    ),
  ),
  'field_staff_image' => array(
    'und' => array(
      0 => array(
        'fid' => '127',
        'alt' => 'Laurie Sabol',
        'title' => 'Laurie Sabol',
        'width' => '100',
        'height' => '87',
        'uid' => '1',
        'filename' => 'lSabol.jpg',
        'uri' => 'public://lSabol.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => '7259',
        'status' => '1',
        'timestamp' => '1344278878',
        'type' => 'image',
        'uuid' => '7e117d2c-a5a2-f5c4-113e-fe86d0a54c1f',
        'rdf_mapping' => array(),
      ),
    ),
  ),
  'field_department' => array(
    'und' => array(
      0 => array(
        'tid' => '28',
      ),
    ),
  ),
  'field_expert_' => array(
    'und' => array(
      0 => array(
        'value' => '1',
      ),
    ),
  ),
  'field_phone_number' => array(
    'und' => array(
      0 => array(
        'value' => '617-627-5167',
        'format' => NULL,
        'safe_value' => '617-627-5167',
      ),
    ),
  ),
  'field_subject_expert' => array(
    'und' => array(
      0 => array(
        'tid' => '163',
      ),
      1 => array(
        'tid' => '149',
      ),
      2 => array(
        'tid' => '153',
      ),
      3 => array(
        'tid' => '167',
      ),
    ),
  ),
  'field_course_affiliation' => array(
    'und' => array(
      0 => array(
        'target_id' => '235',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'millennium_biblio_data' => FALSE,
  'name' => 'admin',
  'picture' => '0',
  'data' => 'a:2:{s:5:"block";a:1:{s:6:"search";a:1:{s:4:"form";i:1;}}s:7:"contact";i:1;}',
  'date' => '2012-08-06 13:50:06 -0400',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Jacquelyn Cooney',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => 'dda79f45-0ace-d104-e9e0-fe003ca5acd8',
  'type' => 'tisch_staff',
  'language' => 'und',
  'created' => '1344370046',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => '93069316-d4f0-e4d4-3575-d6d50b134a0e',
  'revision_uid' => '1',
  'field_first_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Jacquelyn',
        'format' => NULL,
        'safe_value' => 'Jacquelyn',
      ),
    ),
  ),
  'field_last_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Cooney',
        'format' => NULL,
        'safe_value' => 'Cooney',
      ),
    ),
  ),
  'field_staff_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Binding/Processing Coordinator',
        'format' => NULL,
        'safe_value' => 'Binding/Processing Coordinator',
      ),
    ),
  ),
  'field_email' => array(
    'und' => array(
      0 => array(
        'value' => 'jackie.cooney@tufts.edu',
        'format' => NULL,
        'safe_value' => 'jackie.cooney@tufts.edu',
      ),
    ),
  ),
  'field_staff_image' => array(),
  'field_department' => array(
    'und' => array(
      0 => array(
        'tid' => '184',
      ),
    ),
  ),
  'field_expert_' => array(
    'und' => array(
      0 => array(
        'value' => '0',
      ),
    ),
  ),
  'field_phone_number' => array(
    'und' => array(
      0 => array(
        'value' => '617-627-5080',
        'format' => NULL,
        'safe_value' => '617-627-5080',
      ),
    ),
  ),
  'field_subject_expert' => array(),
  'field_course_affiliation' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'millennium_biblio_data' => FALSE,
  'name' => 'admin',
  'picture' => '0',
  'data' => 'a:2:{s:5:"block";a:1:{s:6:"search";a:1:{s:4:"form";i:1;}}s:7:"contact";i:1;}',
  'date' => '2012-08-07 16:07:26 -0400',
);
  $nodes[] = array(
  'uid' => '3',
  'title' => 'Chris Strauber',
  'log' => '',
  'status' => '1',
  'comment' => '2',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => '707cfd62-5247-e3f4-8d27-f8e2c0ad072d',
  'type' => 'tisch_staff',
  'language' => 'und',
  'created' => '1320962518',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => '9548b173-1563-efe4-098c-6915492add0a',
  'revision_uid' => '1',
  'field_first_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Chris',
        'format' => NULL,
        'safe_value' => 'Chris',
      ),
    ),
  ),
  'field_last_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Strauber',
        'format' => NULL,
        'safe_value' => 'Strauber',
      ),
    ),
  ),
  'field_staff_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Humanities Reference Librarian',
        'format' => NULL,
        'safe_value' => 'Humanities Reference Librarian',
      ),
    ),
  ),
  'field_email' => array(
    'und' => array(
      0 => array(
        'value' => 'chris.strauber@tufts.edu',
        'format' => NULL,
        'safe_value' => 'chris.strauber@tufts.edu',
      ),
    ),
  ),
  'field_staff_image' => array(
    'und' => array(
      0 => array(
        'fid' => '9',
        'alt' => 'Chris Strauber, Humanities reference librarian',
        'title' => 'Humanities Reference Librarian',
        'width' => '95',
        'height' => '115',
        'uid' => '3',
        'filename' => 'chrisStrauber.jpg',
        'uri' => 'public://chrisStrauber_0.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => '13150',
        'status' => '1',
        'timestamp' => '1320962518',
        'type' => 'undefined',
        'uuid' => '9117f4d1-1e2b-c0f4-c199-aa7351cddef0',
        'rdf_mapping' => array(),
      ),
    ),
  ),
  'field_department' => array(
    'und' => array(
      0 => array(
        'tid' => '28',
      ),
    ),
  ),
  'field_expert_' => array(
    'und' => array(
      0 => array(
        'value' => '1',
      ),
    ),
  ),
  'field_phone_number' => array(
    'und' => array(
      0 => array(
        'value' => '617-627-2094',
        'format' => NULL,
        'safe_value' => '617-627-2094',
      ),
    ),
  ),
  'field_subject_expert' => array(
    'und' => array(
      0 => array(
        'tid' => '136',
      ),
      1 => array(
        'tid' => '20',
      ),
      2 => array(
        'tid' => '137',
      ),
      3 => array(
        'tid' => '138',
      ),
    ),
  ),
  'field_course_affiliation' => array(
    'und' => array(
      0 => array(
        'target_id' => '166',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '3',
  'comment_count' => '0',
  'millennium_biblio_data' => FALSE,
  'name' => 'Kate',
  'picture' => '0',
  'data' => 'a:1:{s:7:"contact";i:1;}',
  'date' => '2011-11-10 17:01:58 -0500',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Thomas Cox',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => 'd1a85449-c29d-9ad4-8199-237260d24cda',
  'type' => 'tisch_staff',
  'language' => 'und',
  'created' => '1344370596',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => 'a02a6668-05e0-1654-95d3-5a2ae4de9dd0',
  'revision_uid' => '1',
  'field_first_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Thomas',
        'format' => NULL,
        'safe_value' => 'Thomas',
      ),
    ),
  ),
  'field_last_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Cox',
        'format' => NULL,
        'safe_value' => 'Cox',
      ),
    ),
  ),
  'field_staff_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Manager of LITS',
        'format' => NULL,
        'safe_value' => 'Manager of LITS',
      ),
    ),
  ),
  'field_email' => array(
    'und' => array(
      0 => array(
        'value' => 'thomas.cox@tufts.edu',
        'format' => NULL,
        'safe_value' => 'thomas.cox@tufts.edu',
      ),
    ),
  ),
  'field_staff_image' => array(),
  'field_department' => array(
    'und' => array(
      0 => array(
        'tid' => '103',
      ),
    ),
  ),
  'field_expert_' => array(
    'und' => array(
      0 => array(
        'value' => '0',
      ),
    ),
  ),
  'field_phone_number' => array(
    'und' => array(
      0 => array(
        'value' => '617-627-4318',
        'format' => NULL,
        'safe_value' => '617-627-4318',
      ),
    ),
  ),
  'field_subject_expert' => array(),
  'field_course_affiliation' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'millennium_biblio_data' => FALSE,
  'name' => 'admin',
  'picture' => '0',
  'data' => 'a:2:{s:5:"block";a:1:{s:6:"search";a:1:{s:4:"form";i:1;}}s:7:"contact";i:1;}',
  'date' => '2012-08-07 16:16:36 -0400',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Laura Wood',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => '13de1029-2bae-cb44-3db2-40e64fcb6741',
  'type' => 'tisch_staff',
  'language' => 'und',
  'created' => '1344370222',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => 'a6fd229d-54ec-9b44-9516-5e14f7a3799c',
  'revision_uid' => '1',
  'field_first_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Laura',
        'format' => NULL,
        'safe_value' => 'Laura',
      ),
    ),
  ),
  'field_last_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Wood',
        'format' => NULL,
        'safe_value' => 'Wood',
      ),
    ),
  ),
  'field_staff_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Director, Tisch Library',
        'format' => NULL,
        'safe_value' => 'Director, Tisch Library',
      ),
    ),
  ),
  'field_email' => array(
    'und' => array(
      0 => array(
        'value' => 'laura.wood@tufts.edu',
        'format' => NULL,
        'safe_value' => 'laura.wood@tufts.edu',
      ),
    ),
  ),
  'field_staff_image' => array(),
  'field_department' => array(
    'und' => array(
      0 => array(
        'tid' => '101',
      ),
    ),
  ),
  'field_expert_' => array(
    'und' => array(
      0 => array(
        'value' => '0',
      ),
    ),
  ),
  'field_phone_number' => array(
    'und' => array(
      0 => array(
        'value' => '617-627-3345',
        'format' => NULL,
        'safe_value' => '617-627-3345',
      ),
    ),
  ),
  'field_subject_expert' => array(),
  'field_course_affiliation' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'millennium_biblio_data' => FALSE,
  'name' => 'admin',
  'picture' => '0',
  'data' => 'a:2:{s:5:"block";a:1:{s:6:"search";a:1:{s:4:"form";i:1;}}s:7:"contact";i:1;}',
  'date' => '2012-08-07 16:10:22 -0400',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'William Bilkic',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => '56cf6c2b-0457-4b64-79aa-1c7626c85bb3',
  'type' => 'tisch_staff',
  'language' => 'und',
  'created' => '1344369758',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => 'a9f86b99-4e8f-d904-69ef-273ab240b29c',
  'revision_uid' => '1',
  'field_first_name' => array(
    'und' => array(
      0 => array(
        'value' => 'William',
        'format' => NULL,
        'safe_value' => 'William',
      ),
    ),
  ),
  'field_last_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Bilkic',
        'format' => NULL,
        'safe_value' => 'Bilkic',
      ),
    ),
  ),
  'field_staff_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Library Assistant',
        'format' => NULL,
        'safe_value' => 'Library Assistant',
      ),
    ),
  ),
  'field_email' => array(
    'und' => array(
      0 => array(
        'value' => 'Bill.Bilkic@tufts.edu',
        'format' => NULL,
        'safe_value' => 'Bill.Bilkic@tufts.edu',
      ),
    ),
  ),
  'field_staff_image' => array(),
  'field_department' => array(
    'und' => array(
      0 => array(
        'tid' => '100',
      ),
    ),
  ),
  'field_expert_' => array(
    'und' => array(
      0 => array(
        'value' => '0',
      ),
    ),
  ),
  'field_phone_number' => array(
    'und' => array(
      0 => array(
        'value' => '617-627-3347',
        'format' => NULL,
        'safe_value' => '617-627-3347',
      ),
    ),
  ),
  'field_subject_expert' => array(),
  'field_course_affiliation' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'millennium_biblio_data' => FALSE,
  'name' => 'admin',
  'picture' => '0',
  'data' => 'a:2:{s:5:"block";a:1:{s:6:"search";a:1:{s:4:"form";i:1;}}s:7:"contact";i:1;}',
  'date' => '2012-08-07 16:02:38 -0400',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Miriam Allman',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => 'c86da62b-f9a6-0764-59f0-f776eccc9330',
  'type' => 'tisch_staff',
  'language' => 'und',
  'created' => '1344274210',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => 'cd7feefd-859e-bad4-0d99-d9ade3f29be5',
  'revision_uid' => '1',
  'field_first_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Miriam',
        'format' => NULL,
        'safe_value' => 'Miriam',
      ),
    ),
  ),
  'field_last_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Allman',
        'format' => NULL,
        'safe_value' => 'Allman',
      ),
    ),
  ),
  'field_staff_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Science and Engineering Bibliographer',
        'format' => NULL,
        'safe_value' => 'Science and Engineering Bibliographer',
      ),
    ),
  ),
  'field_email' => array(
    'und' => array(
      0 => array(
        'value' => 'miriam.allman@tufts.edu',
        'format' => NULL,
        'safe_value' => 'miriam.allman@tufts.edu',
      ),
    ),
  ),
  'field_staff_image' => array(
    'und' => array(
      0 => array(
        'fid' => '132',
        'alt' => '',
        'title' => '',
        'width' => '140',
        'height' => '105',
        'uid' => '1',
        'filename' => 'mAllman.JPG',
        'uri' => 'public://mAllman.JPG',
        'filemime' => 'image/jpeg',
        'filesize' => '2471',
        'status' => '1',
        'timestamp' => '1344278998',
        'type' => 'image',
        'uuid' => '013bb685-aa78-c4f4-01e6-4bf0e17ba681',
        'rdf_mapping' => array(),
      ),
    ),
  ),
  'field_department' => array(
    'und' => array(
      0 => array(
        'tid' => '30',
      ),
    ),
  ),
  'field_expert_' => array(
    'und' => array(
      0 => array(
        'value' => '1',
      ),
    ),
  ),
  'field_phone_number' => array(
    'und' => array(
      0 => array(
        'value' => '617-627-5455',
        'format' => NULL,
        'safe_value' => '617-627-5455',
      ),
    ),
  ),
  'field_subject_expert' => array(
    'und' => array(
      0 => array(
        'tid' => '18',
      ),
      1 => array(
        'tid' => '148',
      ),
      2 => array(
        'tid' => '22',
      ),
      3 => array(
        'tid' => '156',
      ),
      4 => array(
        'tid' => '161',
      ),
      5 => array(
        'tid' => '165',
      ),
      6 => array(
        'tid' => '168',
      ),
    ),
  ),
  'field_course_affiliation' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'millennium_biblio_data' => FALSE,
  'name' => 'admin',
  'picture' => '0',
  'data' => 'a:2:{s:5:"block";a:1:{s:6:"search";a:1:{s:4:"form";i:1;}}s:7:"contact";i:1;}',
  'date' => '2012-08-06 13:30:10 -0400',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Ann Marie Ferraro',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => '26cdacd0-747e-9714-fd7d-9cc3ed7836ae',
  'type' => 'tisch_staff',
  'language' => 'und',
  'created' => '1344370498',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => 'd561148b-9f1a-e414-4536-4c4ddeafb3dd',
  'revision_uid' => '1',
  'field_first_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Ann Marie',
        'format' => NULL,
        'safe_value' => 'Ann Marie',
      ),
    ),
  ),
  'field_last_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Ferraro',
        'format' => NULL,
        'safe_value' => 'Ferraro',
      ),
    ),
  ),
  'field_staff_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Document Delivery Coordinator',
        'format' => NULL,
        'safe_value' => 'Document Delivery Coordinator',
      ),
    ),
  ),
  'field_email' => array(
    'und' => array(
      0 => array(
        'value' => 'annmarie.ferraro@tufts.edu',
        'format' => NULL,
        'safe_value' => 'annmarie.ferraro@tufts.edu',
      ),
    ),
  ),
  'field_staff_image' => array(),
  'field_department' => array(
    'und' => array(
      0 => array(
        'tid' => '26',
      ),
    ),
  ),
  'field_expert_' => array(
    'und' => array(
      0 => array(
        'value' => '0',
      ),
    ),
  ),
  'field_phone_number' => array(
    'und' => array(
      0 => array(
        'value' => '617-627-3206 ',
        'format' => NULL,
        'safe_value' => '617-627-3206 ',
      ),
    ),
  ),
  'field_subject_expert' => array(),
  'field_course_affiliation' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'millennium_biblio_data' => FALSE,
  'name' => 'admin',
  'picture' => '0',
  'data' => 'a:2:{s:5:"block";a:1:{s:6:"search";a:1:{s:4:"form";i:1;}}s:7:"contact";i:1;}',
  'date' => '2012-08-07 16:14:58 -0400',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Regina Raboin',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => '0ae404fd-37a7-0864-598c-07da2ca52f3d',
  'type' => 'tisch_staff',
  'language' => 'und',
  'created' => '1344274818',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => 'd5f4dcfb-f347-9164-8541-0c288adf46bf',
  'revision_uid' => '1',
  'field_first_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Regina',
        'format' => NULL,
        'safe_value' => 'Regina',
      ),
    ),
  ),
  'field_last_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Raboin',
        'format' => NULL,
        'safe_value' => 'Raboin',
      ),
    ),
  ),
  'field_staff_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Research and Instruction Librarian/ Research and Instruction and Microforms/Current Periodicals Collections Coordinator',
        'format' => NULL,
        'safe_value' => 'Research and Instruction Librarian/ Research and Instruction and Microforms/Current Periodicals Collections Coordinator',
      ),
    ),
  ),
  'field_email' => array(
    'und' => array(
      0 => array(
        'value' => 'regina.raboin@tufts.edu',
        'format' => NULL,
        'safe_value' => 'regina.raboin@tufts.edu',
      ),
    ),
  ),
  'field_staff_image' => array(
    'und' => array(
      0 => array(
        'fid' => '133',
        'alt' => 'Regina Raboin',
        'title' => 'Regina Raboin',
        'width' => '95',
        'height' => '115',
        'uid' => '1',
        'filename' => 'rRaboin.jpg',
        'uri' => 'public://rRaboin.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => '16193',
        'status' => '1',
        'timestamp' => '1344279136',
        'type' => 'image',
        'uuid' => 'a3a4408f-edbe-c6a4-f54f-6aa2f2deeed7',
        'rdf_mapping' => array(),
      ),
    ),
  ),
  'field_department' => array(
    'und' => array(
      0 => array(
        'tid' => '28',
      ),
    ),
  ),
  'field_expert_' => array(
    'und' => array(
      0 => array(
        'value' => '1',
      ),
    ),
  ),
  'field_phone_number' => array(
    'und' => array(
      0 => array(
        'value' => '617-627-4221',
        'format' => NULL,
        'safe_value' => '617-627-4221',
      ),
    ),
  ),
  'field_subject_expert' => array(
    'und' => array(
      0 => array(
        'tid' => '158',
      ),
      1 => array(
        'tid' => '168',
      ),
      2 => array(
        'tid' => '18',
      ),
      3 => array(
        'tid' => '148',
      ),
      4 => array(
        'tid' => '180',
      ),
      5 => array(
        'tid' => '156',
      ),
      6 => array(
        'tid' => '165',
      ),
      7 => array(
        'tid' => '160',
      ),
      8 => array(
        'tid' => '171',
      ),
    ),
  ),
  'field_course_affiliation' => array(
    'und' => array(
      0 => array(
        'target_id' => '198',
      ),
      1 => array(
        'target_id' => '200',
      ),
      2 => array(
        'target_id' => '231',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'millennium_biblio_data' => FALSE,
  'name' => 'admin',
  'picture' => '0',
  'data' => 'a:2:{s:5:"block";a:1:{s:6:"search";a:1:{s:4:"form";i:1;}}s:7:"contact";i:1;}',
  'date' => '2012-08-06 13:40:18 -0400',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Michael Rogan',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => 'a6be81ab-a25c-3164-ad36-bef4d5da64bc',
  'type' => 'tisch_staff',
  'language' => 'und',
  'created' => '1344275247',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => 'dae24099-8e9a-4b34-2d28-f61332a9a6ab',
  'revision_uid' => '1',
  'field_first_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Michael',
        'format' => NULL,
        'safe_value' => 'Michael',
      ),
    ),
  ),
  'field_last_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Rogan',
        'format' => NULL,
        'safe_value' => 'Rogan',
      ),
    ),
  ),
  'field_staff_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Music Librarian	',
        'format' => NULL,
        'safe_value' => 'Music Librarian	',
      ),
    ),
  ),
  'field_email' => array(
    'und' => array(
      0 => array(
        'value' => 'michael.rogan@tufts.edu ',
        'format' => NULL,
        'safe_value' => 'michael.rogan@tufts.edu ',
      ),
    ),
  ),
  'field_staff_image' => array(
    'und' => array(
      0 => array(
        'fid' => '130',
        'alt' => '',
        'title' => '',
        'width' => '140',
        'height' => '76',
        'uid' => '1',
        'filename' => 'mRogan.jpg',
        'uri' => 'public://mRogan.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => '3267',
        'status' => '1',
        'timestamp' => '1344278954',
        'type' => 'image',
        'uuid' => '9b29b886-fcab-4a34-d9ab-1fdb8d7ba219',
        'rdf_mapping' => array(),
      ),
    ),
  ),
  'field_department' => array(
    'und' => array(
      0 => array(
        'tid' => '85',
      ),
    ),
  ),
  'field_expert_' => array(
    'und' => array(
      0 => array(
        'value' => '1',
      ),
    ),
  ),
  'field_phone_number' => array(
    'und' => array(
      0 => array(
        'value' => '617-627-2846',
        'format' => NULL,
        'safe_value' => '617-627-2846',
      ),
    ),
  ),
  'field_subject_expert' => array(
    'und' => array(
      0 => array(
        'tid' => '162',
      ),
    ),
  ),
  'field_course_affiliation' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'millennium_biblio_data' => FALSE,
  'name' => 'admin',
  'picture' => '0',
  'data' => 'a:2:{s:5:"block";a:1:{s:6:"search";a:1:{s:4:"form";i:1;}}s:7:"contact";i:1;}',
  'date' => '2012-08-06 13:47:27 -0400',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Kate Bronstad',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => '279939a3-bd1b-93b4-4d7d-662508cd46a0',
  'type' => 'tisch_staff',
  'language' => 'und',
  'created' => '1344370545',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => 'e202ff12-e0cf-f234-25fd-b166e2548d17',
  'revision_uid' => '1',
  'field_first_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Kate',
        'format' => NULL,
        'safe_value' => 'Kate',
      ),
    ),
  ),
  'field_last_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Bronstad',
        'format' => NULL,
        'safe_value' => 'Bronstad',
      ),
    ),
  ),
  'field_staff_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Web Developer',
        'format' => NULL,
        'safe_value' => 'Web Developer',
      ),
    ),
  ),
  'field_email' => array(
    'und' => array(
      0 => array(
        'value' => 'kate.bronstad@tufts.edu',
        'format' => NULL,
        'safe_value' => 'kate.bronstad@tufts.edu',
      ),
    ),
  ),
  'field_staff_image' => array(),
  'field_department' => array(
    'und' => array(
      0 => array(
        'tid' => '103',
      ),
    ),
  ),
  'field_expert_' => array(
    'und' => array(
      0 => array(
        'value' => '0',
      ),
    ),
  ),
  'field_phone_number' => array(
    'und' => array(
      0 => array(
        'value' => '617-627-5194',
        'format' => NULL,
        'safe_value' => '617-627-5194',
      ),
    ),
  ),
  'field_subject_expert' => array(),
  'field_course_affiliation' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'millennium_biblio_data' => FALSE,
  'name' => 'admin',
  'picture' => '0',
  'data' => 'a:2:{s:5:"block";a:1:{s:6:"search";a:1:{s:4:"form";i:1;}}s:7:"contact";i:1;}',
  'date' => '2012-08-07 16:15:45 -0400',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Harriet Chenkin',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => '9f318ef1-fe84-9484-653f-3bdad8d7776f',
  'type' => 'tisch_staff',
  'language' => 'und',
  'created' => '1344370167',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => 'ecb6bc18-6515-4624-75f7-7ca2027bf6b1',
  'revision_uid' => '1',
  'field_first_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Harriet',
        'format' => NULL,
        'safe_value' => 'Harriet',
      ),
    ),
  ),
  'field_last_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Chenkin',
        'format' => NULL,
        'safe_value' => 'Chenkin',
      ),
    ),
  ),
  'field_staff_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Administrative Assistant',
        'format' => NULL,
        'safe_value' => 'Administrative Assistant',
      ),
    ),
  ),
  'field_email' => array(
    'und' => array(
      0 => array(
        'value' => 'Harriet.Chenkin@tufts.edu',
        'format' => NULL,
        'safe_value' => 'Harriet.Chenkin@tufts.edu',
      ),
    ),
  ),
  'field_staff_image' => array(),
  'field_department' => array(
    'und' => array(
      0 => array(
        'tid' => '101',
      ),
    ),
  ),
  'field_expert_' => array(
    'und' => array(
      0 => array(
        'value' => '0',
      ),
    ),
  ),
  'field_phone_number' => array(
    'und' => array(
      0 => array(
        'value' => '617-627-2012',
        'format' => NULL,
        'safe_value' => '617-627-2012',
      ),
    ),
  ),
  'field_subject_expert' => array(),
  'field_course_affiliation' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'millennium_biblio_data' => FALSE,
  'name' => 'admin',
  'picture' => '0',
  'data' => 'a:2:{s:5:"block";a:1:{s:6:"search";a:1:{s:4:"form";i:1;}}s:7:"contact";i:1;}',
  'date' => '2012-08-07 16:09:27 -0400',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Richard Fleischer',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => '35f5a3fd-8d27-98c4-21e9-62b8401ad73f',
  'type' => 'tisch_staff',
  'language' => 'und',
  'created' => '1344370711',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => 'f0e2e070-7337-4174-3976-df3d3f8603f3',
  'revision_uid' => '1',
  'field_first_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Richard',
        'format' => NULL,
        'safe_value' => 'Richard',
      ),
    ),
  ),
  'field_last_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Fleischer',
        'format' => NULL,
        'safe_value' => 'Fleischer',
      ),
    ),
  ),
  'field_staff_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Manager of Media Services',
        'format' => NULL,
        'safe_value' => 'Manager of Media Services',
      ),
    ),
  ),
  'field_email' => array(
    'und' => array(
      0 => array(
        'value' => 'richard.fleischer@tufts.edu',
        'format' => NULL,
        'safe_value' => 'richard.fleischer@tufts.edu',
      ),
    ),
  ),
  'field_staff_image' => array(),
  'field_department' => array(
    'und' => array(
      0 => array(
        'tid' => '27',
      ),
    ),
  ),
  'field_expert_' => array(
    'und' => array(
      0 => array(
        'value' => '0',
      ),
    ),
  ),
  'field_phone_number' => array(),
  'field_subject_expert' => array(
    'und' => array(
      0 => array(
        'tid' => '38',
      ),
    ),
  ),
  'field_course_affiliation' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'millennium_biblio_data' => FALSE,
  'name' => 'admin',
  'picture' => '0',
  'data' => 'a:2:{s:5:"block";a:1:{s:6:"search";a:1:{s:4:"form";i:1;}}s:7:"contact";i:1;}',
  'date' => '2012-08-07 16:18:31 -0400',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Martha Kelehan',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => 'ba7cdbde-6937-1aa4-5d82-9acf9f85c391',
  'type' => 'tisch_staff',
  'language' => 'und',
  'created' => '1344274489',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => 'f2e17540-b93f-39f4-212f-2aeb278a99d8',
  'revision_uid' => '1',
  'field_first_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Martha',
        'format' => NULL,
        'safe_value' => 'Martha',
      ),
    ),
  ),
  'field_last_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Kelehan',
        'format' => NULL,
        'safe_value' => 'Kelehan',
      ),
    ),
  ),
  'field_staff_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Social Sciences Bibliographer',
        'format' => NULL,
        'safe_value' => 'Social Sciences Bibliographer',
      ),
    ),
  ),
  'field_email' => array(
    'und' => array(
      0 => array(
        'value' => 'martha.kelehan@tufts.edu',
        'format' => NULL,
        'safe_value' => 'martha.kelehan@tufts.edu',
      ),
    ),
  ),
  'field_staff_image' => array(
    'und' => array(
      0 => array(
        'fid' => '131',
        'alt' => 'Martha Kelehan',
        'title' => 'Martha Kelehan',
        'width' => '140',
        'height' => '181',
        'uid' => '1',
        'filename' => 'mKelehan.png',
        'uri' => 'public://mKelehan.png',
        'filemime' => 'image/png',
        'filesize' => '45638',
        'status' => '1',
        'timestamp' => '1344278979',
        'type' => 'image',
        'uuid' => '6063940e-688f-bbe4-51a4-8bf5fd8a3cd7',
        'rdf_mapping' => array(),
      ),
    ),
  ),
  'field_department' => array(
    'und' => array(
      0 => array(
        'tid' => '30',
      ),
    ),
  ),
  'field_expert_' => array(
    'und' => array(
      0 => array(
        'value' => '1',
      ),
    ),
  ),
  'field_phone_number' => array(
    'und' => array(
      0 => array(
        'value' => '617-627-2092',
        'format' => NULL,
        'safe_value' => '617-627-2092',
      ),
    ),
  ),
  'field_subject_expert' => array(
    'und' => array(
      0 => array(
        'tid' => '145',
      ),
      1 => array(
        'tid' => '149',
      ),
      2 => array(
        'tid' => '152',
      ),
      3 => array(
        'tid' => '153',
      ),
      4 => array(
        'tid' => '176',
      ),
      5 => array(
        'tid' => '21',
      ),
      6 => array(
        'tid' => '160',
      ),
      7 => array(
        'tid' => '177',
      ),
      8 => array(
        'tid' => '163',
      ),
      9 => array(
        'tid' => '166',
      ),
      10 => array(
        'tid' => '167',
      ),
      11 => array(
        'tid' => '169',
      ),
      12 => array(
        'tid' => '170',
      ),
      13 => array(
        'tid' => '171',
      ),
      14 => array(
        'tid' => '173',
      ),
    ),
  ),
  'field_course_affiliation' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'millennium_biblio_data' => FALSE,
  'name' => 'admin',
  'picture' => '0',
  'data' => 'a:2:{s:5:"block";a:1:{s:6:"search";a:1:{s:4:"form";i:1;}}s:7:"contact";i:1;}',
  'date' => '2012-08-06 13:34:49 -0400',
);
  return $nodes;
}
