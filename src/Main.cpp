#include "logger/Logger.hpp"
#include "logger/GlobalLogger.hpp"

int main(int argc, char** argv) {
    auto logger = MWParse::Log::Logger { std::cout, MWParse::Log::LogLevel::INFO };

    logger.Info("Sers");

    return 0;
}
