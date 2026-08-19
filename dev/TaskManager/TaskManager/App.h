#pragma once
#include "TaskManager.h"
#include <iostream>
// This class controls user input, and menu functionality
class App
{
private:
	TaskManager manager;
	bool isRunning;

	void DisplayMenu() const;
	void HandleChoice(int choice);
	int GetValidatedInputInRange(int min, int max);
	Priority GetPriorityFromUser();
public:
	App();
	void Run();
};

