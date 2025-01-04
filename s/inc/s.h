#pragma once
#include <iostream>
#include <fstream>
#include <string>

class Logger {
public:
    void logToFile(const std::string& message);
};

class DataProcessor {
private:
    Logger logger;
public:
    void processData(const std::string& data);
};