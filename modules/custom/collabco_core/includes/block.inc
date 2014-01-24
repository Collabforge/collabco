<?php

function block_collabco_core_theme_alter(&$items) {
  return array(
      'header_user_profile' => array(
      	'template' => 'header-user-profile',
      	'variables' => array('complete_data'=> NULL),
     ),
  );
}