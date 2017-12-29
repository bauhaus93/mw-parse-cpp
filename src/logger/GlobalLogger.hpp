/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#pragma once

#include <iostream>
#include <memory>

#include "Logger.hpp"
#include "LogLevel.hpp"
#include "LoggerException.hpp"

namespace mwparse::log {

void CreateGlobalLogger(std::ostream& output);
Logger& GetGlobalLogger();
void DestroyGlobalLogger();

#define LOG_LEVEL DEBUG

#if LOG_LEVEL == TRACE
#define TRACE(args...) mwparse::log::GetGlobalLogger().Trace(args)
#define DEBUG(args...) mwparse::log::GetGlobalLogger().Debug(args)
#define INFO(args...) mwparse::log::GetGlobalLogger().Info(args)
#define ERROR(args...) mwparse::log::GetGlobalLogger().Error(args)
#define WARN(args...) mwparse::log::GetGlobalLogger().Warn(args)
#elif LOG_LEVEL == DEBUG
#define TRACE(args...)
#define DEBUG(args...) mwparse::log::GetGlobalLogger().Debug(args)
#define INFO(args...) mwparse::log::GetGlobalLogger().Info(args)
#define ERROR(args...) mwparse::log::GetGlobalLogger().Error(args)
#define WARN(args...) mwparse::log::GetGlobalLogger().Warn(args)
#elif LOG_LEVEL == INFO
#define TRACE(args...)
#define DEBUG(args...)
#define INFO(args...) mwparse::log::GetGlobalLogger().Info(args)
#define ERROR(args...) mwparse::log::GetGlobalLogger().Error(args)
#define WARN(args...) mwparse::log::GetGlobalLogger().Warn(args)
#elif LOG_LEVEL == WARN
#define TRACE(args...)
#define DEBUG(args...)
#define INFO(args...)
#define ERROR(args...) mwparse::log::GetGlobalLogger().Error(args)
#define WARN(args...) mwparse::log::GetGlobalLogger().Warn(args)
#elif LOG_LEVEL == ERROR
#define TRACE(args...)
#define DEBUG(args...)
#define INFO(args...)
#define ERROR(args...)
#define WARN(args...) mwparse::log::GetGlobalLogger().Warn(args)
#endif

}   // namespace mwparse::log
