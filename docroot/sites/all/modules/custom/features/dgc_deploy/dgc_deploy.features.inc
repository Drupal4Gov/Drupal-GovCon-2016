<?php
/**
 * @file
 * dgc_deploy.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dgc_deploy_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function dgc_deploy_strongarm_alter(&$data) {
  if (isset($data['og_node_access_strict'])) {
    $data['og_node_access_strict']->value = 0; /* WAS: 1 */
  }
}
