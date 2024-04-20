#include "main.h"
// controller
pros::Controller controller(pros::E_CONTROLLER_MASTER);
// drivetrain motors
pros::Motor front_left_drive(19, false);
pros::Motor front_right_drive(12, true);
pros::Motor mid_left_drive(18, false);
pros::Motor mid_right_drive(14, true);
pros::Motor back_left_drive(10, false);
pros::Motor back_right_drive(2, true);
// drivetrain motor groups
pros::Motor_Group left_drive({front_left_drive, mid_left_drive, back_left_drive});
pros::Motor_Group right_drive({front_right_drive, mid_right_drive, back_right_drive});
// intake motors
pros::Motor left_intake(20, true);
pros::Motor right_intake(11, false);
// intake motor group
pros::Motor_Group intake({left_intake, right_intake});
// intertial sensors
pros::Imu imu1(7);
pros::Imu imu2(4);
// front wings pistons
pros::ADIDigitalOut leftwing('e');
pros::ADIDigitalOut rightwing('d');//d
//back wings pistings
pros::ADIDigitalOut backwings('f');
// hang pistons
pros::ADIDigitalOut hang('a');
