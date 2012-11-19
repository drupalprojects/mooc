(function ($) {
  $(document).ready(function(){
    // if next is clicked go to the next page
    $('#thumbnav_controller .mooc_thumbnav_outline').click(function(){
      var output = '<h3>' + $(this).attr('alt') + '</h3>';
      // present this on click
      if ($('#block-menu-block-1').length > 0) {
        output += $('#block-menu-block-1').html();
      }
      if ($('#block-menu-block-2').length > 0) {
        output += $('#block-menu-block-2').html();
      }
      $('#mooc_thumbnav_modal').addClass('display').html(output);
      // add click event back in for tinynav support
      $('#mooc_thumbnav_modal select').change(function () {
        window.location.href = $(this).val();
      });
    });
    // close when clicking elsewhere
    $('#page').click(function(e) {
      $('#mooc_thumbnav_modal').removeClass('display');
    });
  });
})(jQuery);