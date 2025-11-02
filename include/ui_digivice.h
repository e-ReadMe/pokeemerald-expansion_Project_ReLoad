#ifndef GUARD_UI_DIGIVICE_H
#define GUARD_UI_DIGIVICE_H

#include "main.h"

void Task_OpenDigiviceFromStartMenu(u8 taskId);
void Digivice_Init(MainCallback callback);

extern const struct SpeciesInfo gSpeciesInfo[];


#endif // GUARD_UI_DIGIVICE_H
