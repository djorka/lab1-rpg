#pragma once
#include "fighter.h"

class Archer : public Fighter {
  protected:
    int startingSpeed;
  public:
    Archer(string myname, int mymaxHitPoints, int mystrength, int myspeed, int mymagic):Fighter(myname, mymaxHitPoints, mystrength, myspeed, mymagic), startingSpeed(myspeed) {}
    ~Archer(){};
    int getDamage() { return speed; }
    void reset();
    bool useAbility();
};