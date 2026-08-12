#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> scores;

    while (true)
    {
        cout << "1. Add Score\n";
        cout << "2. Show Scores\n";
        cout << "3. Exit\n";

        int choice;
        cin >> choice;

        if (choice == 1)
        {
            int score;
            cout << "Score: ";
            cin >> score;

            scores.push_back(score);
        }

        if (choice == 2)
        {
            for (int i = 0; i <= scores.size(); i++)
            {
                cout << scores[i] << endl;
            }
        }

        if (choice == 3)
        {
            exit(0);
        }
    }
}