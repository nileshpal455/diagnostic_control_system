// controller.h
// -----------------------------------------
// Header file declaring the Controller class.
// The Controller manages multiple sensors
// and uses Logger to record system status.

#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <vector>
#include <memory>
#include "sensor.h"
#include "logger.h"

class Controller {
    Logger logger;   // Logger object to record events

public:
    // Function to monitor all sensors
    void checkSystem(std::vector<std::shared_ptr<Sensor>> &sensors);
};

#endif
// -----------------------------------------
