#include "App.h"
// This constructor sets the isRunning boolean to true 
App::App()
{
	isRunning = true;
}
// Starts the task manager and menu loop
void App::Run()
{
	std::cout << "Welcome to the Crypt Keeper Productivity Program.\n";
	std::cout << "Today, we expand the crypt without collapsing it.\n";

	while (isRunning)
	{
		DisplayMenu();

		int choice = GetValidatedInputInRange(1, 8);

		HandleChoice(choice);
	}
	std::cout << "\nGoodbye, may your task list stay only mildly cursed.\n";
}

int App::GetValidatedInputInRange(int min, int max)
{
	std::string input; 
	int number;
	while (true)
	{
		std::getline(std::cin, input);
		try // trys the risky code
		{
			number = std::stoi(input);
			if (number >= min && number <= max)
			{
				return number;
			}
			std::cout << "Invalid input, please enter a number between " << min << " and " << max << ": ";

		}
		catch (...) //catch all for any other input you do not want
		{
			std::cout << "Invalid input, please enter a number between " << min << " and " << max << ": ";
		}
	}
}

Priority App::GetPriorityFromUser()
{
	std::cout << "\nChoose a task priority:\n";
	std::cout << "1. Low\n";
	std::cout << "2. Medium\n";
	std::cout << "3. High\n";
	std::cout << "Choose and option between 1 and 3: ";;
	int choice = GetValidatedInputInRange(1, 3);
	Priority usersChoice;
	switch (choice)
	{
	case 1:
		usersChoice = Priority::Low;
		break;
	case 2:
		usersChoice = Priority::Medium;
		break;
	case 3:
		usersChoice = Priority::High;
		break;
	}
	return usersChoice;
}

// displays menu options and asks for user input
void App::DisplayMenu() const
{
	std::cout << "\n ==== CRYPT KEEPER ====\n";
	std::cout << "1. Add Task\n";
	std::cout << "2. View Active Tasks\n";
	std::cout << "3. Complete Task\n";
	std::cout << "4. View Completed Tasks\n";
	std::cout << "5. View Progress Summary\n";
	std::cout << "6. Sort Active Tasks by Priority\n";
	std::cout << "7. Filter Active Tasks by Priority\n";
	std::cout << "8. Exit\n";
	std::cout << "Choose an option between 1 and 8: ";
}
// Handling whatever option the user selects
void App::HandleChoice(int choice)
{
	std::string taskTitle; // variable for case 1
	int taskNumber; // variable for case 3
	Priority priority;// variable for case 1
	std::string category;//variable for case 1
	Priority filteredPriority; // variable for case 7

	switch (choice) // looks at choice to determine what case to run
	{
	case 1:
		// Add Task
		std::cout << "\nEnter the task title: ";
		std::getline(std::cin, taskTitle);
		priority = GetPriorityFromUser();
		std::cout << "\nEnter the task category, such as Code, Design, Testing, or Docs: ";
		std::getline(std::cin, category);
		manager.AddTask(taskTitle, priority, category);
		break;
	case 2:
		// View Tasks
		manager.ViewActiveTasks();
		break;
	case 3:
		// complete tasks
		if (manager.GetActiveTaskCount() == 0)
		{
			std::cout << "\nThere are no active tasks to complete.\n";
			return;
		}
		manager.ViewActiveTasks();
		std::cout << "\nEnter the task number to completed:\n";
		taskNumber = GetValidatedInputInRange(1, manager.GetActiveTaskCount());
		manager.CompleteTask(taskNumber - 1);
		break;
	case 4:
		manager.ViewCompletedTasks();
		break;
	case 5:
		manager.DisplaySummary();
		break;
	case 6:
		manager.SortActiveTasksByPriority();
		break;
	case 7:
		std::cout << "\nChoose a priority to filter by.";
		filteredPriority = GetPriorityFromUser();
		manager.ViewTasksByPriority(filteredPriority);
		break;
	case 8: 
		isRunning = false;
		std::cout << "\nThe crypt has been sealed. Goodbye\n";
		break;
	default:
		std::cout << "\nThat option does not exist in this crypt.\n";
		break;
	}
}