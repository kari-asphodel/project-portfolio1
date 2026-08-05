#include <iostream>
#include <vector>

class Player
{
public:
    void Print()
    {
        std::cout << "Player\n";
    }
};
void Problem1()
{
   // Player.Print(); ERROR
    Player player; // FIX
    player.Print(); // FIX
    std::cin.get();
}

void Problem2()
{
    std::vector<int> scores;

   // scores[0] = 100; ERROR
    scores.push_back(100); // FIX

    std::cout << scores[0];
    std::cin.get();
}

void Problem3()
{
    int* number;

    //*number = 5;
    int value = 5;
    *number = &value;

    cout << *number;
    std::cin.get();
}

void Problem4()
{
    int* data = new int;
    delete data;//FIX to move the delete up before overwriting pointer

    data = new int; 

    delete data;// ERROR
    std::cin.get();
}

class Inventory
{
private:
    int* items;

public:
    Inventory()
    {
        items = new int(10);
    }
};
void Problem5()
{
    Inventory a;
    Inventory b = a;
    std::cin.get();
}
class GhostInventory
{
private:
    int* items;

public:
    GhostInventory()
    {
        items = new int(5);
    }

    ~GhostInventory()
    {
        delete items;
    }
};
void Problem6()
{
    GhostInventory a;

    GhostInventory b = a;
    std::cin.get();
}

class MonsterProblem7
{
private:
    int* health;

public:
    MonsterProblem7()
    {
        health = new int(100);
    }

    ~MonsterProblem7()
    {
        delete health;
    }
};

int* Problem8()
{
    int number = 42;

    return &number;
}

void Problem9()
{
    Player* player = new Player();
    player->Print(); // FIX

    delete player;

    //player->Print(); // ERROR
    std::cin.get();
}

class MonsterInventory
{
private:
    int* data;

public:
    MonsterInventory()
    {
        data = new int(5);
    }

    ~MonsterInventory()
    {
        delete data;
    }
};
void Problem10()
{
    MonsterInventory a;

    MonsterInventory b;

    b = a;
}
int main()
{
    Problem1();
    //Problem2();
    //Problem3();
    //Problem4();
    //Problem5();
    //Problem6();
    //Problem7();
    //Problem8();
    //Problem9();
    //Problem10();
}
