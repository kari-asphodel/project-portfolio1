#include <iostream>

int main()
{
    int health = 0;
    int potions = 2;

    if (health > 0 || potions > 0)
    {
        std::cout << "The journey continues.\n";
    }
    else
    {
        std::cout << "The darkness wins.\n";
    }

    return 0;
}
//A.The journey continues. - THIS ONE
//B.The darkness wins.
//C.Both messages
//D.Nothing