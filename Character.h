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
    void block(void);
    bool isBlocking(void);
    void setBlockingDamage(double _blockingDamage);
    double getBlockingDamage(void);
private:
    string name;
    int age;
    double health;
    double maxHealth;
    Attack* attackObject;
    Heal* healObject;
    bool blocking = false;
    double blockingDamage = 0.8;
};


#endif //CS100_PROJECT_CHARACTER_H
