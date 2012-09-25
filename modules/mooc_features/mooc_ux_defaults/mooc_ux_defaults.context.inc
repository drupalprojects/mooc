<?php
/**
 * @file
 * mooc_ux_defaults.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function mooc_ux_defaults_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'mooc_content';
  $context->description = 'This helps display the book outline correctly at all times';
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
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => '1',
          'region' => 'menu',
          'weight' => '-10',
        ),
        'menu_block-2' => array(
          'module' => 'menu_block',
          'delta' => '2',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'boxes-mooc_instructor_contact' => array(
          'module' => 'boxes',
          'delta' => 'mooc_instructor_contact',
          'region' => 'sidebar_first',
          'weight' => '7',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');
  t('This helps display the book outline correctly at all times');
  $export['mooc_content'] = $context;

  return $export;
}
