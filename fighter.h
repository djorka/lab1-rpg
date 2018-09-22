#pragma once
#include "FighterInterface.h"
using namespace std;

class Fighter: public FighterInterface {
  protected:
    string name;
    int hitPoints;
    int maxHitPoints;
    int strength;
    int speed;
    int magic;
  public:
    Fighter(string myname, int mymaxHitPoints, int mystrength, int myspeed, int mymagic) {
      name = myname;
      maxHitPoints = mymaxHitPoints;
      hitPoints = mymaxHitPoints;
      strength = mystrength;
      speed = myspeed;
      magic = mymagic;
    };
    ~Fighter() {};
    string getName() const { return name; }
    int getMaximumHP() const { return maxHitPoints; }
    int getCurrentHP() const { return hitPoints; }
    int getStrength() const { return strength; }
    int getSpeed() const { return speed; }
    int getMagic() const { return magic; }
    int getDamage() = 0;
    void takeDamage(int damage);
    void reset();
    void regenerate();
    bool useAbility() = 0;
};