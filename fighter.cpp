#include "fighter.h"

void Fighter::takeDamage(int damage) {
  int damageTaken = damage - (this->getSpeed() / 4);
  if (damageTaken < 1) {
    damageTaken = 1;
  }
  hitPoints -= damageTaken;
}
void Fighter::reset() {
  hitPoints = maxHitPoints;
}
void Fighter::regenerate() {
  int newHitPoints = strength / 6;
  if (newHitPoints < 1) {
    newHitPoints = 1;
  }
  if (hitPoints == maxHitPoints) {
    // do nothing
  }
  else if ((hitPoints + newHitPoints) > maxHitPoints) {
    hitPoints = maxHitPoints;
  }
  else {
    hitPoints += newHitPoints;
  }
}