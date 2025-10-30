// test_sensor.cpp
// -----------------------------------------
// Test file for Sensor class functionality.

#include "sensor.h"
#include <iostream>
#include <thread>
#include <chrono>

int main() {
    Sensor temp("Temperature", 90.0);   // Create a sensor with threshold

    // Read sensor values multiple times
    for (int i = 0; i < 5; i++) {
        double value = temp.readValue();
        std::cout << temp.getName() << " reading: " << value;
        if (temp.isFault())
            std::cout << " ⚠ Fault detected!";
        std::cout << std::endl;

        // Add small delay to simulate time between readings
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return 0;
}
