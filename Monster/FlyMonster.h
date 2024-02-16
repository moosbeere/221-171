#pragma once
#include "Monster.h"

class FlyMonster final:
    public Monster
{
public:
    FlyMonster();
    FlyMonster(string name, float health, float damage, float maxHealth, float flySpeed);
    void fly();
    float getFlySpeed();
    void print() override;

private:
    float flySpeed;
};

