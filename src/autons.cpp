#include "main.h"
#include <iostream>

using namespace std;

void six_ball()
{

	ntake(0.1, true);
	pros::delay(50);

	intake.move_voltage(12000);
	drive_pid(4.7);
	maxSpeed = 90;
	turn_maxSpeed = 95;
	drive_pid(-21.5);
	maxSpeed = 95;
	intake.move_voltage(0);

	backwings.set_value(true);
	curve_maxSpeed = 85;
	curve_pid(-65, 0.1, 0.06, true);
	backwings.set_value(false);
	drive_pid(-6);
	turn_pid(-75);
	drive_pid(-8);

	drive_pid(7);
	intake.move_voltage(-12000);
	turn_pid(-255);
	maxSpeed = 100;
	drive_pid(8);
	maxSpeed = 90;
	intake.move_voltage(0);

	drive_pid(-7);
	turn_pid(-340);
	intake.move_voltage(12000);
	drive_pid(29);
	turn_pid(-210);
	drive_pid(16);
	intake.move_voltage(-12000);
	turn_pid(-180);
	pros::delay(100);
	turn_pid(-200);
	drive_pid(-10);
	pros::delay(100);

	turn_pid(-310);
	intake.move_voltage(12000);
	drive_pid(7);

	turn_pid(-170);
	intake.move_voltage(-12000);
	leftwing.set_value(true);
	rightwing.set_value(true);
	pros::delay(50);
	drive_pid(20);
	drive_pid(-10);
	leftwing.set_value(false);
	rightwing.set_value(false);
}

void rush_far_winpoint()
{
	maxSpeed = 100;
	turn_maxSpeed = 95;
	curve_maxSpeed = 90;

	ntake(0.1, true);

	rightwing.set_value(true);
	pros::delay(100);
	rightwing.set_value(false);

	turn_pid(-23.5);
	intake.move_voltage(8500);

	left_drive.set_brake_modes(pros::E_MOTOR_BRAKE_COAST);
	right_drive.set_brake_modes(pros::E_MOTOR_BRAKE_COAST);
	drive_pid(27.4);
	left_drive.set_brake_modes(pros::E_MOTOR_BRAKE_BRAKE);
	right_drive.set_brake_modes(pros::E_MOTOR_BRAKE_BRAKE);
	drive_pid(-31.5);
	maxSpeed = 90;
	intake.move_voltage(0);

	intake.move_voltage(-12000);
	turn_pid(42);
	pros::delay(50);
	turn_pid(-91);
	intake.move_voltage(12000);
	drive_pid(20);
	turn_pid(-92);
	drive_pid(-22);
	intake.move_voltage(0);

	backwings.set_value(true);
	curve_pid(-160, 0.1, 0.07, true);
	backwings.set_value(false);
	pros::delay(250);
	turn_pid(-140);
	drive_pid(-6);
	turn_pid(-165);
	drive_pid(-10);

	drive_pid(7);
	turn_pid(-342);
	intake.move_voltage(-12000);
	maxSpeed = 127;
	drive_pid(11);
	pros::delay(50);
	maxSpeed = 100;
	intake.move_voltage(0);

	drive_pid(-7);
	turn_pid(-429);
	intake.move_voltage(12000);
	drive_pid(29);
	turn_pid(-310);
	drive_pid(14);
	turn_pid(-270);
	intake.move_voltage(-12000);
	maxSpeed = 127;
	drive_pid(6);
	turn_pid(-280);
	drive_pid(-10);
	pros::delay(100);
}
void close_winpoint()
{
	ntake(0.1, true);

	turn_maxSpeed = 90;
	turn_pid(22.5);
	intake.move_voltage(12000);

	maxSpeed = 127;
	left_drive.set_brake_modes(pros::E_MOTOR_BRAKE_COAST);
	right_drive.set_brake_modes(pros::E_MOTOR_BRAKE_COAST);
	drive_pid(27);
	maxSpeed = 95; // optional
	left_drive.set_brake_modes(pros::E_MOTOR_BRAKE_BRAKE);
	right_drive.set_brake_modes(pros::E_MOTOR_BRAKE_BRAKE);
	drive_pid(-2);

	turn_pid(92);
	intake.move_voltage(0);
	leftwing.set_value(true);
	drive_pid(12);
	leftwing.set_value(false);

	maxSpeed = 65;
	turn_pid(45);
	drive_pid(-27);

	backwings.set_value(true);
	curve_maxSpeed = 80;
	curve_pid(-58, 0.1, 0.1, true);
	backwings.set_value(false);
	pros::delay(250);
	drive_pid(-5);
	turn_pid(-80);

	drive_pid(-10);
	turn_pid(-270);

	maxSpeed = 60;
	rightwing.set_value(true);
	intake.move_voltage(-12000);
	drive_pid(12);
	pros::delay(200);

	// ELIMS ONLY: Set up in corner for bowling

	// drive_pid(-25);
	// turn_pid(-250);
	// backwings.set_value(true);
}

void skills()
{
	// ntake(0.2, 1);
	// maxSpeed = 100;
	// turn_pid(30);
	// drive_pid(-34);
	// push colored balls in

	// turn_pid(17);
	// drive_pid(18);//15
	// turn_pid(110);
	// backwings.set_value(true);
	// pros::delay(1000);
	// shoot(23, 0.9);
	// backwings.set_value(false);
	// match load

	// maxSpeed = 90;
	// turn_pid(-110);
	// drive_pid(-32);
	// turn_pid(-90);
	// drive_pid(-65);
	// turn_pid(-50);
	// drive_pid(-20);
	// turn_pid(-8);
	// maxSpeed = 100;
	// drive_pid(-17);
	// drive_pid(12);
	// drive_pid(-17);
	// shove from side

	// maxSpeed = 90;
	// drive_pid(11);
	// turn_pid(-100);
	// drive_pid(38);
	// turn_pid(-45);
	// backwings.set_value(true);
	// drive_pid(-36);
	// turn_pid(-100);
	// drive_pid(5);
	// backwings.set_value(false);
	// drive_pid(23);
	// turn_pid(-180);
	// drive_pid(30);
	// turn_pid(-110);
	// backwings.set_value(true);
	// drive_pid(-35);
	// drive_pid(10);
	// backwings.set_value(false);
	// drive_pid(20);
	// turn_pid(0);
	// drive_pid(36);
	// turn_pid(-75);
	// backwings.set_value(true);
	// drive_pid(-36);
	// drive_pid(10);
	// backwings.set_value(false);
	// front shovet twice

	// last shove from right side

	// turn_pid(-178);
	// drive_pid(65);
	// turn_pid(90);
	// rightwing.set_value(true);
	// drive_pid(8);
	// turn_pid(45);
	// drive_pid(18);
	// turn_pid(15);
	// maxSpeed = 100;
	// intake.move_voltage(-12000);
	// drive_pid(14);
	// drive_pid(-7);
	// drive_pid(9);
	// rightwing.set_value(false);
	// intake.move_voltage(0);
	// turn_pid(-120);
	// drive_pid(37);
	// turn_pid(-90);

	// maxSpeed = 90;
	// turn_pid(-90);
	// hang.set_value(true);
	// pros::delay(1000);
	// drive_pid(34);
	// pros::delay(1000);
	// hang.set_value(false);
	// go hang
}

void test()
{
	imu1.set_rotation(0);
	imu2.set_rotation(0);
	// drive_pid(-31);
	// drive_pid(12);

	turn_pid(90);
}