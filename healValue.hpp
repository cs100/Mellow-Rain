#ifndef HEAL_VALUE_HPP
#define HEAL_VALUE_HPP

#include "heal.hpp"

class HealValue : public Heal {
	private:
		double healValue;
	public:
		HealValue(double _healValue) : healValue(_healValue) {};
		void execute(Character* healer);
};

#endif //HEAL_VALUE_HPP