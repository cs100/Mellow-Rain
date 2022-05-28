#ifndef CS100_PROJECT_CHARACTER_H
#define CS100_PROJECT_CHARACTER_H

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class Character {
public:
    Character();
    Character(string n, int a, double h);
    string getName();
    int getAge();
    double getHealth(void);
    double getMaxHealth(void);
    double increaseHealth(double h);
    double decreaseHealth(double h);
    bool isAlive(void);
    bool isDead(void);
private:
    string name;
    int age;
    double health;
    double maxHealth;

};


#endif //CS100_PROJECT_CHARACTER_H
