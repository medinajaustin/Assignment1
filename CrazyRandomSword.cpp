#include "CrazyRandomSword.h"


double CrazyRandomSword::hit(double armor){
	
	int ignore = rand() % (armor/2)
	
    double damage = (hitPoints - armor) + ingore;
   
	if(damage < 0)
	{
        return 0;
    }
    return damage;
}