#pragma once
#include <stdint.h>

#ifndef customSubsystems
enum class subSystem : uint8_t {
    general,
    memoryUsage,
    filesystem,
    nfc,
    display,
    mainController,
    machine,
    current,
    pc,
    lockerUnit,
    networkCtrl,
    wifiSignalStrenght,
    networkData,
    checklists,
    user,
    certificate,
    reservations,
	version,
    nmbrOfSubsystems
};
#endif
