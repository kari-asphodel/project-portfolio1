#include <string>

class Weapon
{
public:
    Weapon(std::string name, int damage);

    std::string GetName();
    int GetDamage();

private:
    std::string name;
    int damage;
};

/*
#include "Weapon.h"

Weapon::Weapon(std::string name, int damage)
{
    this->name = name;
    this->damage = damage;
}

std::string Weapon::GetName()
{
    return name;
}

int Weapon::GetDamage()
{
    return damage;
}*/