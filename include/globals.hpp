#include "main.h"
// controller
extern pros::Controller controller;
// drivetrain motor groups
extern pros::Motor_Group left_drive;
extern pros::Motor_Group right_drive;
// intake motors
extern pros::Motor left_intake;
extern pros::Motor right_intake;
// intake motor groups
extern pros::Motor_Group intake;
// inertial sensors
extern pros::Imu imu1;
extern pros::Imu imu2;
// front wing pistons
extern pros::ADIDigitalOut leftwing;
extern pros::ADIDigitalOut rightwing;
// back wings pistons
extern pros::ADIDigitalOut backwings;
// hang pistons
extern pros::ADIDigitalOut hang;
// piston toggle bools
extern bool lefttoggled;
extern bool righttoggled;
extern bool hanging;
extern bool shooting;
// OP control functions
extern void IntakeOP(double speed);
extern void CatapultOP(double speed);
extern void CatapultSkills(double speed);
extern void pistons();
//intake autonomous funciton
extern void ntake(double time, bool backwards);
// max speed variables
extern double maxSpeed;
extern double turn_maxSpeed;
extern double curve_maxSpeed;
// PID functions
extern void drive_pid(double target);
extern void turn_pid(double theta);
extern void curve_pid(double theta, double timeout, double curve_damper, bool backwards);
// auton selector
extern void six_ball();
extern void rush_far_winpoint();
extern void close_winpoint();
extern void skills();
extern void test();