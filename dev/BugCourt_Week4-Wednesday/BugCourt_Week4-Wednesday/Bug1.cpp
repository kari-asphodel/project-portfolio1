#include <iostream>

int main()
{
    int choice = 0;
    std::string input;
    while (choice != 3)
    {
        std::cout << "1. Explore\n";
        std::cout << "2. Inventory\n";
        std::cout << "3. Exit\n";
        std::cout << "Choice: ";

        std::getline(std::cin, input);
        try {
            choice = std::stoi(input);
            if (choice == 1)
            {
                std::cout << "You enter the crypt.\n";
            }
            else if (choice == 2)
            {
                std::cout << "Your inventory is empty.\n";
            }
        }
        catch (...)
        {
            std::cout << "Please enter a number from 1 to 3: ";
        }

        
    }

    return 0;
}