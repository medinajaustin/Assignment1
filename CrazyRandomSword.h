#include <string>
#include <cstdlib>
#include <ctime>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZTRANDOMSWORD_h

class CrazyRandomSword : public Weapon {
public:

	
    CrazyRandomSword() : Weapon("Crazy random sword", ((((rand() % 91)) + 10)* 1.0) {
    }
    virtual ~CrazyRandomSword() {}; 
    virtual double hit(double armor);

};

#endif /* CRAZYRANDOMSWORD_H */