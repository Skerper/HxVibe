#include "HxVibe.h"

/**
 * Attempts to vibrate the controller at the given index. Doesn't care if it works or not.
 * @author Elliott Smith [Skerper]
 */
void vibrate(int left, int right, int index)
{
	XINPUT_VIBRATION Vibration;
	ZeroMemory(&Vibration, sizeof(XINPUT_VIBRATION));
	Vibration.wLeftMotorSpeed = left;
	Vibration.wRightMotorSpeed = right;
	XInputSetState(index, &Vibration);
}
