#ifndef CS100_PROJECT_CHARACTER_H
#define CS100_PROJECT_CHARACTER_H

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class Character {
public:
    Character();
    Character(string, int);
    string getName();
    int getAge();
private:
    string name;
    int age;

};


#endif //CS100_PROJECT_CHARACTER_H
