#include "Task.h"
// Creates the individual task
Task::Task(std::string taskTitle)
{
	title = taskTitle;
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