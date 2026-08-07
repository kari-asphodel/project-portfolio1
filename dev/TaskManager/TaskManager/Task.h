#pragma once
#include <string>
// this class manages the single task object
class Task
{
private:
	std::string title;
	bool completed;

public:
	Task(std::string taskTask);

	std::string GetTitle()const;
	bool IsCompleted() const;

	void CompleteTask();
};

