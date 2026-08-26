#include <iostream>

void awaken(int power)
{
    power += 10;
    std::cout << power << " ";
}

int main()
{
    int playerPower = 5;

    awaken(playerPower);

    std::cout << playerPower << "\n";

    return 0;
}
//A. 15 15
//B. 5 15
//C. 15 5
//D. 5 5