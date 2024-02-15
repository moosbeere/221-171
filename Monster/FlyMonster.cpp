#include "FlyMonster.h"

FlyMonster::FlyMonster(string name, float health, float damage, float maxHealth, float flySpeed) : Monster(name, health, damage, maxHealth)
{
	this->flySpeed = flySpeed;
}

void FlyMonster::fly()
{
	std::cout << name << " is flying\n"; //���������� � �������� ������������� ������
}

float FlyMonster::getFlySpeed()
{
	return this->flySpeed;
}
