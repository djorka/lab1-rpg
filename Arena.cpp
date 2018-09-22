#include "Arena.h"
#include <sstream>
using namespace std;

bool Arena::addFighter(string info) {
  string name;
  string type;
  int maxHitPoints;
  int strength;
  int speed;
  int magic;

  stringstream ss(info);
  if (ss >> name >> type >> maxHitPoints >> strength >> speed >> magic) {
    if (ss.rdbuf()->in_avail() > 0) {
      return false;
    }
    if (getFighterIndex(name) != -1) {
      return false;
    }
    if (maxHitPoints <= 0 || strength <= 0 || speed <= 0 || magic <= 0) {
      return false;
    }
    if (type == "A") {
      Fighter* newFighter = new Archer(name, maxHitPoints, strength, speed, magic);
      fighters.push_back(newFighter);
      return true; 
    }
    if (type == "C") {
      Fighter* newFighter = new Cleric(name, maxHitPoints, strength, speed, magic);
      fighters.push_back(newFighter);
      return true;
    }
    if (type == "R") {
      Fighter* newFighter = new Robot(name, maxHitPoints, strength, speed, magic);
      fighters.push_back(newFighter);
      return true;
    }
    else {
      return false;
    }
  }
  else {
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
int Arena::getFighterIndex(string name) const {
  for (int i = 0; i < getSize(); i++) {
    if (fighters[i]->getName() == name) {
      return i;
    }
  }
  return -1;
}