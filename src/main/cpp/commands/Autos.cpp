#include <commands/Autos.h>

#include <frc2/command/Commands.h>

frc2::CommandPtr autonomous::Auto(DriveSubsystem* DriveSubsystem) {
    return DriveSubsystem->TestMethodCommand();
}