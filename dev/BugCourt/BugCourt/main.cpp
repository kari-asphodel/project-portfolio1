#include <iostream>
#include <vector>
void Case1()
{
    int health = 100;

    if (health == 0)
    {
        std::cout << "You have died.\n";
    }
}
void Case2()
{
    while (true)
    {
        std::cout << "1. Exit\n";

        int choice;
        std::cin >> choice;

        if (choice == 1)
        {
            std::cout << "Goodbye!\n";
            break;
        }
    }
}
void Case3()
{
    std::vector<int> scores = { 10, 20, 30 };

    for (int i = 0; i < scores.size(); i++)
    {
        std::cout << scores[i] << "\n";
    }
}
void Case4()
{
    int gold = 100;

    std::cout << gold << "\n";

}
void Case5()
{
    std::vector<std::string> inventory;

    inventory.push_back("Sword");

    std::cout << inventory[0];
    inventory.clear();
}
void Case6()
{
    int health = 50;

    while (health < 100)
    {
        std::cout << "Healing...\n";
        health++;
    }
}
void Case7()
{
    unsigned int dragons = 5;

    dragons += 10;

    std::cout << dragons;
}
void Case8()
{
    std::cout << "1. Play\n";
    std::cout << "2. Exit\n";
    std::cout << "7. Hint something crazy happens....\n";


    if (choice == 7)
    {
        openSecretShop();
    }
}
void Case9()
{
    Potion* potion = new Potion();

    potion->drink();
    delete potion;
}
void Case10()
{
    std::string input;
    int choice;

    std::cin >> input;
    choice = stoi(input);
    std::cout << "You chose: " << choice;
}
int main()
{
    Case1();
    //Case2();
    //Case3();
    //Case4();
    //Case5();
    //Case6();
    //Case7();
    //Case8();
    //Case9();
    //Case10();
}