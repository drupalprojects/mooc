(function ($) {
  $(document).ready(function(){
    // if next is clicked go to the next page
    $('#thumbnav_controller .mooc_thumbnav_copyright').click(function(){
      // present this on click
      var output = '<h3>' + $(this).attr('alt') + '</h3>';
      if ($('#boxes-box-site_footer').length > 0) {
        output += $('#boxes-box-site_footer').html();
      }
      $('#mooc_thumbnav_modal').addClass('display').html(output);
    });
    // close when clicking elsewhere
    $('#page').click(function(e) {
      $('#mooc_thumbnav_modal').removeClass('display');
    });
  });
})(jQuery);