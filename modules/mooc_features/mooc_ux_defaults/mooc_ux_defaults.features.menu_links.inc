<?php
/**
 * @file
 * mooc_ux_defaults.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function mooc_ux_defaults_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-cis-toolkit:admin/content/scanner
  $menu_links['menu-cis-toolkit:admin/content/scanner'] = array(
    'menu_name' => 'menu-cis-toolkit',
    'link_path' => 'admin/content/scanner',
    'router_path' => 'admin/content/scanner',
    'link_title' => 'Search / Replace',
    'options' => array(
      'attributes' => array(
        'title' => 'Search and replace text across content',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
  );
  // Exported menu link: menu-cis-toolkit:admin/reports/feedback
  $menu_links['menu-cis-toolkit:admin/reports/feedback'] = array(
    'menu_name' => 'menu-cis-toolkit',
    'link_path' => 'admin/reports/feedback',
    'router_path' => 'admin/reports/feedback',
    'link_title' => 'Feedback Reports',
    'options' => array(
      'attributes' => array(
        'title' => 'Feedback related to potential issues with the course as reported by students / faculty.',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
  );
  // Exported menu link: menu-cis-toolkit:typo-reports
  $menu_links['menu-cis-toolkit:typo-reports'] = array(
    'menu_name' => 'menu-cis-toolkit',
    'link_path' => 'typo-reports',
    'router_path' => 'typo-reports',
    'link_title' => 'Typo Reports',
    'options' => array(
      'attributes' => array(
        'title' => 'Typographical errors as reported by other members of the content team',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Feedback Reports');
  t('Search / Replace');
  t('Typo Reports');


  return $menu_links;
}
