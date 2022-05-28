#include "Character.h"
#include <algorithm>

using namespace std;

Character::Character() {
    name = "";
    age = 0;
    maxHealth = 1;
    health = 1;
}

Character::Character(string n, int a, double h) {
    name = n;
    age = a;
    maxHealth = h;
    health = h;
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
