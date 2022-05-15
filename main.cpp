#include "Character.h"

int main() {
    string name;
    int age = 0;

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

    Character* OgCharacter = new Character(name, age);

    cout << "welcome " << OgCharacter->getName() << " who's " << OgCharacter->getAge() << " years old!" << "\n";

    return 0;
}

