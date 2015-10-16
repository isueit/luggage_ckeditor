(function($) {
 CKEDITOR.plugins.add( 'luggage', {
  init: function( editor )
  {
    editor.config.hideDialogFields="image:info:txtUrl";
  }
 });
})(jQuery);
