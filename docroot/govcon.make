core: 7.x
api: 2
projects:
  drupal:
    version: '7.43'
  cod:
    type: module
    custom_download: true
    version: 2.0-alpha5
  views_bulk_operations:
    version: '3.3'
  addressfield:
    version: '1.2'
  admin_menu:
    version: 3.x-dev
  adminimal_admin_menu:
    version: '1.7'
  advanced_help:
    version: '1.3'
  auto_nodetitle:
    version: '1.0'
  breakpoints:
    version: '1.4'
  ctools:
    version: '1.9'
    patches:
      - 'https://www.drupal.org/files/issues/2484541-context-dependency-1.patch'
      - 'https://www.drupal.org/files/issues/2645612-ctools-attributes-array-1.patch'
  ckeditor:
    version: '1.17'
  cod_support:
    version: 2.x-dev
  commerce:
    version: 1.x-dev
    patches:
      - 'https://www.drupal.org/files/issues/commerce_cart-button_text-1147690-75.patch'
      - 'https://www.drupal.org/files/issues/product_select_options_token_display_alternative-1226466-36.patch'
      - 'https://www.drupal.org/files/issues/change_site_s_default-2415237-11.patch'
      - 'https://www.drupal.org/files/issues/commerce_cart-button_text-1147690-75.patch'
      - 'https://www.drupal.org/files/issues/product_select_options_token_display_alternative-1226466-36.patch'
      - 'https://www.drupal.org/files/issues/change_site_s_default-2415237-11.patch'
  commerce_coupon:
    version: 2.x-dev
  commerce_currency:
    version: '1.0'
    patches:
      - 'https://www.drupal.org/files/issues/2212615-field_visibility_for_rules-2.patch'
      - 'https://www.drupal.org/files/issues/required_5.patch'
  commerce_discount:
    version: 1.x-dev
    patches:
      - 'https://www.drupal.org/files/issues/1962484-add-weight-commerce-discount-1.patch'
      - 'https://www.drupal.org/files/issues/2345311-commerce_discount_multicurrency-8.patch'
  commerce_features:
    version: '1.1'
  conditional_fields:
    version: 3.x-dev
  content_access:
    version: 1.2-beta2
  date:
    version: '2.9'
    patches:
      - 'https://www.drupal.org/files/issues/date-views-filter-timezone-1820304-18.patch'
  devel:
    version: '1.5'
  diff:
    version: '3.2'
  distro_update:
    version: 1.x-dev
  efq_extra_field:
    version: 1.0-alpha1
  entity:
    version: 1.x-dev
  entityreference:
    version: '1.1'
    patches:
      - 'https://www.drupal.org/files/issues/1969018-update-field-config-foreign-keys-15.patch'
  entityreference_prepopulate:
    version: 1.x-dev
    patches:
      - 'https://www.drupal.org/files/issues/er_prepopulate_ajax_values-1.patch'
  features:
    version: '2.7'
  field_collection:
    version: 1.0-beta11
    patches:
      - 'https://www.drupal.org/files/issues/undefined_langcode-1716526-12.patch'
  field_extrawidgets:
    version: '1.1'
  field_group:
    version: '1.5'
  field_permissions:
    version: 1.0-beta2
  field_select_ct:
    version: '1.0'
  file_entity:
    version: 2.x-dev
  fivestar:
    version: '2.1'
  flag:
    version: '3.7'
  picture:
    subdir: contrib
    version: '2.13'
  focal_point:
    subdir: contrib
    version: 1.0-beta6
  geofield:
    subdir: contrib
    version: '2.3'
  geophp:
    subdir: contrib
    version: '1.7'
  panels:
    version: 3.x-dev
    patches:
      - 'https://www.drupal.org/files/issues/panelizer_is-1402860-82-fix-ipe-end-js-alert.patch'
      - 'https://www.drupal.org/files/issues/2462331-4.patch'
  inline_conditions:
    version: 1.x-dev
  inline_entity_form:
    version: '1.6'
  ip_geoloc:
    subdir: contrib
    version: '1.29'
  jquery_update:
    version: '2.7'
  location:
    subdir: contrib
    version: '3.7'
  leaflet:
    subdir: contrib
    version: '1.3'
  libraries:
    version: '2.2'
  link:
    version: '1.4'
  mailchimp:
    subdir: contrib
    version: '4.0'
  media:
    subdir: contrib
    version: 2.0-beta1
  module_filter:
    version: '2.0'
  multiple_entity_form:
    version: '1.3'
  og:
    version: 2.x-dev
    patches:
      - 'https://www.drupal.org/files/issues/og-default-role-member-2005800-40.patch'
      - 'https://www.drupal.org/files/og_ui-group_node_add_theme-1800208-5.patch'
      - 'https://www.drupal.org/files/issues/og_id_user_access.patch'
      - 'https://www.drupal.org/files/issues/2493277-og-context-premature-empty-1.patch'
      - 'https://www.drupal.org/files/og_context_ctools_relationship-1781652-5.patch'
      - 'https://www.drupal.org/files/issues/group-manager-language-1865852.patch'
  og_theme:
    version: '2.0'
  og_vocab:
    version: '1.2'
    patches:
      - 'https://www.drupal.org/files/issues/2481153-og_vocab-accessible-groups-1.patch'
      - 'https://www.drupal.org/files/issues/fatal_error_with_metatag-2531418-1.patch'
      - 'https://www.drupal.org/files/issues/2604594-og_vocab_get_ogv_by_id-1.patch'
  panelizer:
    version: 3.x-dev
    patches:
      - 'https://www.drupal.org/files/issues/panelizer-better_revision-2457113-48.patch'
  panels_everywhere:
    subdir: contrib
    version: 1.0-rc2
  pathauto:
    version: '1.3'
  quicktabs:
    version: '3.6'
    patches:
      - 'https://www.drupal.org/files/2104643-revert-qt-487518-5.patch'
  responsive_menus:
    subdir: contrib
    version: 1.x-dev
  rules:
    version: '2.9'
  safeword:
    version: '1.13'
  strongarm:
    version: 2.x-dev
  subpathauto:
    version: '1.3'
  taxonomy_machine_name:
    version: '1.2'
  ticket:
    version: 1.x-dev
  token:
    version: '1.6'
  views:
    version: '3.13'
    patches:
      - 'https://www.drupal.org/files/issues/views-taxonomy-name-case-transform-1.patch'
      - 'https://www.drupal.org/files/issues/views-taxonomy-name-case-transform-1.patch'
  views_argument_substitutions:
    patches:
      - 'https://www.drupal.org/files/issues/2650642-check-array-values-input-1.patch'
  views_autorefresh:
    version: '1.0'
  views_data_export:
    version: 3.0-beta9
  views_field_view:
    version: '1.2'
  views_datasource:
    version: 1.0-alpha2
  views_send:
    version: '1.1'
  votingapi:
    version: '2.12'
  webform:
    version: '4.12'
  adminimal_theme:
    version: '1.24'
  omega:
    version: 4.x-dev
  www:
    type: theme
    custom_download: true
libraries:
  backbone:
    directory_name: backbone
    custom_download: true
    type: library
  ckeditor:
    directory_name: ckeditor
    custom_download: true
    type: library
  colorbox:
    directory_name: colorbox
    custom_download: true
    type: library
  dompdf:
    directory_name: dompdf
    custom_download: true
    type: library
  iCalcreator:
    directory_name: iCalcreator
    custom_download: true
    type: library
  jsonpath:
    directory_name: jsonpath
    custom_download: true
    type: library
  modernizr:
    directory_name: modernizr
    custom_download: true
    type: library
  placeholder:
    directory_name: placeholder
    custom_download: true
    type: library
  plupload:
    directory_name: plupload
    custom_download: true
    type: library
  tablesaw:
    directory_name: tablesaw
    custom_download: true
    type: library
  underscore:
    directory_name: underscore
    custom_download: true
    type: library
  leaflet:
    directory_name: leaflet
    custom_download: true
    type: library
  mailchimp:
    directory_name: mailchimp
    custom_download: true
    type: library
