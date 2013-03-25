<?php
/**
 * @file
 * mooc_cis_ux.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function mooc_cis_ux_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'mooc_cis_ux-blocks';
  $context->description = 'This helps display the instructional content outline block';
  $context->tag = 'Content';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'cis_service_connection-active_outline' => array(
          'module' => 'cis_service_connection',
          'delta' => 'active_outline',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'cis_service_connection-section_context_changer' => array(
          'module' => 'cis_service_connection',
          'delta' => 'section_context_changer',
          'region' => 'regions_admin_left',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');
  t('This helps display the instructional content outline block');
  $export['mooc_cis_ux-blocks'] = $context;

  return $export;
}
