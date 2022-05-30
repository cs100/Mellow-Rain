#include "Character.h"
#include "attackValue.hpp"

using namespace std;

void AttackValue::execute(Character* defender) {
	defender->decreaseHealth(attackValue);
}