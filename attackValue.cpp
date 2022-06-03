#include "Character.h"
#include "attackValue.hpp"
#include <iostream>

using namespace std;

void AttackValue::execute(Character* defender) {
	defender->decreaseHealth(attackValue);
}

void AttackValue::showStats(void) {
	cout << "Attack Value: " << attackValue << endl;
}