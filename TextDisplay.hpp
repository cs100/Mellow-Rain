#ifndef _TEXTDISPLAY_HPP
#define _TEXTDISPLAY_HPP

#include <string>
#include <iostream>

#include "Character.h"

using namespace std;

class TextDisplay {
public:
    TextDisplay();
    ~TextDisplay();
    void BeginGameTxt();
    void FirstBoss();
    void SecondBoss();
    void FinalBoss();
    void MenuChoice(int chVal);
    bool BossIsAlive(void);
    bool PlayerIsAlive(void);
private:
	Character* boss;
    Character* person;
    string txt;
};

#endif //CS100_PROJECT_TEXTDISPLAY_HPP
