ckeditor_config
===============

Maintainers
===============
ISUITC

Michael Hofmockel

https://github.com/ISUITS/ckeditor_config

Included
================
ckeditor drupal module with adjusted config file and plugins

ckeditor_config Drupal feature


Installation
===============

Place the "ckeditor" directory in sites/all/modules

Place the "ckeditor_config" directory (feature) in sites/all/modules


sites/

	all/

		libraries/

			ckeditor (third party download not included)

		modules/

			ckeditor_config
			
			ckeditor (drupal module with unfortunate similar name)

Dependencies to install
----------------

drush dl better_formats ckeditor features image_resize_filter insert wysiwyg_filter

todo after install:
----------------
admin/config/content/ckeditor/edit/WYSIWYG

add WYSIWYG as the text formats

admin/people/permissions

edit permissions so the role editor can create a basic page

admin/structure/types

edit a content type to have an image field and enable the insert button feature

admin/people/create

create a user with the role of editor

add/node/page
