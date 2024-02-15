#include <iostream>
#include "Monster.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    //работа с конструкторами

    /* 1й вариант
        Monster m;
        m.name = "Goblin";
        m.health = 10;
        m.damage = 2;
    */

    // 2й вариант
    Monster m = Monster("Goblin", 2, 3, 5);
    // получение значений свойств с помощью геттеров
    cout <<  m.getName() << m.getDamage() << m.getHealth() << "\n";

    //динамическое создание объекта и его удаление
    Monster* g = new Monster("Dragon", 6, 7, 60);
    cout << g->getName() << " " << g->getHealth() << " " << g->getDamage() << "\n";
    delete g;

    //копирование объекта
    Monster copy = m;
    // установка значения с помощью сеттера
    copy.setName("copy_monster");
    cout << copy.getName() << " " << copy.getHealth() << " " << copy.getDamage() << "\n";

    //ссылка на объект
    Monster& res = m;
    res.setName("res_Monster");
    cout << m.getName() << " " << m.getHealth() << " " << m.getDamage() << "\n";

    //работа сборщика мусора
    Monster* m2 = new Monster("m2", 2, 4, 50);

    if (true) {
        Monster m3 = Monster("m3", 2, 4, 70);
        Monster* m4 = new Monster("m4", 2, 4, 30);
        delete m4;
    }
    delete m2; 

    Monster goblin = Monster("Goblin", 5, 10, 20);
    Monster spider = Monster("Spider", 10, 10, 30);
    cout << goblin.getLevel() << endl;
    cout << spider.getLevel() << endl;

    //перегрузка функции
    goblin.applyDamage(3);
    cout << "Goblin health " << goblin.getHealth() << endl;

    spider.applyDamage();
    cout << "Spider health " << spider.getHealth() << endl;

    goblin.recovery();
    cout << "Goblin health " << goblin.getHealth() << endl;

    spider.applyDamage(goblin);
    cout << "attack on goblin " << goblin.getHealth() << endl;

}