#include "Character.h"
#include "attack.hpp"
#include "heal.hpp"
#include <algorithm>
#include <iostream>

using namespace std;

Character::Character() {
    name = "";
    age = 0;
    maxHealth = 1;
    health = 1;
    attackObject = nullptr;
    healObject = nullptr;
}

Character::Character(string _name, int _age, double _health) {
    name = _name;
    age = _age;
    maxHealth = _health;
    health = _health;
    attackObject = nullptr;
    healObject = nullptr;
}

Character::Character(string _name, int _age, double _health, double _minattack, double _maxattack, double _amountToHeal) {
    name = _name;
    age = _age;
    maxHealth = _health;
    health = _health;
    attackObject = new Attack(_minattack, _maxattack);
    healObject = new Heal(_amountToHeal);
}

string Character::getName() {
    return name;
}

int Character::getAge() {
    return age;
}

double Character::getHealth() {
    return health;
};

double Character::getMaxHealth() {
    return maxHealth;
};

void Character::increaseHealth(double h) {
    health = min(maxHealth, health+h);
};

void Character::decreaseHealth(double h) {
    health = max(0.0, health-h);
};

bool Character::isAlive(void) {
    return health != 0;
};

bool Character::isDead(void) {
    return health == 0;
};

void Character::attack(Character* defender) {
    if(attackObject == nullptr) {
        cout << "NO ATTACK INITIALIZED" << endl;
        return;
    }
    attackObject->execute(defender);
}

void Character::heal(void) {
    if(healObject == nullptr) {
        cout << "HO HEAL INITIALIZED" << endl;
        return;
    }
    healObject->execute(this);
}