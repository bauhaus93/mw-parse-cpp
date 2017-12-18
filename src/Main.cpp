#include "logger/Logger.hpp"

int main(int argc, char** argv) {
    auto logger = MWParse::Log::Logger { std::cout, MWParse::Log::LogLevel::INFO };

    return 0;
}
