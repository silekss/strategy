#pragma once
#include "WeaponBehavior.h"
class SwordBehavior : public WeaponBehavior {
public:
    void useWeapon() const override;
};
