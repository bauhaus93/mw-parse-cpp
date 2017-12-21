/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#pragma once

#include <iostream>
#include <memory>

#include "Logger.hpp"
#include "LogLevel.hpp"
#include "LoggerException.hpp"

namespace MWParse::Log {

void CreateGlobalLogger(std::ostream& output);
Logger& GetGlobalLogger();
void DestroyGlobalLogger();

#define LOG_LEVEL INFO

#if LOG_LEVEL == TRACE
#define TRACE(args...) MWParse::Log::GetGlobalLogger().Trace(args)
#define DEBUG(args...) MWParse::Log::GetGlobalLogger().Debug(args)
#define INFO(args...) MWParse::Log::GetGlobalLogger().Info(args)
#define ERROR(args...) MWParse::Log::GetGlobalLogger().Error(args)
#define WARN(args...) MWParse::Log::GetGlobalLogger().Warn(args)
#elif LOG_LEVEL == DEBUG
#define TRACE(args...)
#define DEBUG(args...) MWParse::Log::GetGlobalLogger().Debug(args)
#define INFO(args...) MWParse::Log::GetGlobalLogger().Info(args)
#define ERROR(args...) MWParse::Log::GetGlobalLogger().Error(args)
#define WARN(args...) MWParse::Log::GetGlobalLogger().Warn(args)
#elif LOG_LEVEL == INFO
#define TRACE(args...)
#define DEBUG(args...)
#define INFO(args...) MWParse::Log::GetGlobalLogger().Info(args)
#define ERROR(args...) MWParse::Log::GetGlobalLogger().Error(args)
#define WARN(args...) MWParse::Log::GetGlobalLogger().Warn(args)
#elif LOG_LEVEL == WARN
#define TRACE(args...)
#define DEBUG(args...)
#define INFO(args...)
#define ERROR(args...) MWParse::Log::GetGlobalLogger().Error(args)
#define WARN(args...) MWParse::Log::GetGlobalLogger().Warn(args)
#elif LOG_LEVEL == ERROR
#define TRACE(args...)
#define DEBUG(args...)
#define INFO(args...)
#define ERROR(args...)
#define WARN(args...) MWParse::Log::GetGlobalLogger().Warn(args)
#endif

}   // namespace MWParse::Log
