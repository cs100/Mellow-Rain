#include "Character.h"
#include "healValue.hpp"
#include <iostream>

using namespace std;

void HealValue::execute(Character* healer) {
	healer->increaseHealth(healValue);
}

void HealValue::showStats(void) {
	cout << "Heal Value: " << healValue << endl;
}