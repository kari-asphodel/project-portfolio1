#include "TaskManager.h"
#include <iostream>
//Adds the task to the vector and provides feedback to the user
void TaskManager::AddTask(std::string title, Priority priority, std::string category)
{
	activeTasks.push_back(Task(title, priority, category));
	std::cout << "\nTask added to the crypt.\n";
}
// showing the tasks in the vector, first checks if empty to not throw an error
void TaskManager::ViewActiveTasks() const
{
	DisplayTaskList(activeTasks, "ACTIVE TASKS");
}
// showing the tasks in the vector, first checks if empty to not throw an error
void TaskManager::ViewCompletedTasks() const
{
	DisplayTaskList(completedTasks, "COMPLETED TASKS");
}

void TaskManager::CompleteTask(int index)
{
	if (index >= 0 && index < activeTasks.size())
	{
		activeTasks[index].CompleteTask();
		completedTasks.push_back(activeTasks[index]);
		activeTasks.erase(activeTasks.begin() + index);
		std::cout << "\nTask completed and moved to the completed crypt.\n";
	}
	else
	{
		std::cout << "\nInvalid task number. That task does not exist in the realm.\n";
	}
}

int TaskManager::GetActiveTaskCount() const
{
	return activeTasks.size();
}

void TaskManager::DisplaySummary() const
{
	std::cout << "\n==== CRYPT SUMMARY ====\n";
	std::cout << "Active Tasks: "
		<< activeTasks.size()
		<< "\n";
	std::cout << "Completed Tasks: "
		<< completedTasks.size()
		<< "\n";
	std::cout << "Total Tasks Created: "
		<< activeTasks.size() + completedTasks.size()
		<< "\n";
}

void DisplayTaskList(const std::vector<Task>& taskList, std::string heading) const
{
	std::cout << "\n==== "<< heading <<" ====\n";
	if (taskList.empty())
	{
		std::cout << "No tasks found. The crypt is empty\n";
		return;
	}
	for (int i = 0; i < taskList.size(); i++)
	{
		std::cout << i + 1 << ". "
			<< taskList[i].GetTitle()
			<< " | Priority: "
			<< taskList[i].GetPriorityText()
			<< " | Category: "
			<< taskList[i].GetCategory()
			<< "\n";
	}
}
