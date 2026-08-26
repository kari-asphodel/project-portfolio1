#include <iostream>
#include <vector>

void Bug3()
{
    std::vector<std::string> monsters =
    {
        "Skeleton",
        "Vampire",
        "Gerald"
    };

    for (int i = 0; i < monsters.size(); i++)
    {
        std::cout << monsters[i] << "\n";
    }
}