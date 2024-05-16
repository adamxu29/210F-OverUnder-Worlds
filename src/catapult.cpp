#include "main.h"

bool shooting = false;

void CatapultSkills(double speed)
{
    if (controller.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_X)){
        ntake(0.2, 1);
		maxSpeed = 100;
		turn_pid(30);
		drive_pid(-34);
		// push colored balls in

		turn_pid(17);
		drive_pid(18);//15
		turn_pid(110);
		backwings.set_value(true);
		shoot(23, 0.9);
		backwings.set_value(false);
    }
    if (controller.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_L2))
    {
        shooting = !shooting;
        if(shooting){
            catapult.move_voltage(12000 * speed);
        }
        else{
            catapult.move_voltage(0);
        }
    }
}

void shoot(double time, double speed){
    catapult.move_voltage(12000 * speed);
    pros::delay(time * 1000);
    catapult.move_voltage(0);
}