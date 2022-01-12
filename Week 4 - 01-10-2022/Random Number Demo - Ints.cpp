#include <iostream>		// allows for console input and output
#include <iomanip>		// allows for output formatting
#include <cstdlib>		// includes library files including the random number
						// generator
#include <ctime>		// allows for the use of the time functions
using namespace std;

int main()
{
	// when handling random data, first seed a time in the program
	srand(time(0));	// ensures that the numbers generated are different
					// each time the program runs
	
	/*
		the second step is to generate the random number(s):
			for integers, follow this formula:
			
				min + rand() % max
				
			to generate a number between 1 and 50:
				1 + rand() % 50;
	*/
	
	// variable that holds a number
	int number;
	
	// generate a value that is between 1 and 1000
	number = 1 + rand() % 1000;
	
	// display the random number that was generated
	cout << "Number Generated: " << number;
}
