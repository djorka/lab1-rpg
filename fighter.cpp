#include "fighter.h"

void Fighter::takeDamage(int damage) {
  int damageTaken = damage - (speed / 4);
  if (damageTaken < 1) {
    damageTaken = 1;
  }
  hitPoints -= damageTaken;
}
void Fighter::reset() {
  hitPoints = maxHitPoints;
}
void Fighter::regenerate() {
  if (hitPoints != maxHitPoints) {
    int newHitPoints = strength / 6;
    if ((hitPoints + newHitPoints) > maxHitPoints) {
      reset();
    }
    else if (newHitPoints == 0) {
      newHitPoints = 1;
      hitPoints += newHitPoints;
    }
    else {
      hitPoints += newHitPoints;
    }
  }
}