<?php
/**
 * @file
 * mooc_roles_perms.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function mooc_roles_perms_user_default_roles() {
  $roles = array();

  // Exported role: guest.
  $roles['guest'] = array(
    'name' => 'guest',
    'weight' => '3',
  );

  // Exported role: instructor.
  $roles['instructor'] = array(
    'name' => 'instructor',
    'weight' => '5',
  );

  // Exported role: past student.
  $roles['past student'] = array(
    'name' => 'past student',
    'weight' => '8',
  );

  // Exported role: staff.
  $roles['staff'] = array(
    'name' => 'staff',
    'weight' => '6',
  );

  // Exported role: student.
  $roles['student'] = array(
    'name' => 'student',
    'weight' => '2',
  );

  // Exported role: teaching assistant.
  $roles['teaching assistant'] = array(
    'name' => 'teaching assistant',
    'weight' => '4',
  );

  return $roles;
}
