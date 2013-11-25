<?php
/**
 * @file
 * ckeditor_config.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ckeditor_config_user_default_roles() {
  $roles = array();

  // Exported role: ckeditor editor.
  $roles['ckeditor editor'] = array(
    'name' => 'ckeditor editor',
    'weight' => 3,
  );

  return $roles;
}
