#pragma once
#include <string>
// this class manages the single task object

enum class Priority
{
	Low = 1,
	Medium,
	High
};
class Task
{
private:
	std::string title;
	Priority priority;
	std::string category;
	bool completed;

public:
	Task(std::string taskTask, Priority taskPriority, std::string taskCategory, bool taskCompleted = false);
	Task();

	std::string GetTitle()const;
	Priority GetPriority() const;
	std::string GetPriorityText() const;
	std::string GetCategory() const;
	bool IsCompleted() const;

	void CompleteTask();

	std::string ToTextLine() const;
};

