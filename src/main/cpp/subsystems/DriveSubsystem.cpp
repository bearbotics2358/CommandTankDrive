#include "subsystems/DriveSubsystem.h"
#include <frc/smartdashboard/SmartDashboard.h>

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

frc2::CommandPtr DriveSubsystem::TestMethodCommand() {
  return RunOnce([this] {RightMotors(0.2);}).WithTimeout(1.0_s);
}