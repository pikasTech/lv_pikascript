/* ******************************** */
/* Warning! Don't modify this file! */
/* ******************************** */
#ifndef __pika_lvgl_lv_obj__H
#define __pika_lvgl_lv_obj__H
#include <stdio.h>
#include <stdlib.h>
#include "PikaObj.h"

PikaObj *New_pika_lvgl_lv_obj(Args *args);

void pika_lvgl_lv_obj_center(PikaObj *self);
void pika_lvgl_lv_obj_set_size(PikaObj *self, int size_x, int size_y);

#endif
