#pragma once

#include <frc2/command/CommandPtr.h>
#include <subsystems/DriveSubsystem.h>

namespace autonomous {
    frc2::CommandPtr Auto(DriveSubsystem* subsystem);
}