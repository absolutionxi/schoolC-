#include <iostream>
#include <string>

// cppreference.com
/*

Write a program to convert the time from 24-hour notation to 12-hour notation and vice versa.

Your program must be menu driven, giving the user the choice of converting the time between the two notations. Furthermore, your program must contain at least the following function:
a function to convert the time from 24-hour notation to 12-hour notation, a function to convert the time from 12-hour notation to 24-hour notation,
a function to display the choices, function(s) to get the input, and function(s) to display the results. (For 12-hour time notation, your program must display AM or PM.)
1:25:15 PM/AM -> 13:25:15
13:25:15 -> 1:25:15 PM/AM
*/

void menu(int input);
void twentyfourhour(float seconds, float minute, float hour, int input);
void twelvehour(float seconds, float minute, float hour, int input);

int main()
{
	float seconds = 0;
	float minute = 0;
	float hour = 0;
	int input = 0;

	menu(input);
	twelvehour(seconds, minute, hour, input);
	twentyfourhour(seconds, minute, hour, input);

	system("Pause");
	return 0;
}


void menu(int input)
{
	std::cout << "12 hour or 24 hour conversion?\n 1 for 12 hour, 2 for 24 hour, and 3 to exit.\n";
	std::cin >> input;
	if (input = 3)
	{
		return;
	}
}



void twentyfourhour(float seconds, float minute, float hour, int input)
{
	// 18:30:06 -> 6:30:06PM	
	std::string sundown;
	if (input = 1)
	{
		std::cout << "enter the hour in 24hour notation (1 = 13, 5 = 18, etc.) \n";
		std::cin >> hour;
		std::cout << "enter the minute. \n";
		std::cin >> minute;
		std::cout << "enter the second. \n";
		std::cin >> seconds;
		if (hour > 13)
		{
			sundown = "PM";
		}
		std::cout << hour - 12 << ":" << minute << ":" << seconds << sundown << std::endl;
	}
}

void twelvehour(float seconds, float minute, float hour, int input)
{
	//  6:30:06PM -> 18:30:06 
	if (input = 2)
	{
		std::cout << "enter the hour in 24hour notation (1 = 13, 5 = 18, etc.) \n";
		std::cin >> hour;

		std::cout << "enter the minute. \n";
		std::cin >> minute;
		std::cout << "enter the second. \n";
		std::cin >> seconds;
		std::cout << hour + 12 << ":" << minute << ":" << seconds << std::endl;
	}
}

