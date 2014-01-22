<?php
/**
 * @file
 * collabco_core.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function collabco_core_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration menu.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: access comments.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: access content overview.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: access user contact forms.
  $permissions['access user contact forms'] = array(
    'name' => 'access user contact forms',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'contact',
  );

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: administer mail templates.
  $permissions['administer mail templates'] = array(
    'name' => 'administer mail templates',
    'roles' => array(
      'Admin' => 'Admin',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'mail_edit',
  );

  // Exported permission: administer pre-approved.
  $permissions['administer pre-approved'] = array(
    'name' => 'administer pre-approved',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'register_preapproved',
  );

  // Exported permission: change own username.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: create basic_page content.
  $permissions['create basic_page content'] = array(
    'name' => 'create basic_page content',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: create closed_group content.
  $permissions['create closed_group content'] = array(
    'name' => 'create closed_group content',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: create conversation content.
  $permissions['create conversation content'] = array(
    'name' => 'create conversation content',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: create knowledge_object content.
  $permissions['create knowledge_object content'] = array(
    'name' => 'create knowledge_object content',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any basic_page content.
  $permissions['delete any basic_page content'] = array(
    'name' => 'delete any basic_page content',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any closed_group content.
  $permissions['delete any closed_group content'] = array(
    'name' => 'delete any closed_group content',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any conversation content.
  $permissions['delete any conversation content'] = array(
    'name' => 'delete any conversation content',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any knowledge_object content.
  $permissions['delete any knowledge_object content'] = array(
    'name' => 'delete any knowledge_object content',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own basic_page content.
  $permissions['delete own basic_page content'] = array(
    'name' => 'delete own basic_page content',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own closed_group content.
  $permissions['delete own closed_group content'] = array(
    'name' => 'delete own closed_group content',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own conversation content.
  $permissions['delete own conversation content'] = array(
    'name' => 'delete own conversation content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own knowledge_object content.
  $permissions['delete own knowledge_object content'] = array(
    'name' => 'delete own knowledge_object content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any basic_page content.
  $permissions['edit any basic_page content'] = array(
    'name' => 'edit any basic_page content',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any closed_group content.
  $permissions['edit any closed_group content'] = array(
    'name' => 'edit any closed_group content',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any conversation content.
  $permissions['edit any conversation content'] = array(
    'name' => 'edit any conversation content',
    'roles' => array(
      'Admin' => 'Admin',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any knowledge_object content.
  $permissions['edit any knowledge_object content'] = array(
    'name' => 'edit any knowledge_object content',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own basic_page content.
  $permissions['edit own basic_page content'] = array(
    'name' => 'edit own basic_page content',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own closed_group content.
  $permissions['edit own closed_group content'] = array(
    'name' => 'edit own closed_group content',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own comments.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: edit own conversation content.
  $permissions['edit own conversation content'] = array(
    'name' => 'edit own conversation content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own knowledge_object content.
  $permissions['edit own knowledge_object content'] = array(
    'name' => 'edit own knowledge_object content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: entityconnect add button.
  $permissions['entityconnect add button'] = array(
    'name' => 'entityconnect add button',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'entityconnect',
  );

  // Exported permission: entityconnect edit button.
  $permissions['entityconnect edit button'] = array(
    'name' => 'entityconnect edit button',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'entityconnect',
  );

  // Exported permission: post comments.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: search content.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: skip comment approval.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: subscribe to comments.
  $permissions['subscribe to comments'] = array(
    'name' => 'subscribe to comments',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment_notify',
  );

  // Exported permission: use advanced search.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: use text format filtered_html.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
