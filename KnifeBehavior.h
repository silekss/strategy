#pragma once
#include "WeaponBehavior.h"
class KnifeBehavior : public WeaponBehavior {
public:
    void useWeapon() const override;
};
