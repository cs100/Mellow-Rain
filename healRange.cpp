#include "Character.h"
#include "healRange.hpp"
#include <cmath>

using namespace std;

double HealRange::randHeal(void) {
	if(minHeal == maxHeal) {
		return minHeal;
	}
	double value = (double)rand();
	value = fmod(value,(maxHeal-minHeal));
	value += minHeal;
	return value;
}

void HealRange::execute(Character* healer) {
	healer->increaseHealth(randHeal());
}