#include <frc2/command/CommandPtr.h>
#pragma once
#include <frc2/command/SubsystemBase.h>
#include <rev/CANSparkMax.h>

class DriveSubsystem: public frc2::SubsystemBase {
    public:
        DriveSubsystem();
        void LeftMotors(float speed);
        void RightMotors(float speed);
        void Move(float speed);
        void Turn(float speed);
        frc2::CommandPtr TestMethodCommand();
        frc2::CommandPtr Forwards();
        frc2::CommandPtr Backwards();
        frc2::CommandPtr Left();
        frc2::CommandPtr Right();
    private:
        rev::CANSparkMax m_right1{2, rev::CANSparkMax::MotorType::kBrushed};
        rev::CANSparkMax m_left2{3, rev::CANSparkMax::MotorType::kBrushed};
        rev::CANSparkMax m_left1{4, rev::CANSparkMax::MotorType::kBrushed};
        rev::CANSparkMax m_right2{5, rev::CANSparkMax::MotorType::kBrushed};
};


