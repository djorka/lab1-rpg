#pragma once
#include "fighter.h"

class Archer : public Fighter {
  protected:
    int originalSpeed;
  public:
    Archer(string myname, int mymaxHitPoints, int mystrength, int myspeed, int mymagic):Fighter(myname, mymaxHitPoints, mystrength, myspeed, mymagic) {
      originalSpeed = myspeed;
    }
    ~Archer(){}
    int getDamage() { return this->getSpeed(); }
    void reset();
    bool useAbility();
};