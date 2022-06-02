#include "TextDisplay.hpp"

TextDisplay::TextDisplay() {
    txt = "";
}

TextDisplay::~TextDisplay() {
    delete person;
}

void TextDisplay::BeginGameTxt() {
    string name;
    int age = 0;
    int chVal;

    cout << "Type your userName: ";
    cin >>  name;
    cout << "\n";

    cout << "Type your Age: ";
    cin >> age;

    while (age < 18 || age > 60) {
        cout << "\n";
        cout << "Error:Age not in Range." << "\n";
        cout << "choose an age between 18-60: " << "\n";
        cin >> age;
    }

    cout << "\n";

    person = new Character(name, age, 100);

    cout << "welcome " << person->getName() << " who's " << person->getAge() << " years old!" << "\n" << "\n";

    cout << "Oh no, an enemy has spotted you!!" << "\n";
    cout << "You are set into battle position and must fight the enemy to survive!" << "\n" << "\n";

    cout << "(" << person->getName() << " has moved to position to fight)" << "\n" << "\n";

    cout << "When you are in a battle against an enemy, you can input 1 of 5 numbers as choices for your next move:" << "\n";
    cout << "0: Quit" << "\n" <<  "1: Attack" << "\n" << "2: Block" << "\n" << "3: Heal" << "\n" << "4: Show stats" << "\n" << "\n";

    cout << "lets show your stats by typing 4 as your input" << "\n";
    cin >> chVal;

    if (chVal == 4) {
        cout << "Name: " << person->getName() << "\n";
        cout << "Age: " << person->getAge() << "\n";
        cout << "Health/MaxHealth: " << person->getHealth() << "/" << person->getMaxHealth() << "\n" << "\n";
    }

    cout << "These are your character stats that you start with." << "\n";
    cout << "You can progressively make your character stronger by winning your battles to increase your health and attack." << "\n";
}

void TextDisplay::FirstBoss() {

};

void TextDisplay::SecondBoss() {

};

void TextDisplay::FinalBoss() {
    
};

void TextDisplay::MenuChoice(int chVal) {
    if (chVal != 0) {
        while (chVal != 0) {
            if (chVal == 1) {

            }
            else if (chVal == 2) {

            }
            else if (chVal == 3) {

            }
            else if (chVal == 4) {

            }
        }
    }
    else if (chVal == 0) {
        cout << "You chose to quit the Game" << "\n";
        cout << "Thank you for playing Mellow Rain!";
    }
}
