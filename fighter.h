#pragma once
#include "FighterInterface.h"
using namespace std;

class Fighter : public FighterInterface {
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
    }
    ~Fighter() {}
    string getName() { return name; }
    int getMaximumHp() { return maxHitPoints; }
    int getCurrentHp() { return hitPoints; }
    int getStrength() { return strength; }
    int getSpeed() { return speed; }
    int getMagic() { return magic; }
    virtual int getDamage() = 0;
    virtual void takeDamage(int damage);
    virtual void reset();
    virtual void regenerate();
    virtual bool useAbility() = 0;
}