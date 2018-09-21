#pragma once
#include "fighter.h"

class Archer : public Fighter {
  private:
    int startingSpeed;
  public:
    Archer(string name, int maxHitPoints, int strength, int speed, int magic):Fighter(name, maxHitPoints, strength, speed, magic) {
      startingSpeed = speed;
    }
    ~Archer() {};
    int getDamage() { return speed; }
    void reset();
    bool useAbility();
}