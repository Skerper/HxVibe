#ifndef _XBOX_CONTROLLER_H_
#define _XBOX_CONTROLLER_H_

#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <XInput.h>

#pragma comment(lib, "XInput.lib")

void vibrate(int left, int right, int index);

#endif