#include <iostream>
using namespace std;

int main()
{
	/*
		if statements are single alternative decision structures
		
		structure of an if statement:
		
			if(condition)
			{
				statement(s);	
			}
	
		** statements will execute only if the condition is true **
		** curly braces are required if you have more than one statement that will 
		apply to the condition being true **
		
		boolean expressions are built using relational operators
			> greater than
			< less than 
			>= greater than or equal to
			<= less than or equal to
			== is equal to (don't confuse with = )
			! logical not (flips the value of a boolean expression)
			!= is not equal to
			&& / and - logical and (only true when both sides of the expression are true)
			|| / or - logical or (only false when both sides of the expression are false)
	*/
	
	// declare a value to be input by the user
	int number;
	
	// ask the user to enter a number
	cout << "Enter a number, any number: ";
	// get the input of the number
	cin >> number;
	
	// if statement that displays a message only if the number is even
	if(number % 2 == 0)
	{
		// message will only display if the number is evenly divisible by 2
		cout << "The number you entered is EVEN! \n\n";
	}
	
	// display the number the user entered
	cout << "You entered the number: " << number; 
}
