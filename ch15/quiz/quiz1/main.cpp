#include <string>
#include <iostream>

#include "random.h"


class Monster
{
public:
    enum Type {
        Dragon, Goblin, Zombie, maxMonsterTypes
    };

    Monster(Type type, std::string name, std::string roar, int hitpoints)
        : m_type{type}, m_name{name}, m_roar{roar}, m_hitpoints{hitpoints}
        {}
    
    constexpr std::string_view getTypeString() const
    {
       switch (m_type)
       {
        case Dragon:
            return "dragon";
            break;
        case Goblin:
            return "goblin";
            break;
        case Zombie:
            return "zombie";
            break;
       default:
            return "wrong type";
            break;
       } 
    }

    void print() const
    {
        if (m_hitpoints <= 0)
            std::cout << m_name << " the " << getTypeString() << " is dead.";
        else
            std::cout << m_name << " the " << getTypeString() << " says " << m_roar
            << " and has " << m_hitpoints << " health.";
    }
private:
    Type m_type {Zombie};
    std::string m_name {"Nameless"};
    std::string m_roar {"OOAUGH"};
    int m_hitpoints {100};
};

namespace MonsterGenerator {
    constexpr std::string getName(int i) {
        switch (i) {
        case 0:
            return "Smaug";
        case 1:
            return "Steve";
        case 2:
            return "Blonk";
        case 3:
            return "Blerp";
        case 4:
            return "Blurp";
        case 5:
            return "Greenie"; // cr goblin
        default:
            return "Unnamed";
        }
    }
    constexpr std::string getRoar(int i) {
        switch (i) {
        case 0:
            return "I hoard";
        case 1:
            return "OOAUGH";
        case 2:
            return "Bleep";
        case 3:
            return "HE HE HE HA";
        case 4:
            return "*clank*";
        case 5:
            return "*goblin noises*"; // cr goblin
        default:
            return "nothing";
        }
    }
    Monster generate()
    {
        return {static_cast<Monster::Type>(Random::get(0, 3-1)), getName(Random::get(0, 5)), getRoar(Random::get(0,5)),
        Random::get(1, 100)};
    }
}

int main()
{
	Monster m{ MonsterGenerator::generate() };
	m.print();

	return 0;
}
