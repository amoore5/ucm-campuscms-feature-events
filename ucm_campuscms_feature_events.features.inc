<?php
/**
 * @file
 * ucm_campuscms_feature_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ucm_campuscms_feature_events_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "features_override" && $api == "features_override") {
    return array("version" => "1");
  }
}
