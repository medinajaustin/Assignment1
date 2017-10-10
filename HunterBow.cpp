#include "HunterBow.h"


double HunterBow::hit(double armor){
    
	int multiply;
	
	if (armor == 0)
	{
		multiply = 4;	
	}
	else if (armor > 0 && armor < 40)
	{
		multiply = 2;	
	}
	else if (armor >= 40)
	{
		multiply = 1;	
	}
	
	double damage = (hitPoints) * multiply;
   
   if(damage < 0)
   {
        return 0;
   }
   
	return damage;
}