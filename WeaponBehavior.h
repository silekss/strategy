#pragma once
class WeaponBehavior {
public:
    virtual void useWeapon() const = 0;
    virtual ~WeaponBehavior() = default;
};
