#pragma once
#include "WeaponBehavior.h"
class BowBehavior : public WeaponBehavior {
public:
    void useWeapon() const override;
};
