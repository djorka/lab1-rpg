#pragma once
#include "ArenaInterface.h"
#include "fighter.h"
#include "archer.h"
#include "cleric.h"
#include "robot.h"
using namespace std;

class Arena : public ArenaInterface {
  private:
    vector <Fighter*> fighters;
  public:
    Arena(){};
    ~Arena(){};
    bool addFighter(std::string info);
    bool removeFighter(std::string name);
    int getSize() const;
    FighterInterface* getFighter(std::string name);
};