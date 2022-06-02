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
    void FinalBoss();;
    void MenuChoice(int chVal);
private:
    bool BossIsAlive(void);
    bool PlayerIsAlive(void);
    void PrintMenu(void);
    int GetPlayerMove(void);
    void FightSequence(void);
    void Turn(bool playerTurn);
    void PlayerTurn(void);
    void BossTurn(void);
	Character* boss = nullptr;
    Character* person = nullptr;
    string txt;
};

#endif //CS100_PROJECT_TEXTDISPLAY_HPP
