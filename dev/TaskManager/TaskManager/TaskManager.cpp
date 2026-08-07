#include "TaskManager.h"
#include <iostream>
//Adds the task to the vector and provides feedback to the user
void TaskManager::AddTask(std::string title)
{
	tasks.push_back(Task(title));
	std::cout << "\nTask added to the crypt.\n";
}
// showing the tasks in the vector, first checks if empty to not throw an error
void TaskManager::ViewTasks() const
{
	std::cout << "\n==== TASK CRYPT ====\n";
	if (tasks.empty())
	{
		std::cout << "The crypt is empty. No tasks haunt you...yet...\n";
		return;
	}
	for (int i = 0; i < tasks.size(); i++)
	{
		std::cout << i + 1 << ". "
			               << tasks[i].GetTitle()
			               << "\n";
	}
}