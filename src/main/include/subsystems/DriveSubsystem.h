#include <frc2/command/CommandPtr.h>
#include <frc2/command/SubsystemBase.h>
#include <rev/CANSparkMax.h>

class DriveSubsystem: public frc2::SubsystemBase {
    public:
        DriveSubsystem();
        frc2::CommandPtr Move(float s);
    private:
        rev::CANSparkMax m_right1{2, rev::CANSparkMax::MotorType::kBrushed};
        rev::CANSparkMax m_left2{3, rev::CANSparkMax::MotorType::kBrushed};
        rev::CANSparkMax m_left1{4, rev::CANSparkMax::MotorType::kBrushed};
        rev::CANSparkMax m_right2{5, rev::CANSparkMax::MotorType::kBrushed};
};