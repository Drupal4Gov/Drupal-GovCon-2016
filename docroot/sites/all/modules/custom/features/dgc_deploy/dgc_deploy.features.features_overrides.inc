<?php
/**
 * @file
 * dgc_deploy.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function dgc_deploy_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: variable
  $overrides["variable.og_node_access_strict.value"] = 0;

 return $overrides;
}
