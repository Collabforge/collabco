<?php
/**
 * @file
 * collabco_core.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function collabco_core_user_default_roles() {
  $roles = array();

  // Exported role: Admin.
  $roles['Admin'] = array(
    'name' => 'Admin',
    'weight' => 2,
  );

  // Exported role: Community Moderator.
  $roles['Community Moderator'] = array(
    'name' => 'Community Moderator',
    'weight' => 4,
  );

  // Exported role: Content Manager.
  $roles['Content Manager'] = array(
    'name' => 'Content Manager',
    'weight' => 3,
  );

  return $roles;
}
