#include "TextDisplay.hpp"
#include "attack.hpp"
#include "attackValue.hpp"
#include "attackRange.hpp"
#include "heal.hpp"
#include "healValue.hpp"
#include "healRange.hpp"

TextDisplay::TextDisplay() {
    txt = "";
}

TextDisplay::~TextDisplay() {
	if (person != nullptr){
	   delete person;
    }
    if (boss != nullptr) {
        delete boss;
    }
}

void TextDisplay::BeginGameTxt() {
    string name;
    int age = 0;
    int chVal;

    cout << "Type your userName: ";
    cin >>  name;
    cout << "\n";

    cout << "Type your Age (between 18-60): ";
    cin >> age;

    while (age < 18 || age > 60) {
        cout << "\n";
        cout << "Error:Age not in Range." << "\n";
        cout << "choose an age between 18-60: " << "\n";
        cin >> age;
    }

    cout << "\n";

    person = new Character(name, age, 100);
    person->setAttack(new AttackRange(20.0,40.0));
    person->setHeal(new HealRange(20.0,30.0));

    cout << "welcome " << person->getName() << " who's " << person->getAge() << " years old!" << "\n" << "\n";

    cout << "Oh no, an enemy has spotted you!!" << "\n";
    cout << "You are set into battle position and must fight the enemy to survive!" << "\n" << "\n";

    cout << "(" << person->getName() << " has moved to position to fight)" << "\n" << "\n";

    cout << "When you are in a battle against an enemy, you can input 1 of 5 numbers as choices for your next move:" << "\n";
    PrintMenu();
    cout << endl;
    cout << "lets show your stats by typing 4 as your input" << "\n";
    cin >> chVal;

    if (chVal == 4) {
        cout << "Name: " << person->getName() << "\n";
        cout << "Age: " << person->getAge() << "\n";
        cout << "Health/MaxHealth: " << person->getHealth() << "/" << person->getMaxHealth() << "\n" << "\n";
    }

    cout << "These are your character stats that you start with." << "\n";
    cout << "You can progressively make your character stronger by winning your battles to increase your health and attack." << "\n";

    FirstBoss();
}

void TextDisplay::FirstBoss() {
    cout << "STARTING FIRST BOSS" << endl;
    boss = new Character("BOSS 1 NAME", 60, 200.0);
    boss->setAttack(new AttackValue(10));
    boss->setHeal(new HealValue(10));
    FightSequence();
    if(!PlayerIsAlive()) {
        cout << "DIED TO FIRST BOSS" << endl;
        //  PLAYER DEAD MESSAGE
    } else {
        cout << "BEAT FIRST BOSS" << endl;
        //  VICTORY MESSAGE
        person->setAttack(new AttackRange(15,45));
        person->setHeal(new HealRange(25,35));
        person->increaseHealth(person->getMaxHealth());
        SecondBoss();
    }
};

void TextDisplay::SecondBoss() {
    cout << "STARTING SECOND BOSS" << endl;
    boss = new Character("BOSS 2 NAME", 40, 300.0);
    boss->setAttack(new AttackRange(10,20));
    boss->setHeal(new HealRange(10,20));
    FightSequence();
    if(!PlayerIsAlive()) {
        cout << "DIED TO SECOND BOSS" << endl;
        //  PLAYER DEAD MESSAGE
    } else {
        cout << "BEAT SECOND BOSS" << endl;
        //  VICTORY MESSAGE
        person->setAttack(new AttackRange(20,50));
        person->setHeal(new HealRange(25,30));
        person->increaseHealth(person->getMaxHealth());
        FinalBoss();
    }
};

void TextDisplay::FinalBoss() {
    cout << "STARTING FINAL BOSS" << endl;
    boss = new Character("FINAL BOSS NAME", 30, 500);
    boss->setAttack(new AttackRange(10,30));
    boss->setHeal(new HealRange(30,50));
    FightSequence();
    if(!PlayerIsAlive()) {
        cout << "DIED TO FINAL BOSS" << endl;
        //  PLAYER DEAD MESSAGE
    } else {
        cout << "BEAT FINAL BOSS" << endl;
        //  VICTORY MESSAGE 
    }
}

void TextDisplay::MenuChoice(int chVal) {
    if (chVal != 0) {
        while (chVal != 0) {
            if (chVal == 1) {
		// attack

            }
            else if (chVal == 2) {
		// block

            }
            else if (chVal == 3) {
		// heal

            }
            else if (chVal == 4) {
		// show stats

            }
        }
    }
    else if (chVal == 0) {
        cout << "You chose to quit the Game" << "\n";
        cout << "Thank you for playing Mellow Rain!";
    }
}

bool TextDisplay::BossIsAlive(void) {
    return (boss!=nullptr)&&(boss->isAlive());
}

bool TextDisplay::PlayerIsAlive(void) {
    return (person!=nullptr)&&(person->isAlive());
}

void TextDisplay::PrintMenu(void) {
    cout << "0: Quit" << endl;
    cout << "1: Attack" << endl;
    cout << "2: Block" << endl;
    cout << "3: Heal" << endl;
    cout << "4: Show stats" << endl;
}

int TextDisplay::GetPlayerMove(void) {
    PrintMenu();
    int choice;
    cin >> choice;
    return choice;
}

void TextDisplay::FightSequence(void) {
    bool playerTurn = true;
    while(BossIsAlive()&&PlayerIsAlive()) {
        Turn(playerTurn);
        playerTurn = !playerTurn;
    }
}

void TextDisplay::Turn(bool playerTurn) {
    if(playerTurn) {
        PlayerTurn();
    } else {
        BossTurn();
    }
}

void TextDisplay::PlayerTurn(void) {
    int choice = GetPlayerMove();
    if(choice == 0) {
        person->decreaseHealth(person->getMaxHealth()+1);
    } else if(choice == 1) {
        person->attack(boss);
    } else if(choice == 2) {
        //  BLOCK
    } else if(choice == 3) {
        person->heal();
    } else if(choice == 4) {
        //  SHOW STATS
    } else {
        cout << "Invalid move choice, please choose again" << endl;
        PlayerTurn();
    }
}

void TextDisplay::BossTurn(void) {
    boss->attack(person);
}