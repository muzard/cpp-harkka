#ifndef MONSTER
#define MONSTER

#include <string>
#include <iostream>

enum MonsterType
{
    orc,
    ogre,
    dragon,
    giantSpider,
    slime,
};

struct Monster
{
    MonsterType type {};
    std::string name {"nameless"};
    int health {100};
};

std::string_view monsterToString(Monster& monster)
{
    using enum MonsterType;

    switch (monster.type)
    {
        case orc: return "orc";
        case ogre: return "ogre";
        case dragon: return "dragon";
        case giantSpider: return "giant spider";
        case slime: return "slime";
        default: return "mysterious monster";
    }
}

void printMonster(Monster& monster)
{
    using std::cout;

    cout << "This " << monsterToString(monster) << " is called " << monster.name
    << " and has " << monster.health << " health left.\n";
}

#endif
