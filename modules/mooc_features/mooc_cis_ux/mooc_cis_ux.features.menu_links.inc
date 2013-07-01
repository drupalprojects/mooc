<?php
/**
 * @file
 * mooc_cis_ux.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function mooc_cis_ux_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-cis-toolkit:admin/content/book
  $menu_links['menu-cis-toolkit:admin/content/book'] = array(
    'menu_name' => 'menu-cis-toolkit',
    'link_path' => 'admin/content/book',
    'router_path' => 'admin/content/book',
    'link_title' => 'Instructional Outline',
    'options' => array(
      'attributes' => array(
        'title' => 'Outline Designer for establishing the instructional pacing of this course.',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Instructional Outline');


  return $menu_links;
}
