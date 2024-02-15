#pragma once
#include <iostream>
using namespace std;

class Monster
{
protected:
    float damage;
    float maxHealth;
    string name;
    float health;

public:
    //Monster();//1й вариант конструктора
    Monster(string name, float health, float damage, float maxHealth);//2й вариант конструктора
    //Monster(string name, float health, float damage) :name(name), health(health), damage(damage) {};//3й вариант конструктора

    float getLevel();
    float getDamage();
    float getMaxHealth();
    string getName();
    float getHealth();

    void setDamage(float damage);
    void setMaxHealth(float maxHealth);
    void setName(string name);
    void setHealth(float health);

    void applyDamage(float damage);
    void applyDamage();
    void applyDamage(Monster& m);
    void recovery();


    //деструктор
    ~Monster();

};

