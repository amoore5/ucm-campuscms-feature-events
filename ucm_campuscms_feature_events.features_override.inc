<?php
/**
 * @file
 * ucm_campuscms_feature_events.features_override.inc
 */

/**
 * Implements hook_default_features_overrides().
 */
function ucm_campuscms_feature_events_default_features_overrides() {
  $export = array();

  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'UCM Event Field Event Contact Department';
  $features_override->description = 'Use UCM Departments as defaults.';
  $features_override->component_type = 'field';
  $features_override->component_id = 'node-event-field_event_contact_department';
  $features_override->value = array(
    'additions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'field_instance',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default_value',
          ),
        ),
        'value' => NULL,
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'field_instance',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'widget',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'settings',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'available_options_php',
          ),
        ),
        'value' => 'return _ucm_predefined_options_departments();',
      ),
    ),
    'deletions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'field_instance',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default_value',
          ),
        ),
      ),
    ),
  );
  $export['UCM Event Field Event Contact Department'] = $features_override;

  return $export;
}
