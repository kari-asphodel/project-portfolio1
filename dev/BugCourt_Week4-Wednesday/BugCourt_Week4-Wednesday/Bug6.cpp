#include <vector>
#include <iostream>

class Inventory
{
private:
    std::vector<std::string> items;

public:
    void addItem(std::string item)
    {
        items.push_back(item);
    }

    void display() const
    {
        for (const std::string& item : items)
        {
            std::cout << item << "\n";
        }
    }
};

void collectRelic(Inventory& inventory)
{
    inventory.addItem("Cursed Crown");
}

int main()
{
    Inventory playerInventory;

    collectRelic(playerInventory);
    playerInventory.display();

    return 0;
}