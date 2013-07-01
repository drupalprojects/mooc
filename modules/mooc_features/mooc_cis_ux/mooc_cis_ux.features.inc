<?php
/**
 * @file
 * mooc_cis_ux.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mooc_cis_ux_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function mooc_cis_ux_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_field_default_fields_alter().
 */
function mooc_cis_ux_field_default_fields_alter(&$data) {
  if (isset($data['node-section-field_instructional_outlines'])) {
    $data['node-section-field_instructional_outlines']['field_config']['active'] = 1; /* WAS: 1 */
    $data['node-section-field_instructional_outlines']['field_config']['cardinality'] = -1; /* WAS: -1 */
    $data['node-section-field_instructional_outlines']['field_config']['deleted'] = 0; /* WAS: 0 */
    $data['node-section-field_instructional_outlines']['field_config']['translatable'] = 0; /* WAS: 0 */
    $data['node-section-field_instructional_outlines']['field_instance']['deleted'] = 0; /* WAS: 0 */
    $data['node-section-field_instructional_outlines']['field_instance']['settings']['behaviors']['prepopulate']['skip_perm'] = 0; /* WAS: 0 */
    $data['node-section-field_instructional_outlines']['field_instance']['widget']['weight'] = 3; /* WAS: 3 */
  }
}
