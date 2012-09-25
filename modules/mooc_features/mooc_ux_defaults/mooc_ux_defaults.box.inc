<?php
/**
 * @file
 * mooc_ux_defaults.box.inc
 */

/**
 * Implements hook_default_box().
 */
function mooc_ux_defaults_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'mooc_instructor_contact';
  $box->plugin_key = 'simple';
  $box->title = 'Instructor Contact';
  $box->description = 'Instructor Contact';
  $box->options = array(
    'body' => array(
      'value' => '<p><strong>Instructor:&nbsp;</strong></p>
<p><strong>Office:&nbsp;</strong></p>
<p><strong>Phone:&nbsp;</strong></p>
<p><strong>Email:&nbsp;</strong></p>
',
      'format' => 'textbook_editor',
    ),
  );
  $export['mooc_instructor_contact'] = $box;

  return $export;
}
