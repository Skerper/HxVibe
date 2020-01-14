#include "HxVibe.h"


void vibrate(int left, int right, int index)
{
	XINPUT_VIBRATION Vibration;
	ZeroMemory(&Vibration, sizeof(XINPUT_VIBRATION));
	Vibration.wLeftMotorSpeed = left;
	Vibration.wRightMotorSpeed = right;
	XInputSetState(index, &Vibration);
}
