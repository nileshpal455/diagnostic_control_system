// sensor.cpp
// -----------------------------------------
// Implements the Sensor class declared in sensor.h.
// This simulates hardware readings by generating random numbers.

#include "sensor.h"
#include <cstdlib>   // for rand()
#include <ctime>     // for time()

// Constructor: assigns name, threshold, and initializes random seed
Sensor::Sensor(const std::string &n, double t)
    : name(n), threshold(t), value(0) {
    std::srand(static_cast<unsigned>(std::time(0))); // seed random generator
}

// Generates a random sensor reading between 0 and 119
double Sensor::readValue() {
    value = rand() % 120;  // simulate sensor reading
    return value;
}

// Checks if the current value crosses the fault threshold
bool Sensor::isFault() const {
    return value > threshold;
}

// Returns the sensor name
std::string Sensor::getName() const {
    return name;
}

// Returns the latest reading value
double Sensor::getValue() const {
    return value;
}
