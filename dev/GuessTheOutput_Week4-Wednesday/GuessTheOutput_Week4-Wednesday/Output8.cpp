#include <iostream>
#include <string>
#include <vector>

class Quest
{
private:
    std::string title;
    bool completed;

public:
    Quest(std::string questTitle)
        : title(questTitle), completed(false)
    {}

    void complete()
    {
        completed = true;
    }

    bool isCompleted() const
    {
        return completed;
    }

    std::string getTitle() const
    {
        return title;
    }
};

int main()
{
    std::vector<Quest> quests;

    quests.push_back(Quest("Find the Key"));
    quests.push_back(Quest("Open the Crypt"));
    quests.push_back(Quest("Feed Gerald"));

    quests[0].complete();
    quests[2].complete();

    int completedCount = 0;

    for (const Quest& quest : quests)
    {
        if (quest.isCompleted())
        {
            completedCount++;
            std::cout << quest.getTitle() << "\n";
        }
    }

    std::cout << "Completed: " << completedCount << "\n";

    return 0;
}
//A.
// Find the Key
// Feed Gerald
// Completed : 2 - THIS ONE

//B.
// Find the Key
// Open the Crypt
// Completed : 2

//C.
// Find the Key
// Feed Gerald
// Completed : 3

//D.The code does not compile.
