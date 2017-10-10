#include <string>
#include "Weapon.h"

#ifndef HUNTERBOW_H
#define HUNTERBOW_H

class HunterBow : public Weapon {
public:

    HunterBow() : Weapon("Hunter's bow", 80.0) {
    }
    virtual ~HunterBow() {}; 
    virtual double hit(double armor);

};

#endif /* HUNTERBOW_H */