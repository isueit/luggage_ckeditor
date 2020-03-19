<?php

/**

This is inteded to quickly disable the Spell Check as You Type (scayt) plugin in Luggage's
WYSIWYG editor if you are not able to update Luggage. The Luggage update includes a
hook_update() that runs similar code. Use this only if you are not upgrading Luaggage
itself. By default the scayt will display ads prompting the user to buy the service. This
shoudn't override any other CKEditor settings and should work with even if the feature is
overriden.

Please test this locally before running on live.

To use:

Download the script to where ever you want (curl -O or wget):
# cd /tmp
# curl -O https://raw.githubusercontent.com/isubit/luggage_ckeditor/master/ckeditor_disable_scayt.php

Run it on your site:
# cd /path/to/your/luggage/site
# drush eval "include('/tmp/ckeditor_disable_scayt.php');"
# drush cc all

Check to make sure it applied properly. If you have other sites on the server, you can
skip the downloading part and just run it on each site. When you are done with all the
sites, you may remove the script.

# rm /tmp/ckeditor_disable_scayt.php

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
