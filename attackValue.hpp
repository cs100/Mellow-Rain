#ifndef ATTACK_VALUE_HPP
#define ATTACK_VALUE_HPP

#include "attack.hpp"

class AttackValue : public Attack {
	private:
		double attackValue;
	public:
		AttackValue(double _attackValue) : attackValue(_attackValue) {};
		void execute(Character* defender);
};

#endif //ATTACK_VALUE_HPP