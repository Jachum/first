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
    gfxNcurses();
    int getMaxX() const;
    int getMaxY() const;
    void init() override;
    void shutdown() override;
    void draw() override;

};


#endif //ARKANOID1_GFXNCURSES_HPP
