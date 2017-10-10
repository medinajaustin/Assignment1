#include "CrazyRandomSword.h"
#include <iostream>


double CrazyRandomSword::hit(double armor){
	
	srand(time(0));	
	
	int ignore = rand() % int(armor/2);
	
    double damage = (hitPoints - armor) + ignore;
   
	if(damage < 0)
	{
        return 0;
    }
    return damage;
}

double CrazyRandomSword::setRand()
{
	srand(time(0));	
	
	double x = ((rand() % 91) + 10) * 1.0;
	
	return x;
}