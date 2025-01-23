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
  m_driverController.LeftStick().WhileTrue(m_driveSubsystem.Move(0.2));
  m_driverController.RightStick().WhileTrue(m_driveSubsystem.Turn(0.2));
  m_driverController.LeftStick().WhileFalse(m_driveSubsystem.Move(0.0));
  m_driverController.RightStick().WhileFalse(m_driveSubsystem.Turn(0.0));
};
