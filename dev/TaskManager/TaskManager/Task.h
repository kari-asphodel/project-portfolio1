#pragma once
#include <string>
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

