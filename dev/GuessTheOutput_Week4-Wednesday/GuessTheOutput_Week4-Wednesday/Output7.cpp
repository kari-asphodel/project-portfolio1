#include <iostream>
#include <vector>

int main()
{
    std::vector<int> scores = { 10, 20, 30, 40 };

    scores.erase(scores.begin() + 1);

    for (int score : scores)
    {
        std::cout << score << " ";
    }

    return 0;
}
//A. 10 20 30
//B. 10 30 40
//C. 20 30 40
//D. 10 20 40