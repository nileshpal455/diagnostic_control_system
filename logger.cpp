// logger.cpp
// ----------------------------
// This file implements the Logger class methods declared in logger.h.
// It handles writing diagnostic messages to a file with a timestamp.

#include "logger.h"      // Include the class definition
#include <fstream>       // For file handling
#include <ctime>         // For getting current system time
#include <iostream>      // For console error output

// Implementation of logEvent() function
void Logger::logEvent(const std::string &event) {

    // Open or create the log file inside 'logs' folder in append mode
    std::ofstream file("logs/system_log.txt", std::ios::app);

    // Check if file opened successfully
    if (!file.is_open()) {
        std::cerr << "Error: Unable to open log file!" << std::endl;
        return; // Exit function if failed
    }

    // Get current system time
    time_t now = time(0);

    // Write the time and event into the log file
    file << std::ctime(&now) << " - " << event << std::endl;

    // Close file after writing
    file.close();
}
// ----------------------------
// End of logger.cpp
