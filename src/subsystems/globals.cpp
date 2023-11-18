#include "main.h"
#include "pros/adi.h"
#include "pros/motors.h"
#include "lemlib/api.hpp"

pros ::Motor leftFront(leftFrontPort, pros ::E_MOTOR_GEARSET_06,true);
pros ::Motor leftMiddle(leftMiddlePort, pros ::E_MOTOR_GEARSET_06,true);
pros ::Motor leftBack(leftBackPort, pros ::E_MOTOR_GEARSET_06,true);

pros ::Motor rightFront(rightFrontPort, pros ::E_MOTOR_GEARSET_06);
pros ::Motor rightMiddle(rightMiddlePort, pros ::E_MOTOR_GEARSET_06);
pros ::Motor rightBack(rightBackPort, pros ::E_MOTOR_GEARSET_06);

pros ::Motor intake(intakePort, pros ::E_MOTOR_GEARSET_06);
pros ::Motor cata(cataPort, pros ::E_MOTOR_GEARSET_06, true);
pros ::Controller controller(pros ::E_CONTROLLER_MASTER);

pros ::ADIPort limitswitch(limitswitchPort, pros::E_ADI_DIGITAL_IN); // limit switch 
pros ::ADIPort leftWing(leftWingPort, pros::E_ADI_DIGITAL_OUT);
pros ::ADIPort rightWing(rightWingPort, pros::E_ADI_DIGITAL_OUT); // piston 
pros ::ADIPort backWing(backWingPort, pros::E_ADI_DIGITAL_OUT);
pros ::ADIPort arm(armPort, pros::E_ADI_DIGITAL_OUT);
pros ::ADIPort elevation(elevationPort, pros::E_ADI_DIGITAL_OUT);
pros ::Optical colorSensor(opticPort);
pros::Imu inertial(inertialPort);

pros::MotorGroup left_side_motors({leftFront,leftMiddle,leftBack});
pros::MotorGroup right_side_motors({rightFront,rightMiddle, rightBack});

lemlib::Drivetrain_t drivetrain = {
    &left_side_motors,
    &right_side_motors,
    13,
    4,
    300,
    8
    };

lemlib::OdomSensors_t sensors = {
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    &inertial};
lemlib::ChassisController_t lateralController = {
    15, // kP
    30, // kD
    1, // smallErrorRange
    100, // smallErrorTimeout
    3, // largeErrorRange
    500, // largeErßrorTimeout
    10 };// slew rate
lemlib::ChassisController_t angularController = {
    2,
    10,
    3,
    100,
    7,
    500,
    10};

lemlib::Chassis chassis(drivetrain, lateralController, angularController, sensors);
 

