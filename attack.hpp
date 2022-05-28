#ifndef ATTACK_HPP
#define ATTACK_HPP

#include "Character.h"
#include <random>
#include <cmath>

using namespace std;

class attack {
	private:
		double minAttack;
		double maxAttack;
		double randAttack(void);
	public:
		attack(double min, double max) : minAttack(min), maxAttack(max) {};
		void execute(Character* attacker, Character* defender);
};

#endif //ATTACK_HPP