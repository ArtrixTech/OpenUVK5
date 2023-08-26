/* Copyright 2023 Dual Tachyon
 * https://github.com/DualTachyon
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 *     Unless required by applicable law or agreed to in writing, software
 *     distributed under the License is distributed on an "AS IS" BASIS,
 *     WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *     See the License for the specific language governing permissions and
 *     limitations under the License.
 */

#ifndef AIRCOPY_H
#define AIRCOPY_H

#include <stdint.h>

enum AIRCOPY_State_t {
	AIRCOPY_READY		= 0U,
	AIRCOPY_TRANSFER	= 1U,
	AIRCOPY_COMPLETE	= 2U,
};

typedef enum AIRCOPY_State_t AIRCOPY_State_t;

extern AIRCOPY_State_t gAircopyState;
extern uint16_t gAirCopyBlockNumber;
extern uint16_t gErrorsDuringAirCopy;
extern uint8_t gAirCopyIsSendMode;

extern uint16_t g_FSK_Buffer[36];

void AIRCOPY_SendMessage(void);

#endif

