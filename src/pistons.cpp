#include "main.h"

bool lefttoggled = false;
bool righttoggled = false;
bool backtoggled = false;
bool hanging = false;
bool intakeup = false;

void pistons()
{
	if (controller.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_DOWN))
	{
		lefttoggled = !lefttoggled;
		leftwing.set_value(lefttoggled);
	}
	if (controller.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_B))
	{
		righttoggled = !righttoggled;
		rightwing.set_value(righttoggled);
	}
	if (controller.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_RIGHT))
	{
		if (lefttoggled == righttoggled)
		{
			lefttoggled = !lefttoggled;
			righttoggled = !righttoggled;
			leftwing.set_value(lefttoggled);
			rightwing.set_value(righttoggled);
		}
		else
		{
			if (lefttoggled && !righttoggled)
			{
				righttoggled = !righttoggled;
				rightwing.set_value(righttoggled);
			}
			else if (righttoggled && !lefttoggled)
			{
				lefttoggled = !lefttoggled;
				leftwing.set_value(lefttoggled);
			}
		}
	}
	if (controller.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_R2))
	{
		backtoggled = !backtoggled;

		backwings.set_value(backtoggled);
	}

	if (controller.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_Y))
	{
		hanging = !hanging;

		hang.set_value(hanging);
	}
}
