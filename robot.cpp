#include "robot.h"

int Robot::getDamage() {
  int addBonusDamage = bonusDamage;
  bonusDamage = 0;
  return strength + addBonusDamage;
}
void Robot::reset() {
  Fighter::reset();
  currentEnergy = maxEnergy;
}
bool Robot::useAbility() {
  if (currentEnergy >= ROBOT_ABILITY_COST) {
    double bonus = (strength * ((currentEnergy / maxEnergy)^4));
    bonusDamage = int(bonus);
    currentEnergy -= ROBOT_ABILITY_COST;
    return true;
  }
  else {
    return false;
  }
}