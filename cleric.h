#pragma once
#include "fighter.h"

class Cleric : public Fighter {
  private:
    int currentMana;
    int maxMana;
  public:
    Cleric(string myname, int mymaxHitPoints, int mystrength, int myspeed, int mymagic):Fighter(myname, mymaxHitPoints, mystrength, myspeed, mymagic) {
      currentMana = magic * 5;
      maxMana = currentMana;
    }
    ~Cleric() {}

    int getDamage() { return magic; }
    void reset();
    void regenerate();
    bool useAbility();
};