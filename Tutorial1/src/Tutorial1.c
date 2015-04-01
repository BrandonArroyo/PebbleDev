#include <pebble.h>
static Window *s_main_window;
static void main_window_load(Window *window){


}
static void main_window_unload(Window *window){

}
static void init() {
  //create the main window
  s_main_window = window_create();
  //window handlers will be set here
  window_set_window_handlers(s_main_window,(WindowHandlers){
    .load = main_window_load,
    .unload = main_window_unload

  //we need to show the window on the watch, the animator is = to true
    window_stack_push(s_main_window, true);
  });

}

static void deinit() {
  destroy(s_main_window);
}

int main(void) {
  init();
  app_event_loop();
  deinit();
}



