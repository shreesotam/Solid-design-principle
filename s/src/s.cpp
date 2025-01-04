#include "s.h"


void Logger::logToFile(const std::string &message)
{
    std::ofstream logFile("app.log", std::ios::app);
        if (logFile.is_open()) {
            logFile << message << std::endl;
        }
        logFile.close();
}

void DataProcessor::processData(const std::string& data)
{
    logger.logToFile("Processing data: " + data);
        // Process the data
        std::cout << "Data processed: " << data << std::endl;

}

//Here, Logger is responsible only for logging, while DataProcessor handles data processing.