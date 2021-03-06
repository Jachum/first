//
// Created by janek on 18.11.18.
//

#ifndef ARKANOID1_GFXINTERFACE_HPP
#define ARKANOID1_GFXINTERFACE_HPP


#include "Position.hpp"

class gfxInterface {
public:
    virtual void init() = 0;
    virtual void shutdown() = 0;
    virtual void draw() = 0;
    virtual Position get_screen_max() = 0;
};


#endif //ARKANOID1_GFXINTERFACE_HPP
