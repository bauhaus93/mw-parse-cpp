/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */



#include "logger/Logger.hpp"
#include "logger/GlobalLogger.hpp"

int main(int argc, char** argv) {
    mwparse::log::CreateGlobalLogger(std::cout);
    INFO("SERS");
    mwparse::log::DestroyGlobalLogger();
    return 0;
}
