#include <pch.hpp>

#include "engine.hpp"

namespace AlchimiaNavitas { namespace Engine {
    Engine::Engine(std::unique_ptr<IWindow> window, std::unique_ptr<IRenderer> renderer)
        : mWindow( std::move(window) ),
          mRenderer( std::move(renderer) )
    {
    }

    Engine::~Engine()
    {
    }

    int Engine::Execute() {
        while(true) {
            mWindow->HandleEventQueue();
            mWindow->PrepareRender();
            mRenderer->Render();
            mWindow->FinishRender();
        }
    }
} }
