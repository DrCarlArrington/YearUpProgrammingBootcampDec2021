#include <iostream>
using namespace std;

int main()
{
	/*
		if/else statements are dual alternative decision structures:
		
		structure of an if / else statement:
			
				if(condition)
				{
					statement(s); // only execute if the condition is true
				}
				else
				{
					statement(s); // execute if the condition is not true
				}
	*/	
	
	// declare a value to be input by the user
	int number;
	
	// ask the user to enter a number
	cout << "Enter a number, any number: ";
	// get the input of the number
	cin >> number;
	
	// if / else statement that displays a message based on whether the number is even or odd
	if(number % 2 == 0)
	{
		// message will only display if the number is evenly divisible by 2
		cout << "The number you entered is EVEN! \n\n";
	}
	else
	{
		// message will only display if the number is not evenly divisible by 2
		cout << "The number you entered is ODD! \n\n";
	}
	
	// display the number the user entered
	cout << "You entered the number: " << number;
}

