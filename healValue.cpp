#include "Character.h"
#include "healValue.hpp"

using namespace std;

void HealValue::execute(Character* healer) {
	healer->increaseHealth(healValue);
}