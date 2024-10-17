/**
 ******************************************************************************
 * @file    main.c
 * @author  Ac6
 * @version V1.0
 * @date    01-December-2013
 * @brief   Default main function.
 ******************************************************************************
 */

#include "lvgl.h"
#include "app_hal.h"

#include "ui/ui.h"
#include "uiSpaShared.h"

#include "demos/lv_demos.h"

int main(void)
{

  lv_init();

  hal_setup();

  ui_init();
  lv_obj_t *temperatureGuage = thermostatArc(ui_ThermostatLoading);
  lv_scale_set_line_needle_value(temperatureGuage, currentTempNeedle, 30, 35);
  // thermostatArc(ui_arcLoading);
  hal_loop();
}
