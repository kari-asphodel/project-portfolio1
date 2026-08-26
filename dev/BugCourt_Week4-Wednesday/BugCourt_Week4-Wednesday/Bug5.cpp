#include <fstream>

void Player::save()
{
    std::ofstream outputFile("save.txt");

    outputFile << name << "\n";
    outputFile << health << "\n";
    outputFile << gold << "\n";
    outputFile.close();
}

void Player::load()
{
    std::ifstream inputFile("save.txt");

    inputFile >> name;
    inputFile >> gold;
    inputFile >> health;
    inputFile.close();
}