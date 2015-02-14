#include <pch.hpp>

#include "engine/sfmlwindow.hpp"


namespace AlchimiaNavitas { namespace Engine {
    SFMLWindow::SFMLWindow()
        : mWindow(sf::VideoMode(800, 600), "OpenGL") {
    }

    SFMLWindow::~SFMLWindow()
    {
    }

    void SFMLWindow::PrepareRender() {
    }

    void SFMLWindow::FinishRender() {
        mWindow.display();
    }
} }
