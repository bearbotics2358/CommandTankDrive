// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "RobotContainer.h"

RobotContainer::RobotContainer() {
  // Initialize all of your commands and subsystems here

  // Configure the button bindings
  ConfigureBindings();
}

void RobotContainer::ConfigureBindings() {
  // Configure your trigger bindings here
  m_driverController.LeftTrigger().WhileTrue(m_driveSubsystem.Move(0.5));
  m_driverController.RightTrigger().WhileTrue(m_driveSubsystem.Move(-0.5));
  m_driverController.LeftTrigger().OnFalse(m_driveSubsystem.Move(0));
  m_driverController.RightTrigger().OnFalse(m_driveSubsystem.Move(0));
  m_driverController.LeftBumper().WhileTrue(m_driveSubsystem.Turn(0.5));
  m_driverController.RightBumper().WhileTrue(m_driveSubsystem.Turn(-0.5));
  m_driverController.LeftBumper().OnFalse(m_driveSubsystem.Turn(0));
  m_driverController.RightBumper().OnFalse(m_driveSubsystem.Turn(0));
//  (m_driverController.LeftStick() && m_driverController.RightStick()).WhileFalse(m_driveSubsystem.Move(0));
  m_driverController.X().WhileTrue(m_driveSubsystem.Move(0));
};
