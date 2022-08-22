/* ******************************** */
/* Warning! Don't modify this file! */
/* ******************************** */
#ifndef __PikaStdDevice_CAN__H
#define __PikaStdDevice_CAN__H
#include <stdio.h>
#include <stdlib.h>
#include "PikaObj.h"

PikaObj *New_PikaStdDevice_CAN(Args *args);

void PikaStdDevice_CAN___init__(PikaObj *self);
void PikaStdDevice_CAN_addFilter(PikaObj *self, int id, int ide, int rtr, int mode, int mask, int hdr);
void PikaStdDevice_CAN_disable(PikaObj *self);
void PikaStdDevice_CAN_enable(PikaObj *self);
void PikaStdDevice_CAN_platformDisable(PikaObj *self);
void PikaStdDevice_CAN_platformEnable(PikaObj *self);
void PikaStdDevice_CAN_platformRead(PikaObj *self);
void PikaStdDevice_CAN_platformReadBytes(PikaObj *self);
void PikaStdDevice_CAN_platformWrite(PikaObj *self);
void PikaStdDevice_CAN_platformWriteBytes(PikaObj *self);
char* PikaStdDevice_CAN_read(PikaObj *self, int length);
Arg* PikaStdDevice_CAN_readBytes(PikaObj *self, int length);
void PikaStdDevice_CAN_setBaudRate(PikaObj *self, int baudRate);
void PikaStdDevice_CAN_setId(PikaObj *self, int id);
void PikaStdDevice_CAN_setMode(PikaObj *self, char* mode);
void PikaStdDevice_CAN_setName(PikaObj *self, char* name);
void PikaStdDevice_CAN_write(PikaObj *self, char* data);
void PikaStdDevice_CAN_writeBytes(PikaObj *self, uint8_t* data, int length);

#endif
