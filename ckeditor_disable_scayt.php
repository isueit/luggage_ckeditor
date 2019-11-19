<?php

/**

This is inteded to quickly disable the Spell Check as You Type (scayt) plugin in Luggage's
WYSIWYG editor if you are not able to update Luggage. The Luggage update includes a
hook_update() that runs similar code. Use this only if you are not upgradeing Luaggage
itself. By default the scayt will display ads prompting user to buy the service. This
shoudn't override any other CKEditor settings and should work with even if the feature is
overriden.

Please test this locally before running on live.

To use:

# cd /path/to/your/luggage/site
# cd sites/all/modules/luggage/luggage_ckeditor # Where you find this file.

# drush eval "include('ckeditor_disable_scayt.php');"

**/

module_load_include('inc', 'ckeditor', 'includes/ckeditor.admin');

$result = db_select('ckeditor_settings', 's')->fields('s')->execute();
foreach ($result as $data) {
  $data->settings = unserialize($data->settings);
  $data->input_formats = array();
  $profiles[$data->name] = $data;
}

$profiles['WYSIWYG']->settings['scayt_autoStartup'] = 'f';

$data = ckeditor_admin_values_to_settings($profiles['WYSIWYG']->settings);

$result = db_update('ckeditor_settings')
  ->fields(array(
    'settings' => $data,
  ))
  ->condition('name', 'WYSIWYG', '=')
  ->execute();

echo "Done\n";
