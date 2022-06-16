/* ******************************** */
/* Warning! Don't modify this file! */
/* ******************************** */
#include "pika_lvgl.h"
#include "TinyObj.h"
#include <stdio.h>
#include <stdlib.h>
#include "BaseObj.h"

void pika_lvgl___init__Method(PikaObj *self, Args *args){
    pika_lvgl___init__(self);
}

void pika_lvgl_arcMethod(PikaObj *self, Args *args){
    Arg* res = pika_lvgl_arc(self);
    method_returnArg(args, res);
}

void pika_lvgl_barMethod(PikaObj *self, Args *args){
    Arg* res = pika_lvgl_bar(self);
    method_returnArg(args, res);
}

void pika_lvgl_btnMethod(PikaObj *self, Args *args){
    Arg* res = pika_lvgl_btn(self);
    method_returnArg(args, res);
}

void pika_lvgl_checkboxMethod(PikaObj *self, Args *args){
    Arg* res = pika_lvgl_checkbox(self);
    method_returnArg(args, res);
}

void pika_lvgl_dropdownMethod(PikaObj *self, Args *args){
    Arg* res = pika_lvgl_dropdown(self);
    method_returnArg(args, res);
}

void pika_lvgl_labelMethod(PikaObj *self, Args *args){
    Arg* res = pika_lvgl_label(self);
    method_returnArg(args, res);
}

void pika_lvgl_lv_eventMethod(PikaObj *self, Args *args){
    Arg* res = pika_lvgl_lv_event(self);
    method_returnArg(args, res);
}

void pika_lvgl_lv_objMethod(PikaObj *self, Args *args){
    Arg* res = pika_lvgl_lv_obj(self);
    method_returnArg(args, res);
}

void pika_lvgl_objMethod(PikaObj *self, Args *args){
    PikaObj* parent = args_getPtr(args, "parent");
    PikaObj* res = pika_lvgl_obj(self, parent);
    method_returnObj(args, res);
}

void pika_lvgl_palettle_lightenMethod(PikaObj *self, Args *args){
    int color = args_getInt(args, "color");
    int res = pika_lvgl_palettle_lighten(self, color);
    method_returnInt(args, res);
}

void pika_lvgl_rollerMethod(PikaObj *self, Args *args){
    Arg* res = pika_lvgl_roller(self);
    method_returnArg(args, res);
}

void pika_lvgl_scr_actMethod(PikaObj *self, Args *args){
    PikaObj* res = pika_lvgl_scr_act(self);
    method_returnObj(args, res);
}

void pika_lvgl_sliderMethod(PikaObj *self, Args *args){
    Arg* res = pika_lvgl_slider(self);
    method_returnArg(args, res);
}

void pika_lvgl_style_tMethod(PikaObj *self, Args *args){
    Arg* res = pika_lvgl_style_t(self);
    method_returnArg(args, res);
}

void pika_lvgl_switchMethod(PikaObj *self, Args *args){
    Arg* res = pika_lvgl_switch(self);
    method_returnArg(args, res);
}

void pika_lvgl_tableMethod(PikaObj *self, Args *args){
    Arg* res = pika_lvgl_table(self);
    method_returnArg(args, res);
}

void pika_lvgl_textareaMethod(PikaObj *self, Args *args){
    Arg* res = pika_lvgl_textarea(self);
    method_returnArg(args, res);
}

PikaObj *New_pika_lvgl(Args *args){
    PikaObj *self = New_TinyObj(args);
    class_defineMethod(self, "__init__()", pika_lvgl___init__Method);
    class_defineConstructor(self, "arc()->any", pika_lvgl_arcMethod);
    class_defineConstructor(self, "bar()->any", pika_lvgl_barMethod);
    class_defineConstructor(self, "btn()->any", pika_lvgl_btnMethod);
    class_defineConstructor(self, "checkbox()->any", pika_lvgl_checkboxMethod);
    class_defineConstructor(self, "dropdown()->any", pika_lvgl_dropdownMethod);
    class_defineConstructor(self, "label()->any", pika_lvgl_labelMethod);
    class_defineConstructor(self, "lv_event()->any", pika_lvgl_lv_eventMethod);
    class_defineConstructor(self, "lv_obj()->any", pika_lvgl_lv_objMethod);
    class_defineMethod(self, "obj(parent:lv_obj)->lv_obj", pika_lvgl_objMethod);
    class_defineMethod(self, "palettle_lighten(color:int)->int", pika_lvgl_palettle_lightenMethod);
    class_defineConstructor(self, "roller()->any", pika_lvgl_rollerMethod);
    class_defineMethod(self, "scr_act()->lv_obj", pika_lvgl_scr_actMethod);
    class_defineConstructor(self, "slider()->any", pika_lvgl_sliderMethod);
    class_defineConstructor(self, "style_t()->any", pika_lvgl_style_tMethod);
    class_defineConstructor(self, "switch()->any", pika_lvgl_switchMethod);
    class_defineConstructor(self, "table()->any", pika_lvgl_tableMethod);
    class_defineConstructor(self, "textarea()->any", pika_lvgl_textareaMethod);
    return self;
}

