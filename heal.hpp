#ifndef HEAL_HPP
#define HEAL_HPP

using namespace std;

class Character;

class Heal {
	public:
		virtual void execute(Character* toHeal) = 0;
		virtual void showStats(void) = 0;
};

#endif // HEAL_HPP
