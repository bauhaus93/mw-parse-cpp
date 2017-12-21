/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */



#include "logger/Logger.hpp"
#include "logger/GlobalLogger.hpp"

int main(int argc, char** argv) {
    MWParse::Log::CreateGlobalLogger(std::cout);

    MWParse::Log::DestroyGlobalLogger();
    return 0;
}
