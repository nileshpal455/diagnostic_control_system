// sensor.h
// -----------------------------------------
// Header file declaring the Sensor class.
// A Sensor object simulates a hardware sensor
// that measures values (e.g., Temperature, Voltage).

#ifndef SENSOR_H
#define SENSOR_H

#include <string>

class Sensor {
    std::string name;      // Name of the sensor (like "Temperature")
    double value;          // Current reading value
    double threshold;      // Threshold beyond which it is considered faulty

public:
    // Constructor - initializes sensor name and threshold
    Sensor(const std::string &n, double t);

    // Simulates reading a sensor value (random number)
    double readValue();

    // Checks if current reading exceeds threshold
    bool isFault() const;

    // Getter functions
    std::string getName() const;
    double getValue() const;
};

#endif
// -----------------------------------------
