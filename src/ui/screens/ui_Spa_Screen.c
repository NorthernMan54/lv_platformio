// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 9.1.0
// Project name: SPA

#include "../ui.h"

void ui_Spa_Screen_screen_init(void)
{
ui_Spa_Screen = lv_obj_create(NULL);
lv_obj_remove_flag( ui_Spa_Screen, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_scrollbar_mode(ui_Spa_Screen, LV_SCROLLBAR_MODE_OFF);
ui_object_set_themeable_style_property(ui_Spa_Screen, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_Background);
ui_object_set_themeable_style_property(ui_Spa_Screen, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_Background);
lv_obj_set_style_border_color(ui_Spa_Screen, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_Spa_Screen, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_Spa_Screen, 10, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_side(ui_Spa_Screen, LV_BORDER_SIDE_FULL, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_left(ui_Spa_Screen, 5, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_Spa_Screen, 5, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_Spa_Screen, 5, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_Spa_Screen, 5, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_row(ui_Spa_Screen, 5, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_column(ui_Spa_Screen, 5, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_Spa_Screen, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Spa_Screen, &ui_font_Open_Sans_Bold_18, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_uiThermostatPlaceholder = lv_obj_create(ui_Spa_Screen);
lv_obj_remove_style_all(ui_uiThermostatPlaceholder);
lv_obj_set_width( ui_uiThermostatPlaceholder, 240);
lv_obj_set_height( ui_uiThermostatPlaceholder, 130);
lv_obj_set_x( ui_uiThermostatPlaceholder, -100 );
lv_obj_set_y( ui_uiThermostatPlaceholder, -157 );
lv_obj_set_align( ui_uiThermostatPlaceholder, LV_ALIGN_CENTER );
lv_obj_remove_flag( ui_uiThermostatPlaceholder, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_uiThermostatPlaceholder, 8, LV_PART_MAIN| LV_STATE_DEFAULT);
ui_object_set_themeable_style_property(ui_uiThermostatPlaceholder, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_AccessoryOffBkg);
ui_object_set_themeable_style_property(ui_uiThermostatPlaceholder, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_AccessoryOffBkg);
ui_object_set_themeable_style_property(ui_uiThermostatPlaceholder, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR, _ui_theme_color_widgetBorder);
ui_object_set_themeable_style_property(ui_uiThermostatPlaceholder, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA, _ui_theme_alpha_widgetBorder);
lv_obj_set_style_border_width(ui_uiThermostatPlaceholder, 3, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_side(ui_uiThermostatPlaceholder, LV_BORDER_SIDE_FULL, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_left(ui_uiThermostatPlaceholder, 10, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_uiThermostatPlaceholder, 10, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_uiThermostatPlaceholder, 10, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_uiThermostatPlaceholder, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_uiClock = lv_obj_create(ui_Spa_Screen);
lv_obj_remove_style_all(ui_uiClock);
lv_obj_set_width( ui_uiClock, LV_SIZE_CONTENT);  /// 250
lv_obj_set_height( ui_uiClock, LV_SIZE_CONTENT);   /// 30
lv_obj_set_x( ui_uiClock, 100 );
lv_obj_set_y( ui_uiClock, -199 );
lv_obj_set_align( ui_uiClock, LV_ALIGN_CENTER );
lv_obj_remove_flag( ui_uiClock, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_uiClock, 8, LV_PART_MAIN| LV_STATE_DEFAULT);
ui_object_set_themeable_style_property(ui_uiClock, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_AccessoryOffBkg);
ui_object_set_themeable_style_property(ui_uiClock, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_AccessoryOffBkg);
ui_object_set_themeable_style_property(ui_uiClock, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR, _ui_theme_color_widgetBorder);
ui_object_set_themeable_style_property(ui_uiClock, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA, _ui_theme_alpha_widgetBorder);
lv_obj_set_style_border_width(ui_uiClock, 3, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_left(ui_uiClock, 8, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_uiClock, 8, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_uiClock, 8, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_uiClock, 8, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_uiClock, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_uiClockLabel = lv_label_create(ui_uiClock);
lv_obj_set_width( ui_uiClockLabel, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_uiClockLabel, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_uiClockLabel, LV_ALIGN_CENTER );
lv_label_set_text(ui_uiClockLabel,"Mon, 07 Oct 2024 @ 22:30");
lv_obj_set_style_pad_left(ui_uiClockLabel, 3, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_uiClockLabel, 3, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_uiClockLabel, 3, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_uiClockLabel, 3, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_row(ui_uiClockLabel, 3, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_column(ui_uiClockLabel, 3, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_HeatControls = lv_obj_create(ui_Spa_Screen);
lv_obj_remove_style_all(ui_HeatControls);
lv_obj_set_width( ui_HeatControls, LV_SIZE_CONTENT);  /// 100
lv_obj_set_height( ui_HeatControls, LV_SIZE_CONTENT);   /// 50
lv_obj_set_x( ui_HeatControls, 123 );
lv_obj_set_y( ui_HeatControls, -127 );
lv_obj_set_align( ui_HeatControls, LV_ALIGN_CENTER );
lv_obj_set_flex_flow(ui_HeatControls,LV_FLEX_FLOW_COLUMN);
lv_obj_set_flex_align(ui_HeatControls, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_CENTER);
lv_obj_remove_flag( ui_HeatControls, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_HeatControls, 8, LV_PART_MAIN| LV_STATE_DEFAULT);
ui_object_set_themeable_style_property(ui_HeatControls, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_AccessoryOffBkg);
ui_object_set_themeable_style_property(ui_HeatControls, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_AccessoryOffBkg);
ui_object_set_themeable_style_property(ui_HeatControls, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR, _ui_theme_color_widgetBorder);
ui_object_set_themeable_style_property(ui_HeatControls, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA, _ui_theme_alpha_widgetBorder);
lv_obj_set_style_border_width(ui_HeatControls, 3, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_uiHeatState = lv_obj_create(ui_HeatControls);
lv_obj_remove_style_all(ui_uiHeatState);
lv_obj_set_width( ui_uiHeatState, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_uiHeatState, LV_SIZE_CONTENT);   /// 100
lv_obj_set_x( ui_uiHeatState, 60 );
lv_obj_set_y( ui_uiHeatState, 63 );
lv_obj_set_align( ui_uiHeatState, LV_ALIGN_CENTER );
lv_obj_set_flex_flow(ui_uiHeatState,LV_FLEX_FLOW_ROW);
lv_obj_set_flex_align(ui_uiHeatState, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
lv_obj_remove_flag( ui_uiHeatState, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE );    /// Flags
ui_object_set_themeable_style_property(ui_uiHeatState, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_AccessoryOffBkg);
ui_object_set_themeable_style_property(ui_uiHeatState, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_AccessoryOffBkg);
lv_obj_set_style_pad_left(ui_uiHeatState, 8, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_uiHeatState, 8, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_uiHeatState, 8, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_uiHeatState, 8, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_row(ui_uiHeatState, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_column(ui_uiHeatState, 8, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_color(ui_uiHeatState, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_uiHeatState, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_heatSwtichLabel = lv_label_create(ui_uiHeatState);
lv_obj_set_width( ui_heatSwtichLabel, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_heatSwtichLabel, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_heatSwtichLabel, LV_ALIGN_CENTER );
lv_label_set_text(ui_heatSwtichLabel,"Heat");

ui_heatStateSwitch = lv_switch_create(ui_uiHeatState);
lv_obj_set_width( ui_heatStateSwitch, 50);
lv_obj_set_height( ui_heatStateSwitch, 25);
lv_obj_set_align( ui_heatStateSwitch, LV_ALIGN_CENTER );
lv_obj_add_state( ui_heatStateSwitch, LV_STATE_CHECKED );     /// States
lv_obj_remove_flag( ui_heatStateSwitch, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE );    /// Flags

lv_obj_set_style_bg_color(ui_heatStateSwitch, lv_color_hex(0x10AAF0), LV_PART_INDICATOR | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_heatStateSwitch, 255, LV_PART_INDICATOR| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_heatStateSwitch, lv_color_hex(0xA2741E), LV_PART_INDICATOR | LV_STATE_CHECKED );
lv_obj_set_style_bg_opa(ui_heatStateSwitch, 255, LV_PART_INDICATOR| LV_STATE_CHECKED);

ui_object_set_themeable_style_property(ui_heatStateSwitch, LV_PART_KNOB| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_graphBkg);
ui_object_set_themeable_style_property(ui_heatStateSwitch, LV_PART_KNOB| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_graphBkg);

ui_uiTempRange = lv_obj_create(ui_HeatControls);
lv_obj_remove_style_all(ui_uiTempRange);
lv_obj_set_width( ui_uiTempRange, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_uiTempRange, LV_SIZE_CONTENT);   /// 100
lv_obj_set_x( ui_uiTempRange, 60 );
lv_obj_set_y( ui_uiTempRange, 63 );
lv_obj_set_align( ui_uiTempRange, LV_ALIGN_CENTER );
lv_obj_set_flex_flow(ui_uiTempRange,LV_FLEX_FLOW_ROW);
lv_obj_set_flex_align(ui_uiTempRange, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
lv_obj_remove_flag( ui_uiTempRange, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE );    /// Flags
ui_object_set_themeable_style_property(ui_uiTempRange, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_AccessoryOffBkg);
ui_object_set_themeable_style_property(ui_uiTempRange, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_AccessoryOffBkg);
lv_obj_set_style_pad_left(ui_uiTempRange, 8, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_uiTempRange, 8, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_uiTempRange, 8, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_uiTempRange, 8, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_row(ui_uiTempRange, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_column(ui_uiTempRange, 8, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_color(ui_uiTempRange, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_uiTempRange, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_tempRangeHighLabel = lv_label_create(ui_uiTempRange);
lv_obj_set_width( ui_tempRangeHighLabel, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_tempRangeHighLabel, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_tempRangeHighLabel, LV_ALIGN_CENTER );
lv_label_set_text(ui_tempRangeHighLabel,"Low");

ui_tempRangeSwitch = lv_switch_create(ui_uiTempRange);
lv_obj_set_width( ui_tempRangeSwitch, 50);
lv_obj_set_height( ui_tempRangeSwitch, 25);
lv_obj_set_align( ui_tempRangeSwitch, LV_ALIGN_CENTER );
lv_obj_add_state( ui_tempRangeSwitch, LV_STATE_CHECKED );     /// States

lv_obj_set_style_bg_color(ui_tempRangeSwitch, lv_color_hex(0x10AAF0), LV_PART_INDICATOR | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_tempRangeSwitch, 255, LV_PART_INDICATOR| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_tempRangeSwitch, lv_color_hex(0xA2741E), LV_PART_INDICATOR | LV_STATE_CHECKED );
lv_obj_set_style_bg_opa(ui_tempRangeSwitch, 255, LV_PART_INDICATOR| LV_STATE_CHECKED);

ui_object_set_themeable_style_property(ui_tempRangeSwitch, LV_PART_KNOB| LV_STATE_CHECKED, LV_STYLE_BG_COLOR, _ui_theme_color_graphBkg);
ui_object_set_themeable_style_property(ui_tempRangeSwitch, LV_PART_KNOB| LV_STATE_CHECKED, LV_STYLE_BG_OPA, _ui_theme_alpha_graphBkg);

ui_tempRangeLowLabel = lv_label_create(ui_uiTempRange);
lv_obj_set_width( ui_tempRangeLowLabel, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_tempRangeLowLabel, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_tempRangeLowLabel, LV_ALIGN_CENTER );
lv_label_set_text(ui_tempRangeLowLabel,"High");

ui_uiPump1 = ui_uiPump_create(ui_Spa_Screen);
lv_obj_set_x( ui_uiPump1, -162 );
lv_obj_set_y( ui_uiPump1, 0 );



ui_uiPump2 = ui_uiPump_create(ui_Spa_Screen);
lv_obj_set_x( ui_uiPump2, -29 );
lv_obj_set_y( ui_uiPump2, 0 );


lv_label_set_text(ui_comp_get_child(ui_uiPump2, UI_COMP_UIPUMP_LABEL),"Spa Pump 2");

ui_uiLight1 = ui_uiLight_create(ui_Spa_Screen);
lv_obj_set_x( ui_uiLight1, 100 );
lv_obj_set_y( ui_uiLight1, 0 );



ui_uiFilter = ui_uiFilter_create(ui_Spa_Screen);
lv_obj_set_x( ui_uiFilter, 197 );
lv_obj_set_y( ui_uiFilter, 0 );



ui_uiTemperatureHistory = lv_obj_create(ui_Spa_Screen);
lv_obj_remove_style_all(ui_uiTemperatureHistory);
lv_obj_set_width( ui_uiTemperatureHistory, 220);
lv_obj_set_height( ui_uiTemperatureHistory, 150);
lv_obj_set_x( ui_uiTemperatureHistory, -115 );
lv_obj_set_y( ui_uiTemperatureHistory, 150 );
lv_obj_set_align( ui_uiTemperatureHistory, LV_ALIGN_CENTER );
lv_obj_remove_flag( ui_uiTemperatureHistory, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_uiTemperatureHistory, 8, LV_PART_MAIN| LV_STATE_DEFAULT);
ui_object_set_themeable_style_property(ui_uiTemperatureHistory, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_AccessoryOffBkg);
ui_object_set_themeable_style_property(ui_uiTemperatureHistory, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_AccessoryOffBkg);
ui_object_set_themeable_style_property(ui_uiTemperatureHistory, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR, _ui_theme_color_widgetBorder);
ui_object_set_themeable_style_property(ui_uiTemperatureHistory, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA, _ui_theme_alpha_widgetBorder);
lv_obj_set_style_border_width(ui_uiTemperatureHistory, 3, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_side(ui_uiTemperatureHistory, LV_BORDER_SIDE_FULL, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_left(ui_uiTemperatureHistory, 10, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_uiTemperatureHistory, 10, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_uiTemperatureHistory, 10, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_uiTemperatureHistory, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_uiTemperatureChart = lv_chart_create(ui_uiTemperatureHistory);
lv_obj_set_width( ui_uiTemperatureChart, 170);
lv_obj_set_height( ui_uiTemperatureChart, 90);
lv_obj_set_x( ui_uiTemperatureChart, 14 );
lv_obj_set_y( ui_uiTemperatureChart, -4 );
lv_obj_set_align( ui_uiTemperatureChart, LV_ALIGN_TOP_MID );
lv_obj_remove_flag( ui_uiTemperatureChart, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_add_flag( ui_uiTemperatureChart, LV_OBJ_FLAG_OVERFLOW_VISIBLE );    //make scales visible - Should it be forced to True? 
//lv_obj_remove_flag( ui_uiTemperatureChart, LV_OBJ_FLAG_SCROLLABLE );    //no chart-zoom in LVGL9 - Shouldn't it be forced to False?
lv_chart_set_type( ui_uiTemperatureChart, LV_CHART_TYPE_LINE);
lv_chart_set_point_count( ui_uiTemperatureChart, 24);
lv_chart_set_range( ui_uiTemperatureChart, LV_CHART_AXIS_PRIMARY_Y, 0, 40);
lv_chart_set_range( ui_uiTemperatureChart, LV_CHART_AXIS_SECONDARY_Y, 0, 0);
ui_object_set_themeable_style_property(ui_uiTemperatureChart, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_graphBkg);
ui_object_set_themeable_style_property(ui_uiTemperatureChart, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_graphBkg);

ui_uiTemperatureChart_Xaxis = lv_scale_create( ui_uiTemperatureChart );
lv_scale_set_mode( ui_uiTemperatureChart_Xaxis, LV_SCALE_MODE_HORIZONTAL_BOTTOM );
lv_obj_set_size( ui_uiTemperatureChart_Xaxis, lv_pct(100), 1 );
lv_obj_set_align( ui_uiTemperatureChart_Xaxis, LV_ALIGN_BOTTOM_MID );
lv_obj_set_y( ui_uiTemperatureChart_Xaxis, 1 + lv_obj_get_style_pad_bottom(ui_uiTemperatureChart,LV_PART_MAIN) + lv_obj_get_style_border_width(ui_uiTemperatureChart,LV_PART_MAIN) );
lv_obj_set_style_line_width( ui_uiTemperatureChart_Xaxis, 0, LV_PART_MAIN );
lv_obj_set_style_line_width( ui_uiTemperatureChart_Xaxis, 1, LV_PART_ITEMS ); //LVGL-9.1 ticks are thicker by default
lv_obj_set_style_line_width( ui_uiTemperatureChart_Xaxis, 1, LV_PART_INDICATOR );
lv_obj_set_style_length( ui_uiTemperatureChart_Xaxis, 5, LV_PART_ITEMS );    //minor tick length
lv_obj_set_style_length( ui_uiTemperatureChart_Xaxis, 10, LV_PART_INDICATOR );    //major tick length
lv_scale_set_range( ui_uiTemperatureChart_Xaxis, 0, 5 > 0 ? 5 - 1 : 0 );
lv_scale_set_total_tick_count( ui_uiTemperatureChart_Xaxis, (5>0 ? 5-1 : 0) * 2 + 1 );
lv_scale_set_major_tick_every( ui_uiTemperatureChart_Xaxis, 2 >= 1 ? 2 : 1 );
ui_uiTemperatureChart_Yaxis1 = lv_scale_create( ui_uiTemperatureChart );
lv_scale_set_mode( ui_uiTemperatureChart_Yaxis1, LV_SCALE_MODE_VERTICAL_LEFT );
lv_obj_set_size( ui_uiTemperatureChart_Yaxis1, 50, lv_pct(100) );
lv_obj_set_align( ui_uiTemperatureChart_Yaxis1, LV_ALIGN_LEFT_MID );
lv_obj_set_x( ui_uiTemperatureChart_Yaxis1, -50 - lv_obj_get_style_pad_left(ui_uiTemperatureChart,LV_PART_MAIN) - lv_obj_get_style_border_width(ui_uiTemperatureChart,LV_PART_MAIN) + 2 );
lv_obj_set_style_line_width( ui_uiTemperatureChart_Yaxis1, 0, LV_PART_MAIN );
lv_obj_set_style_line_width( ui_uiTemperatureChart_Yaxis1, 1, LV_PART_ITEMS );
lv_obj_set_style_line_width( ui_uiTemperatureChart_Yaxis1, 1, LV_PART_INDICATOR );
lv_obj_set_style_length( ui_uiTemperatureChart_Yaxis1, 5, LV_PART_ITEMS ); //minor tick length
lv_obj_set_style_length( ui_uiTemperatureChart_Yaxis1, 10, LV_PART_INDICATOR ); //major tick length
lv_scale_set_range( ui_uiTemperatureChart_Yaxis1,  0, 40 );
lv_scale_set_total_tick_count( ui_uiTemperatureChart_Yaxis1, (5 > 0 ? 5-1 : 0) * 2 + 1 );
lv_scale_set_major_tick_every( ui_uiTemperatureChart_Yaxis1, 2 >= 1 ? 2 : 1 );
ui_uiTemperatureChart_Yaxis2 = lv_scale_create( ui_uiTemperatureChart );
lv_scale_set_mode( ui_uiTemperatureChart_Yaxis2, LV_SCALE_MODE_VERTICAL_RIGHT );
lv_obj_set_size( ui_uiTemperatureChart_Yaxis2, 25, lv_pct(100) );
lv_obj_set_align( ui_uiTemperatureChart_Yaxis2, LV_ALIGN_RIGHT_MID );
lv_obj_set_x( ui_uiTemperatureChart_Yaxis2, 25 + lv_obj_get_style_pad_right(ui_uiTemperatureChart,LV_PART_MAIN) + lv_obj_get_style_border_width(ui_uiTemperatureChart,LV_PART_MAIN) + 1 );
lv_obj_set_style_line_width( ui_uiTemperatureChart_Yaxis2, 0, LV_PART_MAIN );
lv_obj_set_style_line_width( ui_uiTemperatureChart_Yaxis2, 1, LV_PART_ITEMS );
lv_obj_set_style_line_width( ui_uiTemperatureChart_Yaxis2, 1, LV_PART_INDICATOR );
lv_obj_set_style_length( ui_uiTemperatureChart_Yaxis2, 0, LV_PART_ITEMS ); //minor tick length
lv_obj_set_style_length( ui_uiTemperatureChart_Yaxis2, 0, LV_PART_INDICATOR ); //major tick length
lv_scale_set_range( ui_uiTemperatureChart_Yaxis2,  0, 0 );
lv_scale_set_total_tick_count( ui_uiTemperatureChart_Yaxis2, (0 > 0 ? 0-1 : 0) * 0 + 1 );
lv_scale_set_major_tick_every( ui_uiTemperatureChart_Yaxis2, 0 >= 1 ? 0 : 1 );
lv_scale_set_label_show( ui_uiTemperatureChart_Yaxis2, false );


lv_obj_set_style_text_font(ui_uiTemperatureChart_Xaxis, &ui_font_Open_Sans_Bold_12, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_uiTemperatureChart_Yaxis1, &ui_font_Open_Sans_Bold_12, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_uiTemperatureChart_Yaxis2, &ui_font_Open_Sans_Bold_12, LV_PART_MAIN| LV_STATE_DEFAULT);

//This workaround (an invisible outline) is needed because without it chart overflow-visible doesn't work in LVGL-9.1
lv_obj_set_style_outline_pad( ui_uiTemperatureChart, LV_MAX3(1, 50, 25), LV_PART_MAIN | LV_STATE_DEFAULT ); //workaround for ineffective 'overflow visible' flag
lv_obj_set_style_outline_width( ui_uiTemperatureChart, -1, LV_PART_MAIN | LV_STATE_DEFAULT );
ui_temperatureChartLabel = lv_label_create(ui_uiTemperatureHistory);
lv_obj_set_height( ui_temperatureChartLabel, 30);
lv_obj_set_width( ui_temperatureChartLabel, LV_SIZE_CONTENT);  /// 142
lv_obj_set_x( ui_temperatureChartLabel, 2 );
lv_obj_set_y( ui_temperatureChartLabel, 7 );
lv_obj_set_align( ui_temperatureChartLabel, LV_ALIGN_BOTTOM_MID );
lv_obj_set_flex_flow(ui_temperatureChartLabel,LV_FLEX_FLOW_ROW);
lv_obj_set_flex_align(ui_temperatureChartLabel, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
lv_label_set_text(ui_temperatureChartLabel,"Temperature C");
lv_obj_set_style_pad_left(ui_temperatureChartLabel, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_temperatureChartLabel, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_temperatureChartLabel, 3, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_temperatureChartLabel, 8, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_uiHeaterHistory = lv_obj_create(ui_Spa_Screen);
lv_obj_remove_style_all(ui_uiHeaterHistory);
lv_obj_set_width( ui_uiHeaterHistory, 220);
lv_obj_set_height( ui_uiHeaterHistory, 150);
lv_obj_set_x( ui_uiHeaterHistory, 115 );
lv_obj_set_y( ui_uiHeaterHistory, 151 );
lv_obj_set_align( ui_uiHeaterHistory, LV_ALIGN_CENTER );
lv_obj_remove_flag( ui_uiHeaterHistory, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_uiHeaterHistory, 8, LV_PART_MAIN| LV_STATE_DEFAULT);
ui_object_set_themeable_style_property(ui_uiHeaterHistory, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_AccessoryOffBkg);
ui_object_set_themeable_style_property(ui_uiHeaterHistory, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_AccessoryOffBkg);
ui_object_set_themeable_style_property(ui_uiHeaterHistory, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR, _ui_theme_color_widgetBorder);
ui_object_set_themeable_style_property(ui_uiHeaterHistory, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA, _ui_theme_alpha_widgetBorder);
lv_obj_set_style_border_width(ui_uiHeaterHistory, 3, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_side(ui_uiHeaterHistory, LV_BORDER_SIDE_FULL, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_left(ui_uiHeaterHistory, 10, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_uiHeaterHistory, 10, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_uiHeaterHistory, 10, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_uiHeaterHistory, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_uiHeaterChart = lv_chart_create(ui_uiHeaterHistory);
lv_obj_set_width( ui_uiHeaterChart, 170);
lv_obj_set_height( ui_uiHeaterChart, 90);
lv_obj_set_x( ui_uiHeaterChart, 15 );
lv_obj_set_y( ui_uiHeaterChart, -4 );
lv_obj_set_align( ui_uiHeaterChart, LV_ALIGN_TOP_MID );
lv_obj_remove_flag( ui_uiHeaterChart, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_add_flag( ui_uiHeaterChart, LV_OBJ_FLAG_OVERFLOW_VISIBLE );    //make scales visible - Should it be forced to True? 
//lv_obj_remove_flag( ui_uiHeaterChart, LV_OBJ_FLAG_SCROLLABLE );    //no chart-zoom in LVGL9 - Shouldn't it be forced to False?
lv_chart_set_type( ui_uiHeaterChart, LV_CHART_TYPE_LINE);
lv_chart_set_point_count( ui_uiHeaterChart, 24);
lv_chart_set_range( ui_uiHeaterChart, LV_CHART_AXIS_SECONDARY_Y, 0, 0);
ui_object_set_themeable_style_property(ui_uiHeaterChart, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_graphBkg);
ui_object_set_themeable_style_property(ui_uiHeaterChart, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_graphBkg);

ui_uiHeaterChart_Xaxis = lv_scale_create( ui_uiHeaterChart );
lv_scale_set_mode( ui_uiHeaterChart_Xaxis, LV_SCALE_MODE_HORIZONTAL_BOTTOM );
lv_obj_set_size( ui_uiHeaterChart_Xaxis, lv_pct(100), 1 );
lv_obj_set_align( ui_uiHeaterChart_Xaxis, LV_ALIGN_BOTTOM_MID );
lv_obj_set_y( ui_uiHeaterChart_Xaxis, 1 + lv_obj_get_style_pad_bottom(ui_uiHeaterChart,LV_PART_MAIN) + lv_obj_get_style_border_width(ui_uiHeaterChart,LV_PART_MAIN) );
lv_obj_set_style_line_width( ui_uiHeaterChart_Xaxis, 0, LV_PART_MAIN );
lv_obj_set_style_line_width( ui_uiHeaterChart_Xaxis, 1, LV_PART_ITEMS ); //LVGL-9.1 ticks are thicker by default
lv_obj_set_style_line_width( ui_uiHeaterChart_Xaxis, 1, LV_PART_INDICATOR );
lv_obj_set_style_length( ui_uiHeaterChart_Xaxis, 5, LV_PART_ITEMS );    //minor tick length
lv_obj_set_style_length( ui_uiHeaterChart_Xaxis, 10, LV_PART_INDICATOR );    //major tick length
lv_scale_set_range( ui_uiHeaterChart_Xaxis, 0, 5 > 0 ? 5 - 1 : 0 );
lv_scale_set_total_tick_count( ui_uiHeaterChart_Xaxis, (5>0 ? 5-1 : 0) * 2 + 1 );
lv_scale_set_major_tick_every( ui_uiHeaterChart_Xaxis, 2 >= 1 ? 2 : 1 );
ui_uiHeaterChart_Yaxis1 = lv_scale_create( ui_uiHeaterChart );
lv_scale_set_mode( ui_uiHeaterChart_Yaxis1, LV_SCALE_MODE_VERTICAL_LEFT );
lv_obj_set_size( ui_uiHeaterChart_Yaxis1, 50, lv_pct(100) );
lv_obj_set_align( ui_uiHeaterChart_Yaxis1, LV_ALIGN_LEFT_MID );
lv_obj_set_x( ui_uiHeaterChart_Yaxis1, -50 - lv_obj_get_style_pad_left(ui_uiHeaterChart,LV_PART_MAIN) - lv_obj_get_style_border_width(ui_uiHeaterChart,LV_PART_MAIN) + 2 );
lv_obj_set_style_line_width( ui_uiHeaterChart_Yaxis1, 0, LV_PART_MAIN );
lv_obj_set_style_line_width( ui_uiHeaterChart_Yaxis1, 1, LV_PART_ITEMS );
lv_obj_set_style_line_width( ui_uiHeaterChart_Yaxis1, 1, LV_PART_INDICATOR );
lv_obj_set_style_length( ui_uiHeaterChart_Yaxis1, 5, LV_PART_ITEMS ); //minor tick length
lv_obj_set_style_length( ui_uiHeaterChart_Yaxis1, 10, LV_PART_INDICATOR ); //major tick length
lv_scale_set_total_tick_count( ui_uiHeaterChart_Yaxis1, (5 > 0 ? 5-1 : 0) * 2 + 1 );
lv_scale_set_major_tick_every( ui_uiHeaterChart_Yaxis1, 2 >= 1 ? 2 : 1 );
ui_uiHeaterChart_Yaxis2 = lv_scale_create( ui_uiHeaterChart );
lv_scale_set_mode( ui_uiHeaterChart_Yaxis2, LV_SCALE_MODE_VERTICAL_RIGHT );
lv_obj_set_size( ui_uiHeaterChart_Yaxis2, 25, lv_pct(100) );
lv_obj_set_align( ui_uiHeaterChart_Yaxis2, LV_ALIGN_RIGHT_MID );
lv_obj_set_x( ui_uiHeaterChart_Yaxis2, 25 + lv_obj_get_style_pad_right(ui_uiHeaterChart,LV_PART_MAIN) + lv_obj_get_style_border_width(ui_uiHeaterChart,LV_PART_MAIN) + 1 );
lv_obj_set_style_line_width( ui_uiHeaterChart_Yaxis2, 0, LV_PART_MAIN );
lv_obj_set_style_line_width( ui_uiHeaterChart_Yaxis2, 1, LV_PART_ITEMS );
lv_obj_set_style_line_width( ui_uiHeaterChart_Yaxis2, 1, LV_PART_INDICATOR );
lv_obj_set_style_length( ui_uiHeaterChart_Yaxis2, 0, LV_PART_ITEMS ); //minor tick length
lv_obj_set_style_length( ui_uiHeaterChart_Yaxis2, 0, LV_PART_INDICATOR ); //major tick length
lv_scale_set_range( ui_uiHeaterChart_Yaxis2,  0, 0 );
lv_scale_set_total_tick_count( ui_uiHeaterChart_Yaxis2, (0 > 0 ? 0-1 : 0) * 0 + 1 );
lv_scale_set_major_tick_every( ui_uiHeaterChart_Yaxis2, 0 >= 1 ? 0 : 1 );
lv_scale_set_label_show( ui_uiHeaterChart_Yaxis2, false );


lv_obj_set_style_text_font(ui_uiHeaterChart_Xaxis, &ui_font_Open_Sans_Bold_12, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_uiHeaterChart_Yaxis1, &ui_font_Open_Sans_Bold_12, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_uiHeaterChart_Yaxis2, &ui_font_Open_Sans_Bold_12, LV_PART_MAIN| LV_STATE_DEFAULT);

//This workaround (an invisible outline) is needed because without it chart overflow-visible doesn't work in LVGL-9.1
lv_obj_set_style_outline_pad( ui_uiHeaterChart, LV_MAX3(1, 50, 25), LV_PART_MAIN | LV_STATE_DEFAULT ); //workaround for ineffective 'overflow visible' flag
lv_obj_set_style_outline_width( ui_uiHeaterChart, -1, LV_PART_MAIN | LV_STATE_DEFAULT );
ui_heaterChartLabel = lv_label_create(ui_uiHeaterHistory);
lv_obj_set_height( ui_heaterChartLabel, 30);
lv_obj_set_width( ui_heaterChartLabel, LV_SIZE_CONTENT);  /// 142
lv_obj_set_x( ui_heaterChartLabel, 2 );
lv_obj_set_y( ui_heaterChartLabel, 7 );
lv_obj_set_align( ui_heaterChartLabel, LV_ALIGN_BOTTOM_MID );
lv_obj_set_flex_flow(ui_heaterChartLabel,LV_FLEX_FLOW_ROW);
lv_obj_set_flex_align(ui_heaterChartLabel, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
lv_label_set_text(ui_heaterChartLabel,"Heater (Min)");
lv_obj_set_style_pad_left(ui_heaterChartLabel, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_heaterChartLabel, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_heaterChartLabel, 3, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_heaterChartLabel, 8, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_add_event_cb(ui_tempRangeSwitch, ui_event_tempRangeSwitch, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_Spa_Screen, ui_event_Spa_Screen, LV_EVENT_ALL, NULL);

}
