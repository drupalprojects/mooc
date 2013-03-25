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
