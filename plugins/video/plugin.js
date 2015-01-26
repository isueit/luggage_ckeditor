CKEDITOR.plugins.add( 'luggage_video', {
    icons: 'luggage_video',
    init: function ( editor ) {
        editor.addCommand('luggage_video', new CKEDITOR.dialogCommand( 'luggage_videoDialog' ) );
        editor.ui.addButton( 'luggage_video', {
            label: 'Insert Video',
            command: 'luggage_video',
            toolbar: 'insert'
        });

        CKEDITOR.dialog.add( 'luggage_videoDialog', this.path + 'dialogs/luggage_video.js' );
    }
});
