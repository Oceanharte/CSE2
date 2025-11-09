// Released under the MIT licence.
// See LICENCE.txt for details.

#pragma once

#ifdef __PS2__
#include <SDL2/SDL.h>
#else
#include "SDL.h"
#endif

#if SDL_VERSION_ATLEAST(2, 0, 0)
extern SDL_Window *window;
#endif

void ControllerBackend_JoystickConnect(Sint32 joystick_id);
void ControllerBackend_JoystickDisconnect(Sint32 joystick_id);
