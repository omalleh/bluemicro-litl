/*
Copyright 2018 <Pierre Constantineau>

3-Clause BSD License

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR 
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/
#include <stdint.h>
#include "hid_keycodes.h"
#include "keyboard_config.h"
#include "advanced_keycodes.h"
#include "Key.h"
#include "KeyScanner.h"
#include <array>
#ifndef KEYMAP_H
#define KEYMAP_H

#define _QWERTY 0
#define _L1  1
#define _L2  2


void setupKeymap();
void encoder_callback(int step);
extern std::array<std::array<Key, MATRIX_COLS>, MATRIX_ROWS> matrix;
extern DynamicState keyboardstate;

#include "BlueMicro_display.h"

#ifdef BLUEMICRO_CONFIGURED_DISPLAY
extern BlueMicro_Display OLED;        // needed to assign the update display callback
extern DISPLAY_U8G2_CONSTRUCTOR u8g2; // needed to call the display functions
#endif

void updateDisplay(PersistentState* cfg, DynamicState* stat)
{
    #ifdef BLUEMICRO_CONFIGURED_DISPLAY
    u8g2.setFontMode(1);    // Transparent
    u8g2.setFontDirection(0);
    battery(22,19,stat->vbat_per);
    printline(0,28,stat->peer_name_prph);

    char buffer [50];
    u8g2.setFont(u8g2_font_helvB12_tf); // choose a suitable font
    switch(stat->layer)
    {
        case _QWERTY:     u8g2.drawStr(0,128,""); break;
        case _L1:      u8g2.drawStr(0,128,"L");break;
        case _L2:     u8g2.drawStr(0,128,"R");break;   
    }
    #endif
}

#endif /* KEYMAP_H */


