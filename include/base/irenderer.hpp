#ifndef IRENDERER_HPP
#define IRENDERER_HPP

namespace AlchimiaNavitas {
    class IRenderer {
    public:
        virtual ~IRenderer() {}

        virtual void Render() = 0;
    };
}

#endif // IWNDOW_HPP

