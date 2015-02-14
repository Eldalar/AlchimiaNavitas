#ifndef IWINDOW_HPP
#define IWINDOW_HPP

namespace AlchimiaNavitas {
    class IWindow {
    public:
        virtual ~IWindow() {}

        virtual void PrepareRender() = 0;
        virtual void FinishRender() = 0;
    };
}

#endif // IWNDOW_HPP

