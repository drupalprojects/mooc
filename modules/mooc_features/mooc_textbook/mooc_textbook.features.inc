<?php
/**
 * @file
 * mooc_textbook.features.inc
 */

/**
 * Implements hook_filter_default_formats_alter().
 */
function mooc_textbook_filter_default_formats_alter(&$data) {
  if (isset($data['textbook_editor'])) {
    $data['textbook_editor']['filters']['filter_html']['settings']['allowed_html'] = '<div> <legend> <fieldset> <h2> <h3> <h4> <h5> <h6> <em> <iframe> <video> <strong> <img> <br> <blockquote> <cite> <sup> <sub> <p> <ul> <ol> <li> <dl> <dt> <dd> <a> <table> <tr> <td> <th> <tbody> <thead> <tfoot> <colgroup> <caption> <hr>'; /* WAS: '<div> <h2> <h3> <h4> <h5> <h6> <em> <iframe> <video> <strong> <img> <blockquote> <cite> <sup> <sub> <p> <ul> <ol> <li> <dl> <dt> <dd> <a> <table> <tr> <td> <th> <tbody> <thead> <tfoot> <colgroup> <caption> <hr>' */
    $data['textbook_editor']['filters']['filter_html']['weight'] = '-49'; /* WAS: '-50' */
    $data['textbook_editor']['filters']['nrhi'] = array(
      'settings' => array(),
      'status' => '1',
      'weight' => '-44',
    ); /* WAS: '' */
    $data['textbook_editor']['filters']['typogrify']['weight'] = '-43'; /* WAS: '0' */
  }
}
