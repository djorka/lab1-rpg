#pragma once
#include "fighter.h"

class Cleric : public Fighter {
  private:
    int currentMana;
    int maxMana;
  public:
    Cleric(string name, int maxHitPoints, int strength, int speed, int magic):Fighter(name, maxHitPoints, strength, speed, magic) {
      currentMana = magic * 5;
      maxMana = currentMana;
    }
    ~Cleric() {}

    int getDamage() { return magic; }
    void reset();
    void regenerate();
    bool useAbility();
}