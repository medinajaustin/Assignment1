#include <string>
#include <cstdlib>
#include <ctime>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZTRANDOMSWORD_h

class CrazyRandomSword : public Weapon {
public:

	
    CrazyRandomSword() : Weapon("Crazy random sword", CrazyRandomSword::setRand()) {}
    virtual ~CrazyRandomSword() {}; 
    virtual double hit(double armor);

private:
	
	double setRand();
};

#endif /* CRAZYRANDOMSWORD_H */