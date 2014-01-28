<?php

function block_collabco_core_theme_alter(&$items) {
	$module_path = drupal_get_path('module', 'collabco_core');

  $items['profile_header_template'] = array(
    'template' => 'profile-header-template',
    'variables' => array('complete_data'=> NULL),
    'path' => $module_path . '/templates',
  );
}
