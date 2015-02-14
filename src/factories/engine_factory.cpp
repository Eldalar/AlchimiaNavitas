#include <pch.hpp>

#include "factories/engine_factory.hpp"
#include "engine.hpp"
#include "base/iwindow.hpp"
#include "base/irenderer.hpp"
#include "engine/sfmlwindow.hpp"
#include "engine/openglrenderer.hpp"

namespace AlchimiaNavitas { namespace Factories {
    void Bind(Infector::Container& ioc) {
        ioc.bindAs<Engine::Engine, IEngine>();
        ioc.bindAs<Engine::SFMLWindow, IWindow>();
        ioc.bindAs<Engine::OpenGLRenderer, IRenderer>();
    }

    void Wire(Infector::Container& ioc) {
        ioc.wire<Engine::Engine, IWindow, IRenderer>();
        ioc.wire<Engine::SFMLWindow>();
        ioc.wire<Engine::OpenGLRenderer>();
    }

    std::unique_ptr<IEngine> CreateEngine() {
       Infector::Container ioc;
       Bind(ioc);
       Wire(ioc);
       return ioc.build<IEngine>();
   }
} }
