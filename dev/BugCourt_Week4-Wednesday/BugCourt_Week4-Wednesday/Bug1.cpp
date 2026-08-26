#include <iostream>

int main()
{
    int choice = 0;

    while (choice != 3)
    {
        std::cout << "1. Explore\n";
        std::cout << "2. Inventory\n";
        std::cout << "3. Exit\n";
        std::cout << "Choice: ";

        std::cin >> choice;

        if (choice == 1)
        {
            std::cout << "You enter the crypt.\n";
        }
        else if (choice == 2)
        {
            std::cout << "Your inventory is empty.\n";
        }
    }

    return 0;
}