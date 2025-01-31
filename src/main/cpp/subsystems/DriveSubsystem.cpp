#pragma once

#include "subsystems/DriveSubsystem.h"
#include <frc/smartdashboard/SmartDashboard.h>
#include <frc2/command/SequentialCommandGroup.h>
#include <vector>
#include <string>
#include <iostream>
#include <frc2/command/RunCommand.h>
#include <frc2/command/Commands.h>

DriveSubsystem::DriveSubsystem () {};

void DriveSubsystem::LeftMotors(float speed) {
  frc::SmartDashboard::PutNumber("move speed", speed);
  m_right1.Set(speed);
  m_right2.Set(speed);
};

void DriveSubsystem::RightMotors(float speed) {
        frc::SmartDashboard::PutNumber("turn speed", speed);
        // -speed because left motors inverted
        m_left1.Set(-speed);
        m_left2.Set(-speed);
};

void DriveSubsystem::Move(float speed) {
        frc::SmartDashboard::PutNumber("turn speed", speed);
        // -speed because left motors inverted
        m_left1.Set(-speed);
        m_left2.Set(-speed);
        m_right1.Set(speed);
        m_right2.Set(speed);
};

void DriveSubsystem::Turn(float speed) {
        frc::SmartDashboard::PutNumber("turn speed", speed);
        // -speed because left motors inverted
        m_left1.Set(speed);
        m_left2.Set(speed);
        m_right1.Set(speed);
        m_right2.Set(speed);
};

frc2::CommandPtr DriveSubsystem::Forwards() {
  return Run([this] {Move(-0.2);});
};

frc2::CommandPtr DriveSubsystem::Backwards() {
  return Run([this] {Move(0.2);});
};

frc2::CommandPtr DriveSubsystem::Right() {
  return Run([this] {Move(0.2);});
};

frc2::CommandPtr DriveSubsystem::Left() {
  return Run([this] {Move(-0.2);});
};


frc2::CommandPtr DriveSubsystem::TestMethodCommand() {
  return frc2::cmd::Sequence(
    Forwards().WithTimeout(3_s), 
    Backwards().WithTimeout(3_s), 
    Right().WithTimeout(3_s), 
    Left().WithTimeout(3_s));
};
