// controller.cpp
// -----------------------------------------
// Implements the Controller class.
// Reads data from sensors, checks for faults,
// logs status, and prints corrective actions.

#include "controller.h"
#include <iostream>
#include <string>

void Controller::checkSystem(std::vector<std::shared_ptr<Sensor>> &sensors) {
    for (auto &s : sensors) {
        double val = s->readValue(); // get current reading

        if (s->isFault()) {
            // Log fault and show corrective action
            logger.logEvent("Fault detected in " + s->getName() +
                            " | Value: " + std::to_string(val));
            std::cout << "Taking corrective action for " 
                      << s->getName() << "..." << std::endl;
        } else {
            // Log normal status
            logger.logEvent("✅ Normal: " + s->getName() +
                            " | Value: " + std::to_string(val));
        }
    }
}
