#include "main.h"
#include <iostream>

using namespace std;

void six_ball()
{
	// release intake, intake ball and drive back
	intake.move_voltage(12000);
	drive_pid(4.7);
	turn_pid(-5);
	maxSpeed = 90;
	turn_maxSpeed = 95;
	drive_pid(-21.5);// 20
	maxSpeed = 95;
	intake.move_voltage(0);
	// descore and score
	backwings.set_value(true);
	curve_maxSpeed = 85;
	curve_pid(-70, 0.1, 0.08, true);
	backwings.set_value(false);
	drive_pid(-6);
	turn_pid(-75);
	drive_pid(-8);
	// turn around and score
	drive_pid(7);
	turn_pid(-255);
	intake.move_voltage(-12000);
	maxSpeed = 100;
	drive_pid(10);
	maxSpeed = 90;
	intake.move_voltage(0);
	// drive to mid and score
	drive_pid(-10);
	turn_pid(-340); // 310
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
	// turn to intake
	turn_pid(-306);
	intake.move_voltage(12000);
	drive_pid(7);
	// score last two tri-balls
	turn_pid(-175);
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
	maxSpeed = 127;
	turn_maxSpeed = 127;
	curve_maxSpeed = 127;
	// release intake
	intake.move_voltage(12000);
	// turn to middle
	turn_pid(-26.5);
	// hit tri-ball with back wings and intake
	drive_pid(-26.5);
	rightwing.set_value(true);
	turn_pid(120);
	rightwing.set_value(false);
	drive_pid(10);
	// drive back to corner and outtake
	turn_pid(155);
	intake.move_voltage(0);
	drive_pid(-37);
	turn_pid(225);
	intake.move_voltage(-12000);
	pros::delay(200);
	turn_pid(80);
	intake.move_voltage(12000);
	// intake ball
	drive_pid(17);
	turn_pid(85);
	drive_pid(-22);
	intake.move_voltage(0);
	// descore and score
	backwings.set_value(true);
	curve_pid(20, 0.1, 0.08, true);
	backwings.set_value(false);
	turn_pid(40);
	drive_pid(-8);
	turn_pid(15);
	drive_pid(-10);
	// turn around and score
	drive_pid(7);
	turn_pid(-162);
	intake.move_voltage(-12000);
	drive_pid(9);
	pros::delay(50);
	intake.move_voltage(0);
	// drive to middle and score
	drive_pid(-9);
	turn_pid(-252);
	intake.move_voltage(12000);
	drive_pid(29);
	turn_pid(-128);
	intake.move_voltage(-12000);
	leftwing.set_value(true);
	drive_pid(21);
	drive_pid(-10);

}
void close_winpoint(){
	maxSpeed = 50;
	turn_maxSpeed = 75;

	intake.move_voltage(-12000);
	backwings.set_value(true);
	pros::delay(250);
	turn_pid(-60);
	pros::delay(250);
	backwings.set_value(false);
	turn_pid(5);

	drive_pid(8);
	turn_pid(-40);

	drive_pid(7);
	leftwing.set_value(true);
	drive_pid(8);

}

void close_disrupt()
{	
	curve_maxSpeed = 60;
	intake.move_voltage(12000);
	turn_maxSpeed = 90;
	turn_pid(22.5);

	maxSpeed = 127;
	drive_pid(28);
	maxSpeed = 95;
	drive_pid(-1.5);

	turn_pid(92);
	leftwing.set_value(true);
	drive_pid(12);
	leftwing.set_value(false);

	maxSpeed = 65;
	turn_pid(43);
	drive_pid(-29);

	backwings.set_value(true);
	curve_maxSpeed = 80;
	curve_pid(-62, 0.1, 0.1, true);
	backwings.set_value(false);
	pros::delay(250);
	drive_pid(-5);
	turn_pid(-80);

	drive_pid(-8);
	turn_pid(-270);

	maxSpeed = 60;
	rightwing.set_value(true);
	intake.move_voltage(-12000);
	drive_pid(11);
	pros::delay(200);
	
	drive_pid(-25);
	turn_pid(-250);
	backwings.set_value(true);
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
	drive_pid(-31);
	drive_pid(12);
}