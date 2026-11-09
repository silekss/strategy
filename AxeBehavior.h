#pragma once
#include "WeaponBehavior.h"
class AxeBehavior : public WeaponBehavior {
public:
    void useWeapon() const override;
};
