#include "Character.h"
#include "TextDisplay.hpp"
#include "attack.hpp"
#include "attackRange.hpp"
#include "attackValue.hpp"
#include "heal.hpp"
#include "healRange.hpp"
#include "healValue.hpp"
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
    TextDisplay Gamer;
    srand(time(NULL));
    Gamer.BeginGameTxt();

    return 0;
}
