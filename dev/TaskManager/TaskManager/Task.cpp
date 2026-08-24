#include "Task.h"
// Creates the individual task
Task::Task(std::string taskTitle, Priority taskPriority, std::string taskCategory, bool taskCompleted)
{
	title = taskTitle;
	priority = taskPriority;
	category = taskCategory;
	completed = taskCompleted;
}

Task::Task()
{
	title = "";
	priority = 1;
	category = "General";
	completed = false;
}
// getter to access the title
std::string Task::GetTitle() const
{
	return title;
}
// getter to access if the task is completed
bool Task::IsCompleted() const
{
	return completed;
}
// method to set the completed boolean to true when task is completed
void Task::CompleteTask()
{
	completed = true;
}

std::string Task::GetCategory() const
{
	return category;
}
Priority Task::GetPriority() const
{
	return priority;
}

std::string Task::GetPriorityText() const
{
	if (priority == Priority::High)
	{
		return "High";
	}
	else if (priority == Priority::Medium)
	{
		return "Medium";
	}
	return "Low";
}

std::string Task::ToTextLine() const
{
	std::string completedText = completed ? "1" : "0";
	std::string priorityText = GetPriorityText(); 
	return title + "|" + priorityText + "|" + category + "|" + completedText;
}