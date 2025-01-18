#include <frc2/command/CommandPtr.h>
#include <frc2/command/SubsystemBase.h>
#include <rev/CANSparkMax.h>

class DriveSubsystem: public frc2::SubsystemBase {
    public:
        DriveSubsystem();
        frc2::CommandPtr Move(int s);
    private:
        rev::CANSparkMax m_right1{1, rev::CANSparkMax::MotorType::kBrushed};
        rev::CANSparkMax m_right2{2, rev::CANSparkMax::MotorType::kBrushed};
        rev::CANSparkMax m_left1{3, rev::CANSparkMax::MotorType::kBrushed};
        rev::CANSparkMax m_left2{4, rev::CANSparkMax::MotorType::kBrushed};
};