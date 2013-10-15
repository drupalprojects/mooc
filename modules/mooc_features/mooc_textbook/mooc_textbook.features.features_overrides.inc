<?php
/**
 * @file
 * mooc_textbook.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function mooc_textbook_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: filter
  $overrides["filter.textbook_editor.filters|cis_filter"] = array(
    'settings' => array(),
    'status' => 1,
    'weight' => -49,
  );
  $overrides["filter.textbook_editor.filters|filter_html|settings|allowed_html"] = '<div> <legend> <fieldset> <h2> <h3> <h4> <h5> <h6> <em> <iframe> <video> <strong> <img> <br> <blockquote> <cite> <sup> <sub> <p> <ul> <ol> <li> <dl> <dt> <dd> <a> <table> <tr> <td> <th> <tbody> <thead> <tfoot> <colgroup> <caption> <hr>';
  $overrides["filter.textbook_editor.filters|filter_html|weight"] = -48;
  $overrides["filter.textbook_editor.filters|nrhi"] = array(
    'settings' => array(),
    'status' => 1,
    'weight' => -43,
  );
  $overrides["filter.textbook_editor.filters|typogrify|weight"] = -42;

 return $overrides;
}
