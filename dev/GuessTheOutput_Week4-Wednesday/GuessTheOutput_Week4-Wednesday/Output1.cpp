#include <iostream>
#include <vector>

int main()
{
    std::vector<int> relics = { 3, 7, 2 };

    relics.push_back(5);
    relics[1] += relics[2];

    std::cout << relics[1] << " "
        << relics.size() << "\n";

    return 0;
}

//A. 7 3
//B. 9 4 - THIS ONE
//C. 9 3
//D. 12 4