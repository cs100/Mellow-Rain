#include "Character.h"
#include "attackRange.hpp"
#include <cmath>

using namespace std;

double AttackRange::randAttack(void) {
	if(minAttack == maxAttack) {
		return minAttack;
	}
	double value = (double)rand();
	value = fmod(value,(maxAttack-minAttack));
	value+= minAttack;
	return value;
}

void AttackRange::execute(Character* defender) {
	defender->decreaseHealth(randAttack());
}