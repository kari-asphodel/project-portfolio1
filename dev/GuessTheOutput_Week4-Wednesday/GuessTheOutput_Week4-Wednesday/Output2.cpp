#include <iostream>

int main()
{
    int total = 0;

    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            continue;
        }

        total += i;
    }

    std::cout << total << "\n";

    return 0;
}
//A. 15
//B. 12 - THIS ONE
//C. 9
//D.Infinite loop