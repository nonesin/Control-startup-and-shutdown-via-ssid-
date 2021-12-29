#ifndef __STATICCONFIG_H__
#define __STATICCONFIG_H__
#include "def.h"
typedef struct
{
    RBool isSaved;
    char SSID[33];
} __attribute__((packed)) SCFG_wifiUse;

void scfg_init(void);

void scfg_write(SCFG_wifiUse *wifi);

void scfg_read(SCFG_wifiUse *wifi);
#endif