#include "main.h"

void IntakeOP(double speed)
{
	if (controller.get_digital(pros::E_CONTROLLER_DIGITAL_L1))
	{
		intake.move_voltage(12000 * speed);
	}
	else if (controller.get_digital(pros::E_CONTROLLER_DIGITAL_R1))
	{
		intake.move_velocity(-12000 * speed);
	}
	else
	{
		intake.move_voltage(0);
	}
}

void ntake(double time, bool backwards){
	if(!backwards){
		intake.move_voltage(12000);
		pros::delay(1000 * time);
		intake.move_voltage(0);
	}
	if(backwards){
		intake.move_voltage(-12000);
		pros::delay(1000 * time);
		intake.move_voltage(0);
	}
}