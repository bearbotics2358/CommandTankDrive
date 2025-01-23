#include "subsystems/DriveSubsystem.h"
#include <frc/smartdashboard/SmartDashboard.h>

DriveSubsystem::DriveSubsystem () {};

frc2::CommandPtr DriveSubsystem::Move(float s) {
  frc::SmartDashboard::PutNumber("fgh", s);
  return RunOnce(
      [this, s] { 
        frc::SmartDashboard::PutNumber("qq", s);
        m_right1.Set(s);
        m_left1.Set(-s);
        m_right2.Set(s);
        m_left2.Set(-s);
  });
}