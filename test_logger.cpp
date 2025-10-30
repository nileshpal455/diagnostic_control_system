// test_logger.cpp
// ----------------------------
// Temporary file to test Logger functionality.

#include "logger.h"  // Include our Logger class

int main() {
    Logger logger;   // Create Logger object

    // Log some messages to verify functionality
    logger.logEvent("Logger test message: system initialized successfully.");
    logger.logEvent("Logger test message: temperature normal.");
    logger.logEvent("Logger test message: system shutting down.");

    return 0; // Program ends
}
// ----------------------------
