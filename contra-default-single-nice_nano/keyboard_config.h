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
#ifndef KEYBOARD_CONFIG_H
#define KEYBOARD_CONFIG_H
#include "hardware_config.h"


#define KEYBOARD_SIDE SINGLE
// CHANGE THIS FOR THE KEYBOARD TO MATCH WHAT IS BEING FLASHED. OPTIONS: LEFT  RIGHT  SINGLE

#define DEVICE_NAME_R                         "Litl_R"                          /**< Name of device. Will be included in the advertising data. */
#define DEVICE_NAME_L                        "Litl_L"                          /**< Name of device. Will be included in the advertising data. */
#define DEVICE_NAME_M                         "Litl"                          /**< Name of device. Will be included in the advertising data. */

#define DEVICE_MODEL                        "Litl_V2"                          /**< Name of device. Will be included in the advertising data. */

#define MANUFACTURER_NAME                   "https://sthlmkb.com/"                      /**< Manufacturer. Will be passed to Device Information Service. */


#define KEYMAP( \
  K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, \
  K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, \
  K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, \
  K30, K31, K32,      K34, K35, K36, K37, K38, K39, K3A, K3B  \
) { \
{ K00, K02, K04, K06, K08, K0A, }, \
{ K01, K03, K05, K07, K09, K0B, }, \
{ K10, K12, K14, K16, K18, K1A, }, \
{ K11, K13, K15, K17, K19, K1B, }, \
{ K20, K22, K24, K26, K28, K2A, }, \
{ K21, K23, K25, K27, K29, K2B, }, \
{ K30, K32, K34, K36, K38, K3A, }, \
{ K31,  K35, K37, K39, K3B, }  \
}


#endif /* KEYBOARD_CONFIG_H */
