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
    }
    else if (type == "C") {
      Fighter* newFighter = new Cleric(name, maxHitPoints, strength, speed, magic);
      fighters.push_back(newFighter);
    }
    else if (type == "R") {
      Fighter* newFighter = new Robot(name, maxHitPoints, strength, speed, magic);
      fighters.push_back(newFighter);
    }
  }
  else {
    // ss failed
    return false;
  }

}
bool Arena::removeFighter(string name) {

}
int Arena::getSize() const {

}
FighterInterface* Arena::getFighter(string name) {

}