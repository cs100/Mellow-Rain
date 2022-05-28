#include "Character.h"
#include "attack.hpp"

using namespace std;

double attack::randAttack(void) {
	double value = (double)rand();
	value = fmod(value,(maxAttack-minAttack));
	value+= minAttack;
	return value;
}

void attack::execute(Character* attacker, Character* defender) {
	defender->decreaseHealth(randAttack());
}