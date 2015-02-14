#include <pch.hpp>

#include "factories/engine_factory.hpp"

int main(int /*argc*/, char** /*argv*/)
{
    std::unique_ptr<AlchimiaNavitas::IEngine> engine = AlchimiaNavitas::Factories::CreateEngine();
    return engine->Execute();
}

