#include "lemlib/chassis/chassis.hpp"
#include "main.h"

void tankDrive()
{
 int l_stick = controller.get_analog(ANALOG_LEFT_Y);
 int r_stick = controller.get_analog(ANALOG_RIGHT_Y);
 chassis.tank(l_stick, r_stick,0);
}

void setDriveBrake(pros::motor_brake_mode_e_t brake_type)
{
    left_side_motors.set_brake_modes(brake_type);
    right_side_motors.set_brake_modes(brake_type);
}