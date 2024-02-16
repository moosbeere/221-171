#include "FlyMonster.h"

FlyMonster::FlyMonster():Monster()
{
	this->flySpeed = 30;
}

FlyMonster::FlyMonster(string name, float health, float damage, float maxHealth, float flySpeed) : Monster(name, health, damage, maxHealth)
{
	this->flySpeed = flySpeed;
}

void FlyMonster::fly()
{
	this->setHealth(getHealth() - 1);
	std::cout << name << " is flying & health " << health << endl; //ќбращаемс€ к свойству родительского класса
}

float FlyMonster::getFlySpeed()
{
	return this->flySpeed;
}

void FlyMonster::print()
{
	cout << this->flySpeed << endl;
}
 
//class FlyMonster : public Monster, public Abc;