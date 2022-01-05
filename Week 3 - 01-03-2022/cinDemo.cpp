#include <iostream> // allows for console input and output
using namespace std;

int main()
{
	//in order to do input in c++, use the cin object
		// cin is short for console input
		
		/*
			Input requires two parts:
				1. prompt - cout statement that tells what type of information
							the user should be inputting
				2. cin statement
		*/
		
	int number;	// variable to hold the value of a number
	
	// use a cout statement to prompt for the input of the number
	cout << "Enter a number: ";
	// use a cin statement to read a value from the keyboard and store into the variable number
	cin >> number;
	
	// display the value entered
	cout << "You entered the number " << number;
}
