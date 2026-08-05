#pragma once
#include "TaskManager.h"
#include <iostream>
class App
{
private:
	TaskManager manager;
	bool isRunning;

	void DisplayMenu() const;
	void HandleChoice(int choice);

public:
	App();
	void Run();
};

