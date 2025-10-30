// logger.h
// ----------------------------
// This header file declares the Logger class.
// It will be responsible for writing messages into a log file for diagnostics.

#ifndef LOGGER_H        // Header guard to prevent multiple inclusion
#define LOGGER_H

#include <string>       // Needed for using std::string

// Logger class declaration
class Logger {
public:
    // Function to log a message (event) into a file
    void logEvent(const std::string &event);
};

#endif
// ----------------------------
// End of logger.h
