// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 9.1.0
// Project name: SPA

#include "../ui.h"

void ui_Loading_Screen_screen_init(void)
{
ui_Loading_Screen = lv_obj_create(NULL);
lv_obj_remove_flag( ui_Loading_Screen, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_scrollbar_mode(ui_Loading_Screen, LV_SCROLLBAR_MODE_OFF);
lv_obj_set_flex_flow(ui_Loading_Screen,LV_FLEX_FLOW_ROW_WRAP);
lv_obj_set_flex_align(ui_Loading_Screen, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
ui_object_set_themeable_style_property(ui_Loading_Screen, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_Background);
ui_object_set_themeable_style_property(ui_Loading_Screen, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_Background);
lv_obj_set_style_border_color(ui_Loading_Screen, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_Loading_Screen, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_Loading_Screen, 10, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_side(ui_Loading_Screen, LV_BORDER_SIDE_FULL, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_left(ui_Loading_Screen, 10, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_Loading_Screen, 10, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_Loading_Screen, 10, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_Loading_Screen, 10, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_Loading_Screen, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Loading_Screen, &ui_font_Open_Sans_Bold_18, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_ThermostatLoading = lv_obj_create(ui_Loading_Screen);
lv_obj_remove_style_all(ui_ThermostatLoading);
lv_obj_set_width( ui_ThermostatLoading, 240);
lv_obj_set_height( ui_ThermostatLoading, 130);
lv_obj_set_x( ui_ThermostatLoading, -122 );
lv_obj_set_y( ui_ThermostatLoading, 146 );
lv_obj_set_align( ui_ThermostatLoading, LV_ALIGN_CENTER );
lv_obj_remove_flag( ui_ThermostatLoading, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_ThermostatLoading, 8, LV_PART_MAIN| LV_STATE_DEFAULT);
ui_object_set_themeable_style_property(ui_ThermostatLoading, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_AccessoryOffBkg);
ui_object_set_themeable_style_property(ui_ThermostatLoading, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_AccessoryOffBkg);
ui_object_set_themeable_style_property(ui_ThermostatLoading, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR, _ui_theme_color_widgetBorder);
ui_object_set_themeable_style_property(ui_ThermostatLoading, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA, _ui_theme_alpha_widgetBorder);
lv_obj_set_style_border_width(ui_ThermostatLoading, 3, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_HeatControlsLoading = lv_obj_create(ui_Loading_Screen);
lv_obj_remove_style_all(ui_HeatControlsLoading);
lv_obj_set_width( ui_HeatControlsLoading, LV_SIZE_CONTENT);  /// 100
lv_obj_set_height( ui_HeatControlsLoading, LV_SIZE_CONTENT);   /// 50
lv_obj_set_x( ui_HeatControlsLoading, -52 );
lv_obj_set_y( ui_HeatControlsLoading, 190 );
lv_obj_set_align( ui_HeatControlsLoading, LV_ALIGN_CENTER );
lv_obj_set_flex_flow(ui_HeatControlsLoading,LV_FLEX_FLOW_COLUMN);
lv_obj_set_flex_align(ui_HeatControlsLoading, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_CENTER);
lv_obj_remove_flag( ui_HeatControlsLoading, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_HeatControlsLoading, 8, LV_PART_MAIN| LV_STATE_DEFAULT);
ui_object_set_themeable_style_property(ui_HeatControlsLoading, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_AccessoryOffBkg);
ui_object_set_themeable_style_property(ui_HeatControlsLoading, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_AccessoryOffBkg);
ui_object_set_themeable_style_property(ui_HeatControlsLoading, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR, _ui_theme_color_widgetBorder);
ui_object_set_themeable_style_property(ui_HeatControlsLoading, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA, _ui_theme_alpha_widgetBorder);
lv_obj_set_style_border_width(ui_HeatControlsLoading, 3, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_uiHeatStateLoading = lv_obj_create(ui_HeatControlsLoading);
lv_obj_remove_style_all(ui_uiHeatStateLoading);
lv_obj_set_width( ui_uiHeatStateLoading, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_uiHeatStateLoading, LV_SIZE_CONTENT);   /// 100
lv_obj_set_x( ui_uiHeatStateLoading, 60 );
lv_obj_set_y( ui_uiHeatStateLoading, 63 );
lv_obj_set_align( ui_uiHeatStateLoading, LV_ALIGN_CENTER );
lv_obj_set_flex_flow(ui_uiHeatStateLoading,LV_FLEX_FLOW_ROW);
lv_obj_set_flex_align(ui_uiHeatStateLoading, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
lv_obj_remove_flag( ui_uiHeatStateLoading, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE );    /// Flags
ui_object_set_themeable_style_property(ui_uiHeatStateLoading, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_AccessoryOffBkg);
ui_object_set_themeable_style_property(ui_uiHeatStateLoading, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_AccessoryOffBkg);
lv_obj_set_style_pad_left(ui_uiHeatStateLoading, 8, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_uiHeatStateLoading, 8, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_uiHeatStateLoading, 8, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_uiHeatStateLoading, 8, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_row(ui_uiHeatStateLoading, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_column(ui_uiHeatStateLoading, 8, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_color(ui_uiHeatStateLoading, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_uiHeatStateLoading, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_heatSwtichLabelLoading = lv_label_create(ui_uiHeatStateLoading);
lv_obj_set_width( ui_heatSwtichLabelLoading, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_heatSwtichLabelLoading, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_heatSwtichLabelLoading, LV_ALIGN_CENTER );
lv_label_set_text(ui_heatSwtichLabelLoading,"Heat");

ui_heatStateSwitchlLoading = lv_switch_create(ui_uiHeatStateLoading);
lv_obj_set_width( ui_heatStateSwitchlLoading, 50);
lv_obj_set_height( ui_heatStateSwitchlLoading, 25);
lv_obj_set_align( ui_heatStateSwitchlLoading, LV_ALIGN_CENTER );


ui_uiTempRangelLoading = lv_obj_create(ui_HeatControlsLoading);
lv_obj_remove_style_all(ui_uiTempRangelLoading);
lv_obj_set_width( ui_uiTempRangelLoading, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_uiTempRangelLoading, LV_SIZE_CONTENT);   /// 100
lv_obj_set_x( ui_uiTempRangelLoading, 60 );
lv_obj_set_y( ui_uiTempRangelLoading, 63 );
lv_obj_set_align( ui_uiTempRangelLoading, LV_ALIGN_CENTER );
lv_obj_set_flex_flow(ui_uiTempRangelLoading,LV_FLEX_FLOW_ROW);
lv_obj_set_flex_align(ui_uiTempRangelLoading, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
lv_obj_remove_flag( ui_uiTempRangelLoading, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE );    /// Flags
ui_object_set_themeable_style_property(ui_uiTempRangelLoading, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_AccessoryOffBkg);
ui_object_set_themeable_style_property(ui_uiTempRangelLoading, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_AccessoryOffBkg);
lv_obj_set_style_pad_left(ui_uiTempRangelLoading, 8, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_uiTempRangelLoading, 8, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_uiTempRangelLoading, 8, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_uiTempRangelLoading, 8, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_row(ui_uiTempRangelLoading, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_column(ui_uiTempRangelLoading, 8, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_color(ui_uiTempRangelLoading, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_uiTempRangelLoading, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_tempRangeHighLabellLoading = lv_label_create(ui_uiTempRangelLoading);
lv_obj_set_width( ui_tempRangeHighLabellLoading, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_tempRangeHighLabellLoading, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_tempRangeHighLabellLoading, LV_ALIGN_CENTER );
lv_label_set_text(ui_tempRangeHighLabellLoading,"Low");

ui_tempRangeSwitchlLoading = lv_switch_create(ui_uiTempRangelLoading);
lv_obj_set_width( ui_tempRangeSwitchlLoading, 50);
lv_obj_set_height( ui_tempRangeSwitchlLoading, 25);
lv_obj_set_align( ui_tempRangeSwitchlLoading, LV_ALIGN_CENTER );


ui_tempRangeLowLabellLoading = lv_label_create(ui_uiTempRangelLoading);
lv_obj_set_width( ui_tempRangeLowLabellLoading, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_tempRangeLowLabellLoading, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_tempRangeLowLabellLoading, LV_ALIGN_CENTER );
lv_label_set_text(ui_tempRangeLowLabellLoading,"High");

ui_uiPumpLoading = ui_uiPump_create(ui_Loading_Screen);
lv_obj_set_x( ui_uiPumpLoading, 60 );
lv_obj_set_y( ui_uiPumpLoading, 63 );



ui_uiLightLoading = ui_uiLight_create(ui_Loading_Screen);
lv_obj_set_x( ui_uiLightLoading, 60 );
lv_obj_set_y( ui_uiLightLoading, 63 );



ui_uiFilterLoading = ui_uiFilter_create(ui_Loading_Screen);
lv_obj_set_x( ui_uiFilterLoading, 60 );
lv_obj_set_y( ui_uiFilterLoading, 63 );



ui_LoadingContainer = lv_obj_create(ui_Loading_Screen);
lv_obj_remove_style_all(ui_LoadingContainer);
lv_obj_set_width( ui_LoadingContainer, 250);
lv_obj_set_height( ui_LoadingContainer, 75);
lv_obj_set_x( ui_LoadingContainer, -122 );
lv_obj_set_y( ui_LoadingContainer, 146 );
lv_obj_set_align( ui_LoadingContainer, LV_ALIGN_CENTER );
lv_obj_remove_flag( ui_LoadingContainer, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_LoadingContainer, 8, LV_PART_MAIN| LV_STATE_DEFAULT);
ui_object_set_themeable_style_property(ui_LoadingContainer, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_AccessoryOffBkg);
ui_object_set_themeable_style_property(ui_LoadingContainer, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_AccessoryOffBkg);
ui_object_set_themeable_style_property(ui_LoadingContainer, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR, _ui_theme_color_widgetBorder);
ui_object_set_themeable_style_property(ui_LoadingContainer, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA, _ui_theme_alpha_widgetBorder);
lv_obj_set_style_border_width(ui_LoadingContainer, 3, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_LoadingLabel = lv_label_create(ui_LoadingContainer);
lv_obj_set_width( ui_LoadingLabel, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_LoadingLabel, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_LoadingLabel, LV_ALIGN_CENTER );
lv_label_set_text(ui_LoadingLabel,"Loading please Wait");
lv_obj_set_style_text_font(ui_LoadingLabel, &ui_font_Montserrat_Bold_18, LV_PART_MAIN| LV_STATE_DEFAULT);

}
