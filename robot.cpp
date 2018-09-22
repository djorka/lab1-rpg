#include "robot.h"
#include <math.h>

int Robot::getDamage() {
  int damageDone = strength + bonusDamage;
  bonusDamage = 0;
  return damageDone;
}
void Robot::reset() {
  Fighter::reset();
  currentEnergy = maxEnergy;
  bonusDamage = 0;
}
bool Robot::useAbility() {
  if (currentEnergy >= ROBOT_ABILITY_COST) {
    // double bonus = double(currentEnergy / maxEnergy);
    // bonus = pow(bonus, 4.0);
    // bonus = bonus * double(strength);
    // bonusDamage = bonus;
    // double damageBonus = strength * (pow(currentEnergy / maxEnergy, 4));
    // bonusDamage = int (damageBonus);
    bonusDamage = static_cast<int>(strength * pow((currentEnergy / maxEnergy), 4));
    currentEnergy -= ROBOT_ABILITY_COST;
    return true;
  }
  else {
    return false;
  }
}