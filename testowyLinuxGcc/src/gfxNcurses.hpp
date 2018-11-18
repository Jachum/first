//
// Created by janek on 18.11.18.
//

#ifndef ARKANOID1_GFXNCURSES_HPP
#define ARKANOID1_GFXNCURSES_HPP
#include "gfxInterface.hpp"

class gfxNcurses : public gfxInterface  {

private:
    int maxY;
    int maxX;
public:
    int getMaxX() const;

public:
    void init() override;
    void shutdown() override;
    void draw() override;
    int getMaxY() const;

};


#endif //ARKANOID1_GFXNCURSES_HPP
