
#include "ui.h"

void ui_init(void)
{

  lv_obj_t *screen = lv_obj_create(lv_screen_active());
  lv_obj_set_style_bg_color(screen, lv_palette_lighten(LV_PALETTE_BLUE, 4), LV_PART_MAIN);
  lv_obj_set_size(screen, SDL_HOR_RES, SDL_VER_RES);
  lv_obj_remove_flag(screen, LV_OBJ_FLAG_SCROLLABLE); /// Flags
  lv_obj_set_style_pad_left(screen, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_pad_right(screen, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_pad_top(screen, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_pad_bottom(screen, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_align(screen, LV_ALIGN_CENTER);

  // lv_example_scale_4 - arc

  lv_obj_t *scale1 = example_scale_4(screen);
  // lv_obj_set_style_bg_color(scale1, lv_palette_lighten(LV_PALETTE_RED, 5), 0);
  lv_obj_set_align(scale1, LV_ALIGN_TOP_LEFT);
  lv_obj_t *scale1line = lv_line_create(scale1);
  lv_obj_set_style_line_width(scale1line, 10, 0);
  lv_obj_set_style_line_rounded(scale1line, true, 0);
  lv_obj_set_style_line_color(scale1line, lv_palette_main(LV_PALETTE_RED), 0);
  lv_scale_set_line_needle_value(scale1, scale1line, 60, 65);

  // lv_scale_arc_180 - same as lv_example_scale_4 but with only 180 degrees and range from 20 to 40

  lv_obj_t *scale2 = scale_arc_180(screen);
  lv_obj_set_align(scale2, LV_ALIGN_TOP_RIGHT);
  lv_obj_t *scale2line = lv_line_create(scale2);
  lv_obj_set_style_line_width(scale2line, 10, 0);
  lv_obj_set_style_line_rounded(scale2line, true, 0);
  lv_obj_set_style_line_color(scale2line, lv_palette_main(LV_PALETTE_RED), 0);
  lv_scale_set_line_needle_value(scale2, scale2line, 60, 27.5);

  // scale_arc_180_small - same as scale_arc_180 but with size 100x100

  lv_obj_t *scale3 = scale_arc_180_small(screen);
  lv_obj_set_style_bg_opa(scale3, LV_OPA_60, 0);
  lv_obj_set_style_bg_color(scale3, lv_color_black(), 0);
  lv_obj_set_align(scale3, LV_ALIGN_BOTTOM_LEFT);
  lv_obj_t *scale3line = lv_line_create(scale3);
  lv_obj_set_style_line_width(scale3line, 10, 0);
  lv_obj_set_style_line_rounded(scale3line, true, 0);
  lv_obj_set_style_line_color(scale3line, lv_palette_main(LV_PALETTE_RED), 0);
  lv_scale_set_line_needle_value(scale3, scale3line, 60, 27.5);

  // scale_arc_180_container - same as scale_arc_180 but with size 100x100

  lv_obj_t *scale4container = lv_obj_create(screen);
  lv_obj_remove_style_all(scale4container);
  lv_obj_set_width(scale4container, 100);
  lv_obj_set_height(scale4container, 50);
  lv_obj_set_align(scale4container, LV_ALIGN_BOTTOM_RIGHT);
  lv_obj_remove_flag(scale4container, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE); /// Flags

  lv_obj_set_style_bg_opa(scale4container, LV_OPA_60, 0);
  lv_obj_set_style_bg_color(scale4container, lv_color_black(), 0);

  lv_obj_t *scale4 = scale_arc_180_container(scale4container);
  // lv_obj_set_align(scale4, LV_ALIGN_CENTER);
  //  lv_obj_set_x(scale4, 10);
  //lv_obj_set_y(scale4, 10);
  lv_obj_t *scale4line = lv_line_create(scale4);
  lv_obj_set_style_line_width(scale4line, 10, 0);
  lv_obj_set_style_line_rounded(scale4line, true, 0);
  lv_obj_set_style_line_color(scale4line, lv_palette_main(LV_PALETTE_RED), 0);
  lv_scale_set_line_needle_value(scale4, scale4line, 60, 27.5);
}
