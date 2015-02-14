#ifndef IENGINE_HPP
#define IENGINE_HPP

namespace AlchimiaNavitas {
    class IEngine {
    public:
        virtual ~IEngine() {}

        virtual int Execute() = 0;
    };
}

#endif // IENGINE_HPP

