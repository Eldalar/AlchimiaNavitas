#ifndef ENGINE
#define ENGINE
#include "base/iengine.hpp"

namespace AlchimiaNavitas { namespace Factories {
    std::unique_ptr<IEngine> CreateEngine();
} }

#endif // ENGINE

