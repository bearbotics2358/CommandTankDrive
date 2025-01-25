// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.
#include <frc/smartdashboard/SmartDashboard.h>
#include "RobotContainer.h"
#include <frc/XboxController.h>
#include <frc2/command/RunCommand.h>

RobotContainer::RobotContainer() {
  // Initialize all of your commands and subsystems here

  // Configure the button bindings
  ConfigureBindings();
}
/* bool RobotContainer::CheckRightX() {
  double Xval = m_driverController.GetRightX();
  if (-.1 < Xval < .1 ){
     return false;
  }
  return true;
}; */

void RobotContainer::ConfigureBindings() {
   //Configure your trigger bindings here
  // double xVal = m_driverController.GetRightX();
  /* m_driverController.RightStick(); {
     m_driveSubsystem.Move(0.2);
   }; */
   m_driveSubsystem.SetDefaultCommand(
    frc2::RunCommand(
      [this] {
        m_driveSubsystem.LeftMotors(m_driverController.GetLeftY() / 2);
        m_driveSubsystem.RightMotors(m_driverController.GetRightY() / 2);
      },
      {&m_driveSubsystem}
    )
  );
 // m_driverController.RightStick().WhileTrue(m_driveSubsystem.Move(m_driverController.GetRawAxis(4) / 2));
  //whileTrue(m_driveSubsystem.Move(m_driverController.getRightX()));

 // frc::SmartDashboard::PutNumber("GetRightX:", );
 /* m_driverController.LeftTrigger().WhileTrue(m_driveSubsystem.Move(0.2));
  m_driverController.RightTrigger().WhileTrue(m_driveSubsystem.Move(-0.2));
  m_driverController.LeftTrigger().OnFalse(m_driveSubsystem.Move(0));
  m_driverController.RightTrigger().OnFalse(m_driveSubsystem.Move(0));
  m_driverController.LeftBumper().WhileTrue(m_driveSubsystem.Turn(.2));
  m_driverController.RightBumper().WhileTrue(m_driveSubsystem.Turn(-.2));
  m_driverController.LeftBumper().OnFalse(m_driveSubsystem.Turn(0));
  m_driverController.RightBumper().OnFalse(m_driveSubsystem.Turn(0)); */
//  (m_driverController.LeftStick() && m_driverController.RightStick()).WhileFalse(m_driveSubsystem.Move(0));
  //m_driverController.X().WhileTrue(m_driveSubsystem.Move(0));

};


frc2::CommandPtr RobotContainer::GetAutonomousCommand() {
  return autonomous::Auto(&m_driveSubsystem);
};