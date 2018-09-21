#include "archer.h"

void Archer::reset() {
  Fighter::reset();
  speed = startingSpeed;
}
bool Archer::useAbility() {
  speed += 1;
  return true;
}