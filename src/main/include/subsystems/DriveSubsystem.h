#include <frc2/command/CommandPtr.h>
#include <frc2/command/SubsystemBase.h>
#include <rev/SparkMax.h>

class DriveSubsystem: public frc2::SubsystemBase {
    public:
        DriveSubsystem();
        frc2::CommandPtr Move(int s);
    private:
        rev::spark::SparkMax m_right1{1, rev::spark::SparkMax::MotorType::kBrushed};
        rev::spark::SparkMax m_right2{2, rev::spark::SparkMax::MotorType::kBrushed};
        rev::spark::SparkMax m_left1{3, rev::spark::SparkMax::MotorType::kBrushed};
        rev::spark::SparkMax m_left2{4, rev::spark::SparkMax::MotorType::kBrushed};
};