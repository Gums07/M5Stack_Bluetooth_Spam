// main.cpp

#include <stdio.h>
#include "ble_spammer.h"

// Include C module in a C++ file
extern "C" {
    #include "speaker_spammer.h"
}

// ESP-IDF entry point for apps written in C++
extern "C" void app_main(void) {
    // Call BLE spam logic
    start_ble_spam();

    // Call speaker spam logic
    play_beep_pattern();
}
