#ifndef SFMLWINDOW_HPP
#define SFMLWINDOW_HPP
#include <SFML/Window.hpp>

#include "base/iwindow.hpp"


namespace AlchimiaNavitas { namespace Engine {
    class SFMLWindow
            : public IWindow
    {
    public:
        SFMLWindow();
        ~SFMLWindow();

        void PrepareRender() override final;
        void FinishRender() override final;
    private:
        sf::Window mWindow;
    };
} }
#endif // SFMLWINDOW_HPP
