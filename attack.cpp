#include "Character.h"
#include "attack.hpp"

using namespace std;

double Attack::randAttack(void) {
	double value = (double)rand();
	value = fmod(value,(maxAttack-minAttack));
	value+= minAttack;
	return value;
}

void Attack::execute(Character* defender) {
	defender->decreaseHealth(randAttack());
}