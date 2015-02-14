#ifndef OPENGLRENDERER_HPP
#define OPENGLRENDERER_HPP
#include "base/irenderer.hpp"

namespace AlchimiaNavitas { namespace Engine {
class OpenGLRenderer
        : public IRenderer
{
public:
    OpenGLRenderer();
    ~OpenGLRenderer();

    void Render() override final;
};
} }

#endif // OPENGLRENDERER_HPP
