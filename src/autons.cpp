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
int catashots = 0;

void sixBAll()
{
    chassis.setPose(30,-58,-90);
    rightWing.set_value(!rightWing.get_value());
    cataBysnc();
    pros :: delay(50);
    rightWing.set_value(!rightWing.get_value());
    pros::delay(350);
    setIntake(-127);
    chassis.moveTo(25,-58, -90, 2000, false,true,0,.06,50);
    pros ::delay(800);
    chassis.moveTo(12,-58,-90,2000,false);
    pros::delay(200);
    setIntake(0);
    chassis.follow(clone3_txt, 1400,10,true,false);
    pros::delay(1000);
    changeMode(leftWing);
    pros::delay(400);
    changeMode(leftWing);
    pros::delay(400);
    chassis.turnTo(61, -26, 1000, false, true);
    chassis.moveTo(64,-26,180,1200,false,false);
    pros::delay(1000);
    chassis.follow(swingy10_txt, 2500,12);
    chassis.turnTo(50,-5,1000);//make aysnc for time cut
    setIntake(127);
    pros::delay(500);
    setIntake(-127);
    //setDriveBrake(pros::E_MOTOR_BRAKE_HOLD);
    chassis.turnTo(9,4,1000);
    chassis.moveTo(9,4, -45, 1500,true);
    pros ::delay(600);
    changeMode(rightWing);
    pros::delay(600);
    changeMode(rightWing);
    pros::delay(800);
    chassis.turnTo(53,0,1000);
    setIntake(127);
    pros::delay(1000);
    setIntake(0);
    //chassis.moveTo(15,0,120,1500);
    //pros ::delay(2000);
    chassis.turnTo(5,-12,1000);
    setIntake(-127);
    chassis.moveTo(3,-12,190,2000);
    pros::delay(500);
    chassis.turnTo(53,5,1000);
    setIntake(127);
    pros ::delay(800);
    chassis.turnTo(53,5,1000,false,true);
    ledouble();
    chassis.follow(final_txt, 3000,12,false,false);

    

    //chassis.moveTo(6,-6,45,1000);
    /*chassis.turnTo(59,-40,1000,false,true);
    chassis.moveTo(59,-40,0,1000,false,false);
    chassis.turnTo(60, -10,1500,false, true);
    pros ::delay(300);
    chassis.moveTo(60,-100,2000,false, false);
    pros ::delay(3000); */
    /*
    chassis.follow(swingy2_txt, 2000, 10);
    pros::delay(500);
    chassis.turnTo(50,-10,800,true);
    pros::delay(400);
    setIntake(127);
    pros ::delay(600);
    chassis.turnTo(10,-5,1500);
    setIntake(-127);
    chassis.moveTo(10,-5,-35,1500,true);
    pros::delay(1000);
    changeMode(rightWing);
    pros::delay(1500);
    chassis.turnTo(20,5,1000);
    changeMode(rightWing);
    pros::delay(500);
    pros::delay(400);
    setIntake(127);
    pros::delay(5000);
    chassis.turnTo(4,-14,1000);
    setIntake(-127);
    pros::delay(500);
    chassis.moveTo(4,-14,190,1000);
*/


    /*
    chassis.follow(right5_txt,3000, 10, true, false);
    pros::delay(500);
    setIntake(0);
    // follow 2 then turn to 80 outake then turn to -50 and move to 
    pros::delay(700);
    leftWing.set_value(!leftWing.get_value());
    pros::delay(450);
    leftWing.set_value(!leftWing.get_value());
    pros::delay(3000);
    chassis.follow(swingaround_txt,2000, 11);
    chassis.turnTo(47,-5,1000,true);
    pros::delay(750);
    setIntake(127); 
    pros::delay(500);
    chassis.turnTo(7,-4,1000);
    setIntake(-127);
    chassis.moveTo(7,-4,-45,1500); 
    setIntake(0);
    rightWing.set_value(!rightWing.get_value());
    chassis.moveTo(15,-8,90,2000);
    setIntake(127);
    pros ::delay(1000);
    chassis.turnTo(9,-18,1000);
    setIntake(-127);
    chassis.moveTo(9,-18,-45,2000);//add delays for intake 
    chassis.moveTo(15,-8,90,2000,false,false);
    setIntake(127);
    chassis.turnTo(-15,-8,1000);
    setIntake(0);
    ledouble();
    chassis.moveTo(60,-8,-90,1000,false,false);
    //chassis.moveTo(4,-42,-135,1500,true,false);
    ledouble();
    pros::delay(1400);*/

}


void autonskills()
{
    chassis.setPose(-54,-51, 0);
    chassis.turnTo(-60, -29, 500,false,true);
    chassis.moveTo(-60,-24,0,2000);
    chassis.moveTo(-58,-43,-85,000,false,false);
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
  chassis.setPose(0,0,0);
  chassis.turnTo(5, 5, 5000);
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