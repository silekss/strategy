#include "Character.h"
#include <iostream>
void Character::setWeapon(WeaponBehavior* newWeapon) { weapon = newWeapon; }
void Character::fight() const {
    if (weapon) weapon->useWeapon();
    else std::cout << "Weapon is not selected!\n";
}
