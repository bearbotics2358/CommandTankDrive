#include "subsystems/DriveSubsystem.h"
#include <frc/smartdashboard/SmartDashboard.h>

DriveSubsystem::DriveSubsystem () {};

frc2::CommandPtr DriveSubsystem::Move(float Speed) {
  frc::SmartDashboard::PutNumber("fgh", Speed);
  return RunOnce(
      [this, Speed] { 
        frc::SmartDashboard::PutNumber("qq", Speed);
        m_right1.Set(Speed);
        m_left1.Set(-Speed);
        m_right2.Set(Speed);
        m_left2.Set(-Speed);
  });
};

frc2::CommandPtr DriveSubsystem::Turn(float turn) {
  frc::SmartDashboard::PutNumber("idk", turn);
  return RunOnce(
      [this, turn] { 
        frc::SmartDashboard::PutNumber("huh", turn);
        m_right1.Set(turn);
        m_left1.Set(turn);
        m_right2.Set(turn);
        m_left2.Set(turn);
  });
};