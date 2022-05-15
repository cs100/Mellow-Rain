#include "Character.h"

Character::Character() {
    name = "";
    age = 0;
}

Character::Character(string nm, int a) {
    name = nm;
    age = a;
}

string Character::getName() {
    return name;
}

int Character::getAge() {
    return age;
}
