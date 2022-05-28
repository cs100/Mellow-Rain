#ifndef ATTACK_HPP
#define ATTACK_HPP

#include <random>
#include <cmath>

using namespace std;

class Character;
class Attack {
	private:
		double minAttack;
		double maxAttack;
		double randAttack(void);
	public:
		Attack(double min, double max) : minAttack(min), maxAttack(max) {};
		void execute(Character* defender);
};

#endif //ATTACK_HPP