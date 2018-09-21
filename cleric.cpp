#include "cleric.h"

void Cleric::reset() {
  Fighter::reset();
  currentMana = maxMana;
}
void Cleric::regenerate() {
  Fighter::regenerate();
  int newMana = magic / 5;
  if (newMana < 1) {
    newMana = 1;
  }
  else if (currentMana == maxMana) {
    // leave it be
  }
  else if ((currentMana + newMana) > maxMana) {
    currentMana = maxMana;
  }
  else {
    currentMana += newMana;
  }
}
bool Cleric::useAbility() {
  if (currentMana >= CLERIC_ABILITY_COST) {
    int newHitPoints = magic / 3;
    currentMana -= CLERIC_ABILITY_COST;
    if ((hitPoints + newHitPoints) >= maxHitPoints) {
      if ((hitPoints + 1) <= maxHitPoints) {
        hitPoints += 1;
      }
      return true;
    }
    else {
      hitPoints += newHitPoints;
      return true;
    }
  }
  else {
    return false;
  }
}