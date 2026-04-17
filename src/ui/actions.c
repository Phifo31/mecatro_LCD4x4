

#include "ui.h"
#include "vars.h"
#include "actions.h"

void action_switch_to_settings(lv_event_t * e) {
  loadScreen (SCREEN_ID_SETTINGS);
}

void action_switch_to_main(lv_event_t * e) {
    loadScreen (SCREEN_ID_MAIN);
}

void action_increment_counter(lv_event_t *e) {
    set_var_counter (get_var_counter() + 1);
}
