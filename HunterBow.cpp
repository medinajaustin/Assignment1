#include "HunterBow.h"

#include <iostream>


double HunterBow::hit(double armor){
    
	double multiply = 1.0;
	
	if (armor >= 1 && armor < 40)
	{
		multiply = 2.0;	
	}
	
	if (armor >= 40)
	{
		multiply = 4.0;	
	}
	
	double damage = hitPoints / multiply;
	
   
   if(damage < 0)
   {
        return 0;
   }
   
	return damage;
}