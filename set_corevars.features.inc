<?php
/**
 * @file
 * set_corevars.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function set_corevars_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
