#ifndef HEAL_HPP
#define HEAL_HPP

using namespace std;

class Character;
class Heal {
private:
	 double amountToHeal;

public:

	// Heal()
	Heal(double a) : amountToHeal(a) {};
	void execute(Character* toHeal);
};



#endif // HEAL_HPP
