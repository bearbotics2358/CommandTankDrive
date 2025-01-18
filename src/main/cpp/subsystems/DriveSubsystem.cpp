#include "subsystems/DriveSubsystem.h"


DriveSubsystem::DriveSubsystem () {};

frc2::CommandPtr DriveSubsystem::Move(int s) {
  return this->RunOnce(
      [this, s] { 
        m_right1.Set(s);
        m_left1.Set(-s);
        m_right2.Set(s);
        m_left2.Set(-s);
    });
}