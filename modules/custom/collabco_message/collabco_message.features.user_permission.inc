<?php
/**
 * @file
 * collabco_message.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function collabco_message_user_default_permissions() {
  $permissions = array();

  // Exported permission: create messages.
  $permissions['create messages'] = array(
    'name' => 'create messages',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'message',
  );

  return $permissions;
}
