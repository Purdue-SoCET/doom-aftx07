#include "aftx07.h"
#include "doomkeys.h"
#include "format.h"

#include "doomgeneric.h"

void DG_Init() {
    panic("Unimplemented: DG_Init()");
}

void DG_DrawFrame() {
    panic("Unimplemented: DG_DrawFrame()");
}

void DG_SleepMs(uint32_t ms) {
    panic("Unimplemented: DG_SleepMs()");
}

uint32_t DG_GetTicksMs() {
    panic("Unimplemented: DG_GetTicksMs()");
}

int DG_GetKey(int *pressed, unsigned char *doomKey) {
    panic("Unimplemented: DG_GetKey()");
}

void DG_SetWindowTitle(const char *title) {
    panic("Unimplemented: DG_SetWindowTitle()");
}

// Needed by M_MakeDirectory
typedef unsigned int mode_t;
int mkdir(const char *pathname, mode_t mode) {
    panic("Unimplemented: mkdir()");
}

int main(int argc, char **argv) {
    doomgeneric_Create(0, argv);

    for (int i = 0;; i++) {
        doomgeneric_Tick();
    }

    return 0;
}
