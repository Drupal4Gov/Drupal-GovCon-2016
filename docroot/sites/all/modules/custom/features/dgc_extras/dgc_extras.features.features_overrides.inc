<?php
/**
 * @file
 * dgc_extras.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function dgc_extras_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_base
  $overrides["field_base.field_dietary_needs.settings|allowed_values|None"] = 'None';
  $overrides["field_base.field_t_shirt_size.settings|allowed_values|2XL"] = '2XL';
  $overrides["field_base.field_t_shirt_size.settings|allowed_values|Large"] = 'Large';
  $overrides["field_base.field_t_shirt_size.settings|allowed_values|Mens L"]["DELETED"] = TRUE;
  $overrides["field_base.field_t_shirt_size.settings|allowed_values|Mens M"]["DELETED"] = TRUE;
  $overrides["field_base.field_t_shirt_size.settings|allowed_values|Mens S"]["DELETED"] = TRUE;
  $overrides["field_base.field_t_shirt_size.settings|allowed_values|Mens XL"]["DELETED"] = TRUE;
  $overrides["field_base.field_t_shirt_size.settings|allowed_values|Mens XS"]["DELETED"] = TRUE;
  $overrides["field_base.field_t_shirt_size.settings|allowed_values|Small"] = 'Small';
  $overrides["field_base.field_t_shirt_size.settings|allowed_values|Womens L"]["DELETED"] = TRUE;
  $overrides["field_base.field_t_shirt_size.settings|allowed_values|Womens M"]["DELETED"] = TRUE;
  $overrides["field_base.field_t_shirt_size.settings|allowed_values|Womens S"]["DELETED"] = TRUE;
  $overrides["field_base.field_t_shirt_size.settings|allowed_values|Womens XL"]["DELETED"] = TRUE;
  $overrides["field_base.field_t_shirt_size.settings|allowed_values|Womens XS"]["DELETED"] = TRUE;

  // Exported overrides for: field_group
  $overrides["field_group.group_cod_profile_details|user|user|form.data|weight"] = 13;
  $overrides["field_group.group_cod_profile_social|user|user|form.data|weight"] = 12;

  // Exported overrides for: field_instance
  $overrides["field_instance.user-user-field_profile_bio.widget|weight"] = 10;
  $overrides["field_instance.user-user-field_profile_interests.widget|weight"] = 11;
  $overrides["field_instance.user-user-field_profile_location.widget|weight"] = 9;
  $overrides["field_instance.user-user-field_profile_org.widget|weight"] = 7;
  $overrides["field_instance.user-user-field_profile_phone.widget|weight"] = 8;
  $overrides["field_instance.user-user-field_t_shirt_size.description"] = 'All sizes listed are men\'s, so please select appropriately.';

  // Exported overrides for: variable
  $overrides["variable.field_bundle_settings_user__user.value|extra_fields|form|ckeditor|weight"] = 15;
  $overrides["variable.field_bundle_settings_user__user.value|extra_fields|form|contact"] = array(
    'weight' => 5,
  );
  $overrides["variable.field_bundle_settings_user__user.value|extra_fields|form|redirect"] = array(
    'weight' => 17,
  );
  $overrides["variable.field_bundle_settings_user__user.value|extra_fields|form|timezone|weight"] = 16;

 return $overrides;
}
