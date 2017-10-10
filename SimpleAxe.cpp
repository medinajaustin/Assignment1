#include "SimpleAxe.h"

double SimpleAxe::hit(double armor) {
	if (armor > 0 && armor < 20)
	{
		armor = 0;
	}
	
    double damage = hitPoints - (armor);
   
	if (damage < 0) 
	{
        return 0;
    }
    return damage;
}