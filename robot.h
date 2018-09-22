#pragma once
#include "fighter.h"

class Robot : public Fighter {
  protected:
    int currentEnergy;
    int maxEnergy;
    int bonusDamage;
  public:
    Robot(string myname, int mymaxHitPoints, int mystrength, int myspeed, int mymagic):Fighter(myname, mymaxHitPoints, mystrength, myspeed, mymagic) {
      currentEnergy = 2 * mymagic;
      maxEnergy = currentEnergy;
      bonusDamage = 0;
    }
    ~Robot(){}

    int getDamage();
    void reset();
    bool useAbility();
};