#ifndef HEAL_HPP
#define HEAL_HPP

#include "Character.h"

using namespace std;

class Heal {
private:
	 double amountToHeal;

public:

	// Heal()
	Heal(Character* n, double a) 
	{
		amountToHeal = a;
		n->increaseHealth(amountToHeal);	
	}

};



#endif // HEAL_HPP
