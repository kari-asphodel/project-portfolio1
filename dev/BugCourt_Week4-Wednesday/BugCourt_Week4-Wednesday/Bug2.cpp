#include <iostream>
void Bug2()
{
    switch (choice)
    {
    case 1:
        std::cout << "A potion was used.\n";
        health += 10;
        break;
    case 2:
        std::cout << "The player fled.\n";
        running = false;
        break;

    default:
        std::cout << "Invalid choice.\n";
    }
}