#pragma once
#include "fighter.h"

class Robot : public Fighter {
  private:
    int currentEnergy;
    int maxEnergy;
    int bonusDamage;
  public:
    Robot(string name, int maxHitPoints, int strength, int speed, int magic):Fighter(name, maxHitPoints, strength, speed, magic) {
      currentEnergy = magic * 2;
      maxEnergy = currentEnergy;
      bonusDamage = 0;
    }
    ~Robot() {}

    int getDamage();
    void reset();
    bool useAbility();
}