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
  if (currentMana == maxMana) {
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
    currentMana -= CLERIC_ABILITY_COST;
    if (hitPoints == maxHitPoints) {
      return true;
    }
    int newHitPoints = magic / 3;
    if (newHitPoints < 1) {
      newHitPoints = 1;
    }
    if ((hitPoints + newHitPoints) >= maxHitPoints) {
      hitPoints = maxHitPoints;
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