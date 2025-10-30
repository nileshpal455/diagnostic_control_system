// main.cpp
// -----------------------------------------
// Entry point of Diagnostic & Control Simulation System.
// It creates sensors, uses the Controller to monitor them,
// and logs their readings using Logger.

#include <iostream>
#include <vector>
#include <memory>
#include <thread>
#include <chrono>

#include "sensor.h"
#include "controller.h"

int main() {
    // Create shared sensors with thresholds
    std::vector<std::shared_ptr<Sensor>> sensors = {
        std::make_shared<Sensor>("Temperature", 90.0),
        std::make_shared<Sensor>("Voltage", 110.0),
        std::make_shared<Sensor>("MemoryUsage", 85.0)
    };

    Controller ctrl;  // Create controller

    std::cout << "Diagnostic & Control Simulation Started...\n";

    // Run system check multiple times
    for (int i = 0; i < 5; i++) {
        ctrl.checkSystem(sensors);
        std::this_thread::sleep_for(std::chrono::seconds(2)); // small delay
    }

    std::cout << "✅ Simulation complete. Logs saved in 'logs/system_log.txt'.\n";
    return 0;
}
