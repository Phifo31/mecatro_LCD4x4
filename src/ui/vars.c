

#include "ui.h"
#include "vars.h"


int32_t counter = 123;

int32_t get_var_counter() {
    return counter;
}

void set_var_counter(int32_t value) {
    counter = value;
}


bool button_active = false;

bool get_var_incrementation_active() {
    return button_active;
}

void set_var_incrementation_active(bool value) {
    button_active = value;
    if (button_active)
      //lv_obj_add_state(objects.obj0, LV_STATE_DEFAULT);
      objects.obj0->state = LV_STATE_DEFAULT;
    else
      //lv_obj_add_state(objects.obj0, LV_STATE_DISABLED);
      objects.obj0->state = LV_STATE_DISABLED;
}


