/*
 * This file is used/requested by the 'Styles' button.
 */
if (typeof(CKEDITOR) !== 'undefined') {
  CKEDITOR.addStylesSet('drupal', [
    {
      name: 'Button',
      element: 'a',
      attributes: {
        'class': 'button',
      }
    },
    {
      name: 'Image on Left',
      element: 'img',
      attributes: {
        'class': 'ibimage_left',
      }
    },
    {
      name: 'Image on Right',
      element: 'img',
      attributes: {
        'class': 'ibimage_right',
      }
    },
  ]);
}
