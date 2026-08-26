#include <iostream>
#include <string>

class Creature
{
private:
    std::string name;
    int health;

public:
    Creature(std::string creatureName, int startingHealth)
        : name(creatureName), health(startingHealth)
    {
        std::cout << name << " awakens. ";
    }

    void takeDamage(int damage)
    {
        health -= damage;

        if (health < 0)
        {
            health = 0;
        }
    }

    void display() const
    {
        std::cout << health << "\n";
    }
};

int main()
{
    Creature cryptRat("Gerald", 8);
    cryptRat.takeDamage(12);
    cryptRat.display();

    return 0;
}
//A.Gerald awakens. - 4
//B.Gerald awakens. 0 - THIS ONE
//C. 8
//D.The code does not compile.