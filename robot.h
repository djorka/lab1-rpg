#pragma once
#include "fighter.h"

class Robot : public Fighter {
  private:
    int currentEnergy;
    int maxEnergy;
    int bonusDamage;
  public:
    Robot(string myname, int mymaxHitPoints, int mystrength, int myspeed, int mymagic):Fighter(myname, mymaxHitPoints, mystrength, myspeed, mymagic) {
      currentEnergy = magic * 2;
      maxEnergy = currentEnergy;
      bonusDamage = 0;
    }
    ~Robot() {}

    int getDamage();
    void reset();
    bool useAbility();
};