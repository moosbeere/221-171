#pragma once
#include "Monster.h"

class FlyMonster :
    public Monster
{
public:
    FlyMonster(string name, float health, float damage, float maxHealth, float flySpeed);
    void fly();
    float getFlySpeed();

private:
    float flySpeed;
};

