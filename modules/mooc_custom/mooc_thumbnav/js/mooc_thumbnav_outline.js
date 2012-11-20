(function ($) {
  $(document).ready(function(){
    // if next is clicked go to the next page
    $('.thumbnav_controller .mooc_thumbnav_outline').click(function(){
      var text = '';
      var title = $(this).attr('alt');
      if ($('#block-menu-block-1').length > 0) {
        text += $('#block-menu-block-1').html();
      }
      if ($('#block-menu-block-2').length > 0) {
        text += $('#block-menu-block-2').html();
      }
      Drupal.thumbnav.modal(title, text);
      // add click event for tinynav support it exists
      $('#thumbnav_modal select').change(function () {
        window.location.href = $(this).val();
      });
    });
  });
})(jQuery);