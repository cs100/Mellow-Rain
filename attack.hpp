#ifndef ATTACK_HPP
#define ATTACK_HPP

using namespace std;

class Character;

class Attack {
	public:
		virtual void execute(Character* defender) = 0;
		virtual void showStats(void) = 0;
};

#endif //ATTACK_HPP