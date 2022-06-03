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
private:
    bool BossIsAlive(void);
    bool PlayerIsAlive(void);
    void PrintMenu(bool showStats);
    int GetPlayerMove(bool showStats);
    void FightSequence(void);
    void Turn(bool playerTurn);
    void PlayerTurn(bool showStats);
    void BossTurn(void);
	Character* boss = nullptr;
    Character* person = nullptr;
    string txt;
};

#endif //CS100_PROJECT_TEXTDISPLAY_HPP
