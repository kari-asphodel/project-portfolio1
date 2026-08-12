#include <iostream>
#include <vector>
//using namespace std;

int main()
{
    std::vector<int> scores;

    while (true)
    {
        std::cout << "1. Add Score\n";
        std::cout << "2. Show Scores\n";
        std::cout << "3. Exit\n";
        std::cout << "Enter a number between 1 and 3: ";
        try
        {
            std::string input;
            int choice;

            std::cin >> input;

            choice = std::stoi(input);
            break;

        }
        catch (...)
        {
            std::cout << "That option does not exist.";
        }
    }
        if (choice == 1)
        {
            int score;
            std::cout << "Score: ";
            std::cin >> score;

            scores.push_back(score);
        }

        if (choice == 2)
        {
            for (int i = 0; i < scores.size(); i++)
            {
                std::cout << scores[i] << std::endl;
            }
        }

        if (choice == 3)
        {
            std::cout << "Goodbye.";
        }
    
}