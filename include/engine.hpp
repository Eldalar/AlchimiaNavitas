#ifndef ENGINE_HPP
#define ENGINE_HPP
#include "base/iengine.hpp"
#include "base/iwindow.hpp"
#include "base/irenderer.hpp"

namespace AlchimiaNavitas { namespace Engine {
    class Engine
        : public IEngine
    {
    public:
        Engine( std::unique_ptr<IWindow> window,
                std::unique_ptr<IRenderer> renderer);
        ~Engine();

        virtual int Execute() override final;
    private:
        std::unique_ptr<IWindow> mWindow;
        std::unique_ptr<IRenderer> mRenderer;
    };
} }

#endif // ENGINE_HPP
