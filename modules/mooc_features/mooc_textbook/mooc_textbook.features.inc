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
    $data['textbook_editor']['filters']['ckeditor_link_filter']['weight'] = '-48'; /* WAS: '-47' */
    $data['textbook_editor']['filters']['filter_htmlcorrector']['weight'] = '-46'; /* WAS: '-45' */
    $data['textbook_editor']['filters']['filter_html']['settings']['allowed_html'] = '<div> <h2> <h3> <h4> <h5> <h6> <em> <iframe> <video> <strong> <img> <br> <blockquote> <cite> <sup> <sub> <p> <ul> <ol> <li> <dl> <dt> <dd> <a> <table> <tr> <td> <th> <tbody> <thead> <tfoot> <colgroup> <caption> <hr>'; /* WAS: '<div> <h2> <h3> <h4> <h5> <h6> <em> <iframe> <video> <strong> <img> <blockquote> <cite> <sup> <sub> <p> <ul> <ol> <li> <dl> <dt> <dd> <a> <table> <tr> <td> <th> <tbody> <thead> <tfoot> <colgroup> <caption> <hr>' */
    $data['textbook_editor']['filters']['filter_toc'] = array(
      'settings' => array(
        'tableofcontents' => array(
          'back_to_top' => array(
            'anchor' => 'toc',
            'label' => 'Back to top',
            'location' => 'bottom',
            'maxlevel' => '6',
            'minlevel' => '2',
            'scroll' => 1,
          ),
          'box' => array(
            'collapsed' => 0,
            'hide_show' => 0,
            'maxlevel' => '6',
            'minlevel' => '2',
            'title' => 'Contents',
          ),
          'header' => array(
            'allowed' => '<em> <i> <strong> <b> <u> <del> <ins> <sub> <sup> <cite> <strike> <s> <tt> <span> <font> <abbr> <acronym> <dfn> <q> <bdo> <big> <small>',
            'id_gen' => 'title',
            'id_prefix' => 'hdr',
            'id_sep' => '-',
            'id_strip' => array(
              'colons' => 'colons',
              'dashes' => 'dashes',
              'digits' => 0,
              'periods' => 'periods',
              'underscores' => 'underscores',
            ),
          ),
          'numbering' => array(
            'headers' => 0,
            'method' => '1',
            'mode' => '0',
            'prefix' => '',
            'separator' => '.',
            'suffix' => '.',
          ),
          'on_off' => array(
            'automatic' => '0',
            'hide' => 0,
            'min_limit' => '5',
          ),
        ),
      ),
      'status' => '1',
      'weight' => '0',
    ); /* WAS: '' */
    $data['textbook_editor']['filters']['nrhi'] = array(
      'settings' => array(),
      'status' => '1',
      'weight' => '-44',
    ); /* WAS: '' */
    $data['textbook_editor']['filters']['transliteration']['weight'] = '-47'; /* WAS: '-46' */
    $data['textbook_editor']['filters']['typogrify']['weight'] = '-32'; /* WAS: '0' */
    $data['textbook_editor']['filters']['video_filter']['weight'] = '-49'; /* WAS: '-48' */
  }
}
