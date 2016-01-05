<?php

/**
 * Implements template_preprocess_page.
 */
function mooc_foundation_access_preprocess_page(&$variables) {
  // speedreader is enabled
  if (module_exists('speedreader')) {
    $variables['speedreader'] = TRUE;
  }
  // mespeak is enabled
  if (module_exists('mespeak')) {
    $variables['mespeak'] = TRUE;
  }
  // support for add child page shortcut
  $node = menu_get_object();
  if ($node && user_access('access printer-friendly version')) {
    $variables['tabs_extras'][200][] = '<hr>';
    $variables['tabs_extras'][200][] = l(t('Print'), 'book/export/html/' . arg(1));
  }
  $child_type = variable_get('book_child_type', 'book');
  if ($node && !empty($node->book) && (user_access('add content to books') || user_access('administer book outlines')) && node_access('create', $child_type) && $node->status == 1 && isset($node->book['depth']) && $node->book['depth'] < MENU_MAX_DEPTH) {
    $variables['tabs_extras'][200][] = '<hr>';
    $variables['tabs_extras'][200][] = l(t('Add child page'), 'node/add/' . str_replace('_', '-', $child_type), array('query' => array('parent' => $node->book['mlid'])));
  }
  if (user_access('access contextual links')) {
    $variables['tabs_extras'][0][] = '<li class="cis_accessibility_check"></li>';
  }
  // remove the prefix that provides a link to the home page
  // as MOOC is the thing that currently provides support directly for this
  // and slightly overrides the behavior
  $keys = array_keys($variables['page']['header']);
  $keyname = array_shift($keys);
  unset($variables['page']['header'][$keyname]['#prefix']);
}

/**
 * Implements theme_breadrumb().
 */
function mooc_foundation_access_breadcrumb($variables) {
  // hide breadcrumbs
}
