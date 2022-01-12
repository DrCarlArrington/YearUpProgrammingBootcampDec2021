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
			for floats and doubles, follow this formula:
			
				1. generate the float coefficient (the decimal places)
					double f = (double)rand() / RAND_MAX;
				2. use the ranges of the values and the decimal places
					to generate the random number:
					min + f * (max - min);
					
			to generate a value between 1 and 50:
				double f = (double)rand() / RAND_MAX;
				1 + f * (50 - 1);
	*/
	
	// variable that holds a number
	double number;
	
	// generate a value that is between 1 and 1000
	double f = (double)rand() / RAND_MAX;
	number = 1 + f * (1000 - 1);
	
	// display the random number that was generated
	// format the output to show 2 decimal places
	cout << setprecision(2) << showpoint << fixed;
	cout << "Number Generated: " << number;
}
