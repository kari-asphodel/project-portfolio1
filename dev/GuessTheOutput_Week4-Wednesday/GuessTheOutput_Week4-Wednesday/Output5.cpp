#include <iostream>

int main()
{
    int choice = 2;

    switch (choice)
    {
    case 1:
        std::cout << "Explore ";
        break;

    case 2:
        std::cout << "Battle ";

    case 3:
        std::cout << "Escape ";
        break;

    default:
        std::cout << "Wait ";
    }

    return 0;
}

//A.Battle
//B.Battle Escape
//C.Escape
//D.Battle Wait