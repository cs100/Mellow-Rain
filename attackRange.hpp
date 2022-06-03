#ifndef ATTACK_RANGE_HPP
#define ATTACK_RANGE_HPP

#include "attack.hpp"

class AttackRange : public Attack {
	private:
		double minAttack;
		double maxAttack;
		double randAttack(void);
	public:
		AttackRange(double _minAttack, double _maxAttack) : minAttack(_minAttack), maxAttack(_maxAttack) {};
		void execute(Character* defender);
		void showStats(void);
};

#endif //ATTACK_RANGE_HPP