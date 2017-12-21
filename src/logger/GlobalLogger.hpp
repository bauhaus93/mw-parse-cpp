/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */
#pragma once

#include <iostream>
#include <memory>

#include "Logger.hpp"
#include "LoggerException.hpp"

/*TRACE = 0,
DEBUG = 1,
INFO = 2,
WARN = 3,
ERROR = 4*/

namespace MWParse::Log {

#define LOG_LEVEL LogLevel::INFO

// #ifdef LOG_LEVEL_INFO


// #endif

bool CreateGlobalLogger(std::ostream& output);
Logger& GetGlobalLogger();
bool DestroyGlobalLogger();


}   // namespace MWParse::Log
