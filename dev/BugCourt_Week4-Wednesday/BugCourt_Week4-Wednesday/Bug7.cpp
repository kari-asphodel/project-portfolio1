#include <iostream>
void Bug7()
{
    if (choice < 1 || choice > 4)
    {
        std::cout << "Invalid choice.\n";
    }
    else if (choice == 1)
    {
        addItem();
    }
    else if (choice == 2)
    {
        removeItem();
    }
    else if (choice == 3)
    {
        displayItems();
    }
    else if (choice == 5)
    {
        running = false;
    }
}