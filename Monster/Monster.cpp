#include "Monster.h"

// 1й вариант конструктора
Monster::Monster() {
	name = "Monster";
	health = 1;
	damage = 1;
}

// 2й вариант конструктора
Monster::Monster(string name, float health, float damage, float maxHealth) {
	this->name = name;
	this->health = health;
	this->damage = damage;
	this->maxHealth = maxHealth;
}

float Monster::getLevel()
{
	return this->maxHealth/5;
}
float Monster::getDamage()
{
	return this->damage;
}
float Monster::getMaxHealth()
{
	return this->maxHealth;
}
string Monster::getName()
{
	return this->name;
}
float Monster::getHealth()
{
	return this->health;
}

void Monster::setDamage(float damage)
{
	this->damage = damage;
}

void Monster::setMaxHealth(float maxHealth)
{
	this->maxHealth = maxHealth;
}

void Monster::setName(string name)
{
	this->name = name;
}

void Monster::setHealth(float health)
{
	this->health = health;
}


void Monster::applyDamage(float damage)
{
	this->health -= damage;
}
void Monster::applyDamage()
{
	this->applyDamage(1);
}
void Monster::applyDamage(Monster& m)
{
	m.applyDamage(this->damage);
}
void Monster::recovery()
{
	this->health = this->maxHealth;
}
void Monster::print()
{
	cout << "Name " << this->name << endl;
	cout << "Health " << this->health << endl;
	cout << "maxHealth " << this->maxHealth << endl;
	cout << "Damage " << this->damage << endl;
}

Monster::~Monster()
{
	std::cout << "Объект " << this->name << " удаляется" << endl;
}
