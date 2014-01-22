<?php
/**
 * @file
 * collabco_core.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function collabco_core_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:closed_group:add user'
  $permissions['node:closed_group:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:closed_group:administer group'
  $permissions['node:closed_group:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:closed_group:approve and deny subscription'
  $permissions['node:closed_group:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:closed_group:create conversation content'
  $permissions['node:closed_group:create conversation content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:closed_group:create knowledge_object content'
  $permissions['node:closed_group:create knowledge_object content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:closed_group:delete any conversation content'
  $permissions['node:closed_group:delete any conversation content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:closed_group:delete any knowledge_object content'
  $permissions['node:closed_group:delete any knowledge_object content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:closed_group:delete own conversation content'
  $permissions['node:closed_group:delete own conversation content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:closed_group:delete own knowledge_object content'
  $permissions['node:closed_group:delete own knowledge_object content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:closed_group:manage members'
  $permissions['node:closed_group:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:closed_group:manage permissions'
  $permissions['node:closed_group:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:closed_group:manage roles'
  $permissions['node:closed_group:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:closed_group:subscribe'
  $permissions['node:closed_group:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:closed_group:unsubscribe'
  $permissions['node:closed_group:unsubscribe'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:closed_group:update any conversation content'
  $permissions['node:closed_group:update any conversation content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:closed_group:update any knowledge_object content'
  $permissions['node:closed_group:update any knowledge_object content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:closed_group:update group'
  $permissions['node:closed_group:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:closed_group:update own conversation content'
  $permissions['node:closed_group:update own conversation content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:closed_group:update own knowledge_object content'
  $permissions['node:closed_group:update own knowledge_object content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  return $permissions;
}
