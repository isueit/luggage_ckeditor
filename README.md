ckeditor_config
===============

Maintainers
===============
ISUITC

Michael Hofmockel

https://github.com/ISUITS/ckeditor_config

Included
================
CKeditor WYSIWYG with adjusted config file

ckeditor_config Drupal feature

ckeditor_plugins


Installation
===============

Place the "ckeditor_config" directory (feature) in sites/all/modules

Place the "ckeditor_plugins" directory in sites/all/libraries

Place the "ckeditor" directory in sites/all/libraries

sites/

	all/

		libraries/

			CKeditor

			ckeditor_plugins

		modules/

			ckeditor_config

Dependencies
----------------

drush dl better_formats ckeditor features image_resize_filter insert wysiwyg_filter

drush @self si standard -y --db-url=mysql://root:root@localhost/ckeditor --site-name=ckeditor --account-name=hof

drush @self uli

todo:
----------------
admin/config/content/ckeditor/edit/WYSIWYG

add WYSIWYG as the text formats

To Test
================

admin/people/permissions

edit permissions so the role editor can create a basic page

admin/people/create

create a user with the role of editor

add/node/page
