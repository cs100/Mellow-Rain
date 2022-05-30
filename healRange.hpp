#ifndef HEAL_RANGE_HPP
#define HEAL_RANGE_HPP

#include "heal.hpp"

class HealRange : public Heal {
	private:
		double minHeal;
		double maxHeal;
		double randHeal(void);
	public:
		HealRange(double _minHeal, double _maxHeal) : minHeal(_minHeal), maxHeal(_maxHeal) {};
		void execute(Character* healer);
};

#endif //HEAL_RANGE_HPP