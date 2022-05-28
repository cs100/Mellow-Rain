#include "Character.h"
#include "heal.hpp"

void Heal::execute(Character* toHeal) {
	toHeal->increaseHealth(amountToHeal);
}