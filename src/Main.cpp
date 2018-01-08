/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#include <memory>

#include "logger/GlobalLogger.hpp"
#include "MWParseException.hpp"
#include "parser/ESMParser.hpp"

using namespace mwparse;

int main(int argc, char** argv) {
     log::CreateGlobalLogger(std::cout);

    std::unique_ptr<parser::ESMParser> parser = nullptr;


    try {
        parser = std::make_unique<parser::ESMParser>("Morrowind.esm");

        parser->Parse();
    }
    catch (const exception::MWParseException& e) {
        ERROR(e.what());
        parser = nullptr;
        log::DestroyGlobalLogger();
        return 1;
    }

    log::DestroyGlobalLogger();
    return 0;
}
