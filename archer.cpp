#include "archer.h"

void Archer::reset() {
  Fighter::reset();
  speed = originalSpeed;
}
bool Archer::useAbility() {
  speed += 1;
  return true;
}