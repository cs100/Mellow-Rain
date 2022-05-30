#ifndef CS100_PROJECT_CHARACTER_H
#define CS100_PROJECT_CHARACTER_H

#include <iostream>
#include <cstdlib>
#include <string>
#include "attack.hpp"
#include "heal.hpp"

using namespace std;

class Character {
public:
    Character();
    ~Character();
    Character(string _name, int _age, double _health);
    string getName();
    int getAge();
    double getHealth(void);
    double getMaxHealth(void);
    void increaseHealth(double h);
    void decreaseHealth(double h);
    bool isAlive(void);
    bool isDead(void);
    void setAttack(Attack* _attack);
    void attack(Character* defender);
    void setHeal(Heal* _heal);
    void heal(void);
private:
    string name;
    int age;
    double health;
    double maxHealth;
    Attack* attackObject;
    Heal* healObject;
};


#endif //CS100_PROJECT_CHARACTER_H
