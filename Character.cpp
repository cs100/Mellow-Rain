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

Character::~Character() {
    if(attackObject != nullptr) {
        delete attackObject;
    }
    if(healObject != nullptr) {
        delete healObject;
    }
}

Character::Character(string _name, int _age, double _health) {
    name = _name;
    age = _age;
    maxHealth = _health;
    health = _health;
    attackObject = nullptr;
    healObject = nullptr;
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
    if(isBlocking()) {
        h = blockingDamage*h;
    }
    health = max(0.0, health-h);
    blocking = false;
    cout << " did " << h << " damage to " << getName() << endl;
};

bool Character::isAlive(void) {
    return health != 0;
};

bool Character::isDead(void) {
    return health == 0;
};

void Character::setAttack(Attack* _attack) {
    attackObject = _attack;
}

void Character::attack(Character* defender) {
    cout << getName() << " attacks " << defender->getName() << endl;
    if(attackObject == nullptr) {
        cout << "NO ATTACK INITIALIZED" << endl;
        return;
    }
    cout << getName();
    attackObject->execute(defender);
    blocking = false;
    cout << defender->getName() << " has " << defender->getHealth() << " left" << endl << endl; 
 }

void Character::setHeal(Heal* _heal) {
    healObject = _heal;
}

void Character::heal(void) {
    if(healObject == nullptr) {
        cout << "HO HEAL INITIALIZED" << endl;
        return;
    }
    healObject->execute(this);
    blocking = false;
}

void Character::block(void) {
    blocking = true;
}

bool Character::isBlocking(void) {
    return blocking;
}

void Character::setBlockingDamage(double _blockingDamage) {
    if(_blockingDamage <= 0.0 || _blockingDamage >= 1.0) {
        cout << "INVALID BLOCKING DAMAGE" << endl;
        return;
    }
    blockingDamage = _blockingDamage;
}

double Character::getBlockingDamage(void) {
    return blockingDamage;
}

void Character::showStats(void) {
    cout << "\t\t" << name << " Stats" << endl;
    cout << "Age: " << age << endl;
    cout << "Health: " << health << endl;
    cout << "MaxHealth: " << maxHealth << endl;
    cout << "Blocking Damage: " << blockingDamage << endl;
    if(attackObject != nullptr) {
        attackObject->showStats();
    }
    if(healObject != nullptr) {
        healObject->showStats();
    }
}