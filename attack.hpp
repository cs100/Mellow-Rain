#ifndef ATTACK_HPP
#define ATTACK_HPP

#include <random>
#include <cmath>

using namespace std;

class attack {
	private:
		double minAttack;
		double maxAttack;
		double randAttack(void) {
			double value = (double)rand();
			value = fmod(value,(maxAttack-minAttack));
			value+= minAttack;
			return value;
		}
	public:
		attack(double min, double max) : minAttack(min), maxAttack(max) {};
};

#endif //ATTACK_HPP