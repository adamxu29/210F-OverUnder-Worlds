#include "main.h"

/**
 * A callback function for LLEMU's center button.
 *
 * When this callback is fired, it will toggle line 2 of the LCD text between
 * "I was pressed!" and nothing.
 */
void on_center_button()
{
	static bool pressed = false;
	pressed = !pressed;
	if (pressed)
	{
		pros::lcd::set_text(2, "I was pressed!");
	}
	else
	{
		pros::lcd::clear_line(2);
	}
}

/**
 * Runs initialization code. This occurs as soon as the program is started.
 *
 * All other competition modes are blocked by initialize; it is recommended
 * to keep execution time for this mode under a few seconds.
 */
void initialize()
{
	pros::lcd::initialize();
	pros::lcd::set_text(1, "Hello PROS User!");

	leftwing.set_value(false);
	rightwing.set_value(false);
	backwings.set_value(false);
	hang.set_value(false);
	
	imu1.tare();
	imu2.tare();

	pros::lcd::register_btn1_cb(on_center_button);
}

/**
 * Runs while the robot is in the disabled state of Field Management System or
 * the VEX Competition Switch, following either autonomous or opcontrol. When
 * the robot is enabled, this task will exit.
 */
void disabled() {}

/**
 * Runs after initialize(), and before autonomous when connected to the Field
 * Management System or the VEX Competition Switch. This is intended for
 * competition-specific initialization routines, such as an autonomous selector
 * on the LCD.
 *
 * This task will exit when the robot is enabled and autonomous or opcontrol
 * starts.
 */


void competition_initialize() {}

/**
 * Runs the user autonomous code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the autonomous
 * mode. Alternatively, this function may be called in initialize or opcontrol
 * for non-competition testing purposes.
 *
 * If the robot is disabled or communications is lost, the autonomous task
 * will be stopped. Re-enabling the robot will restart the task, not re-start it
 * from where it left off.
 */

void autonomous()
{
	left_drive.set_brake_modes(pros::E_MOTOR_BRAKE_BRAKE);
	right_drive.set_brake_modes(pros::E_MOTOR_BRAKE_BRAKE);
	// Sets motors to brake mode

	// six_ball();
	rush_far_winpoint();
	// close_winpoint();
	// close_disrupt();
	// test();
}
/**
 * Runs the operator control code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the operator
 * control mode.
 *
 * If no competition control is connected, this function will run immediately
 * following initialize().
 *
 * If the robot is disabled or communications is lost, the
 * operator control task will be stopped. Re-enabling the robot will restart the
 * task, not resume it from where it left off.
 */
void opcontrol()
{
	left_drive.set_brake_modes(pros::E_MOTOR_BRAKE_COAST);
	right_drive.set_brake_modes(pros::E_MOTOR_BRAKE_COAST);
	while (true)
	{
		// Two Stick Arcade
		// double left_power = controller.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y) + controller.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_X);
		// double right_power = controller.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y) - controller.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_X);
		
		// Tank
		double left_power = controller.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y);
		doublt right_power = controller.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_Y;)

		left_drive.move_voltage(left_power * (12000.0 / 127));
		right_drive.move_voltage(right_power * (12000.0 / 127));

		IntakeOP(1);
		pistons();
	}
}
