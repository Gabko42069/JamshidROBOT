//#pragma once 
#include "lemlib/asset.hpp"
#include "autons.hpp"
#include "main.h"
#include "pros/motors.h"

ASSET(right8_txt); // drives from under the bar to ram into the goal
ASSET(swingy10_txt);
ASSET(skills0_txt);
ASSET(clone3_txt);
ASSET(swing1_txt);
ASSET(clone5_txt);
ASSET(final_txt);
ASSET(final5ball_txt);
int catashots = 0;

void sixBAll()
{
    chassis.setPose(30,-58,-90);
    rightWing.set_value(!rightWing.get_value());
    cataBysnc();
    //pros :: delay(25);
    rightWing.set_value(!rightWing.get_value());
    pros::delay(350);
    setIntake(-127);
    chassis.moveTo(25,-58, -90, 2000, false,true,0,.06,50);
    pros ::delay(600);
    chassis.moveTo(12,-58,-90,2000,false);
    pros::delay(200);
    setIntake(0);
    chassis.follow(clone3_txt, 1400,11,true,false);
    pros::delay(1000);
    changeMode(leftWing);
    pros::delay(400);
    changeMode(leftWing);
    //pros::delay(200);
    chassis.turnTo(61, -26, 1000, false, true);
    chassis.moveTo(64,-26,180,1200,false,false);
    pros::delay(200);
    chassis.follow(swingy10_txt, 2500,12);
    chassis.turnTo(50,-5,1000);//make aysnc for time cut
    setIntake(127);
    pros::delay(400);
    setIntake(-127);
    //setDriveBrake(pros::E_MOTOR_BRAKE_HOLD);
    chassis.turnTo(9,4,1000);
    chassis.moveTo(9,4, -45, 1300,true);
    pros ::delay(600);
    changeMode(rightWing);
    pros::delay(600);
    changeMode(rightWing);
    pros::delay(100);
    chassis.turnTo(53,0,1000);
    setIntake(127);
    pros::delay(500);
    setIntake(0);
    //chassis.moveTo(15,0,120,1500);
    //pros ::delay(2000);
    chassis.turnTo(3,-14,1000);
    setIntake(-127);
    chassis.moveTo(3,-14,190,1500);
    //pros::delay(200);
    chassis.turnTo(53,5,1000);
    setIntake(127);
    pros ::delay(500);
    chassis.turnTo(53,5,1000,false,true);
    ledouble();
    chassis.follow(final_txt, 3000,13,false,false);
}


void autonskills()
{
    chassis.setPose(-54,-51, 180);
    chassis.moveTo(-60,-32,180,2000);
    while (true) {
    if (colorSensor.get_proximity() >= 70) {
      cataAysnc();
      catashots++;
    }
    pros ::delay(100);
    if (catashots >= 4) {
      break;
    }
    }
    chassis.follow(skills0_txt,4000,10,false,false);
}


void tester()
{
  setDriveBrake(pros::E_MOTOR_BRAKE_HOLD);
  chassis.setPose(0,0,0);
  chassis.turnTo(5, 0, 5000);
}


void fiveBall()
{
   chassis.setPose(30,-58,-90);
    rightWing.set_value(!rightWing.get_value());
    pros::delay(150);
    rightWing.set_value(!rightWing.get_value());
    pros::delay(350);
    setIntake(-127);
    chassis.moveTo(25,-58, -90, 2000, false,true,0,.06,50);
    pros ::delay(600);
    chassis.moveTo(12,-58,-90,2000,false);
    pros::delay(200);
    setIntake(0);
    chassis.follow(clone3_txt, 1400,11,true,false);
    pros::delay(1000);
    changeMode(leftWing);
    pros::delay(400);
    changeMode(leftWing);
    //pros::delay(200);
    chassis.turnTo(61, -26, 1000, false, true);
    chassis.moveTo(64,-26,180,1200,false,false);
    pros::delay(200);
    chassis.follow(swingy10_txt, 5000,12);
    chassis.turnTo(50,-5,1000);//make aysnc for time cut
    setIntake(127);
    pros::delay(400);
    setIntake(-127);
    chassis.setPose(23,-23,60);
    chassis.turnTo(8,-3,1500);
    chassis.moveTo(8,-3,-35,2000);
    /*
    chassis.turnTo(15,3,1500);
    //pros::delay(200);
    chassis.moveTo(15,3, -45, 2000,true);
    pros ::delay(600);
    changeMode(rightWing);
    pros::delay(600);
    changeMode(rightWing);
    pros::delay(300);
    chassis.turnTo(53,0,1000);
    setIntake(127);
    pros::delay(500);
    setIntake(0);
    chassis.turnTo(53, 0, 2000,false,true);
    chassis.follow(final5ball_txt, 2000, 12, true, false);
    pros::delay(300);
    ledouble();
    pros::delay(1000);
    */
}
/*

chassis.setPose(30,-58,-90);
    rightWing.set_value(!rightWing.get_value());
    cataBysnc();
    pros :: delay(100);
    rightWing.set_value(!rightWing.get_value());
    pros::delay(400);
    setIntake(-127);
    chassis.moveTo(20,-58, -90, 2000, false,true,0,.06,70);
    pros ::delay(400);
    chassis.moveTo(14,-58,-90,2000,false);
    pros::delay(200);
    setIntake(0);
    chassis.follow(right8_txt, 1500,10,true,false);
    pros::delay(1000);
    changeMode(leftWing);
    pros::delay(500);
    chassis.turnTo(75, -15,1500,false, true);
    changeMode(leftWing);
    pros ::delay(500);
    chassis.moveTo(75,-15,0,2000,false, false);
    chassis.follow(swingy0_txt, 2000, 10);
    pros::delay(1000);
    chassis.turnTo(50,-10,500,true);
    pros::delay(300);
    setIntake(127);
    pros ::delay(500);
    chassis.turnTo(10,-5,1000);
    setIntake(-127);
    chassis.moveTo(10,5,-35,2000);
    pros::delay(300);
    setIntake(0);

    */