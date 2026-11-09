#include <iostream>
#include "King.h"
#include "Queen.h"
#include "Knight.h"
#include "Troll.h"
#include "SwordBehavior.h"
#include "BowBehavior.h"
#include "AxeBehavior.h"
#include "KnifeBehavior.h"
int main() {
    SwordBehavior sword;
    BowBehavior bow;
    AxeBehavior axe;
    KnifeBehavior knife;
    King king;
    Queen queen;
    Knight knight;
    Troll troll;
    king.setWeapon(&sword);
    queen.setWeapon(&bow);
    knight.setWeapon(&knife);
    troll.setWeapon(&axe);
    std::cout << "=== Adventure Game ===\n\n";
    king.display(); king.fight();
    queen.display(); queen.fight();
    knight.display(); knight.fight();
    troll.display(); troll.fight();
    std::cout << "\n=== Changing weapons ===\n\n";
    king.setWeapon(&axe);
    knight.setWeapon(&sword);
    king.display(); king.fight();
    knight.display(); knight.fight();
}
