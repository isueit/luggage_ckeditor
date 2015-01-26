<?php
/**
 * @file
 * luggage_ckeditor.features.ckeditor_profile.inc
 */

/**
 * Implements hook_ckeditor_profile_defaults().
 */
function luggage_ckeditor_ckeditor_profile_defaults() {
  $data = array(
    'CKEditor Global Profile' => array(
      'name' => 'CKEditor Global Profile',
      'settings' => array(
        'skin' => 'moono',
        'ckeditor_path' => '%l/ckeditor',
        'ckeditor_local_path' => '',
        'ckeditor_plugins_path' => '%m/plugins',
        'ckeditor_plugins_local_path' => '',
        'ckfinder_path' => '%m/ckfinder',
        'ckfinder_local_path' => '',
        'ckeditor_aggregate' => 'f',
        'toolbar_wizard' => 't',
        'loadPlugins' => array(),
      ),
      'input_formats' => array(),
    ),
    'WYSIWYG' => array(
      'name' => 'WYSIWYG',
      'settings' => array(
        'ss' => 2,
        'default' => 't',
        'show_toggle' => 'f',
        'uicolor' => 'default',
        'uicolor_user' => '#025C0E',
        'toolbar' => '[

    [\'PasteText\',\'PasteFromWord\'],

    [\'Table\',\'HorizontalRule\'],

    [\'SpecialChar\',\'Subscript\',\'Superscript\'],

    [\'Bold\',\'Italic\',\'Underline\'],

    [\'Blockquote\',\'BulletedList\',\'NumberedList\'],

    [\'JustifyLeft\',\'JustifyCenter\',\'JustifyRight\'],

    [\'Unlink\',\'Link\'],

    [\'Format\',\'RemoveFormat\'],

    [\'Image\',\'luggage_video\']

]',
        'expand' => 't',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'p;h2;h3',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
            'breakBeforeClose' => 0,
            'pre_indent' => 0,
          ),
        ),
        'css_mode' => 'theme',
        'css_path' => '',
        'css_style' => 'theme',
        'styles_path' => '',
        'filebrowser' => 'none',
        'filebrowser_image' => '',
        'filebrowser_flash' => '',
        'UserFilesPath' => '%b%f/',
        'UserFilesAbsolutePath' => '%d%b%f/',
        'forcePasteAsPlainText' => 'f',
        'html_entities' => 'f',
        'scayt_autoStartup' => 't',
        'theme_config_js' => 'f',
        'js_conf' => '',
        'loadPlugins' => array(
          'confighelper' => array(
            'name' => 'confighelper',
            'desc' => 'Configuration helper plugin for CKEditor',
            'path' => '%plugin_dir%confighelper/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'drupalbreaks' => array(
            'name' => 'drupalbreaks',
            'desc' => 'Plugin for inserting Drupal teaser and page breaks.',
            'path' => '%plugin_dir%drupalbreaks/',
            'buttons' => array(
              'DrupalBreak' => array(
                'label' => 'DrupalBreak',
                'icon' => 'images/drupalbreak.png',
              ),
            ),
            'default' => 't',
          ),
          'luggage_video' => array(
            'name' => 'luggage_video',
            'desc' => 'Luggage Video',
            'path' => '%base_path%sites/all/modules/luggage/luggage_ckeditor/plugins/video/',
            'buttons' => array(
              'luggage_video' => array(
                'label' => 'Video',
                'icon' => 'icons/luggage_video.png',
              ),
            ),
          ),
        ),
      ),
      'input_formats' => array(
        'wysiwyg' => 'WYSIWYG',
      ),
    ),
  );
  return $data;
}
