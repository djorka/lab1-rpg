#include "Arena.h"
#include <sstream>

bool Arena::addFighter(string info) {
  string name;
  string type;
  int maxHitPoints;
  int strength;
  int speed;
  int magic;

  stringstream ss(info);
  if (ss >> name >> type >> maxHitPoints >> strength >> speed >> magic) {
    if (maxHitPoints <= 0 || strength <= 0 || speed <= 0 || magic <= 0) {
      return false;
    }
    if (type == "A") {
      Fighter* newFighter = new Archer(name, maxHitPoints, strength, speed, magic);
      fighters.push_back(newFighter);
      return true;
    }
    else if (type == "C") {
      Fighter* newFighter = new Cleric(name, maxHitPoints, strength, speed, magic);
      fighters.push_back(newFighter);
      return true;
    }
    else if (type == "R") {
      Fighter* newFighter = new Robot(name, maxHitPoints, strength, speed, magic);
      fighters.push_back(newFighter);
      return true;
    }
    else {
      return false;
    }
  }
  else {
    // ss failed
    return false;
  }

}
bool Arena::removeFighter(string name) {
  for (int i = 0; i < getSize(); i++) {
    if (fighters[i]->getName() == name) {
      fighters.erase(fighters.begin() + i);
      return true;
    }
  }
  return false;
}
int Arena::getSize() const {
  return fighters.size();
}
FighterInterface* Arena::getFighter(string name) {
  for (int i = 0; i < getSize(); i++) {
    if (fighters[i]->getName() == name) {
      return fighters[i];
    }
  }
  return NULL;
}