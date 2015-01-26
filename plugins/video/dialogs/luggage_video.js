CKEDITOR.dialog.add( 'luggage_videoDialog', function( editor ) {
    return {
        title: 'Video Properties',
        minWidth: 400,
        minHeight: 100,
        contents: [
            {
                id: 'tab-basic',
                label: 'Basic Settings',
                elements: [
                    {
                        type: 'text',
                        id: 'url',
                        label: 'Video URL',
                        validate: CKEDITOR.dialog.validate.notEmpty( "Video URL is required" )
                    }
                ]
            }
        ],
        onOk: function () {
            //var dialog = this;
            //var text = "[VIDEO::" + this.getValueOf( 'tab-basic', 'url' ) + "]";

            editor.insertText( "[VIDEO::" + this.getValueOf( 'tab-basic', 'url' ) + "]" );
        }

    }
});
