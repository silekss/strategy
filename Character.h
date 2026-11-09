#pragma once
#include "WeaponBehavior.h"
class Character {
protected:
    WeaponBehavior* weapon = nullptr; // non-owning pointer
public:
    virtual ~Character() = default;
    void setWeapon(WeaponBehavior* newWeapon);
    void fight() const;
    virtual void display() const = 0;
};
