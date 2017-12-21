/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */
#include "GlobalLogger.hpp"

namespace MWParse::Log {

std::unique_ptr<Logger> g_logger = nullptr;

bool CreateGlobalLogger(std::ostream& output) {
    if (g_logger == nullptr) {
        g_logger = std::make_unique<Logger>(output, LOG_LEVEL);
        return true;
    } else {
        return false;
    }
}

Logger& GetGlobalLogger() {
    if (g_logger != nullptr) {
        return *g_logger;
    }
}

bool DestroyGlobalLogger() {
    if (g_logger != nullptr) {
        g_logger = nullptr;
        return true;
    } else {
        return false;
    }
}

}   // namespace MWParse::Log
