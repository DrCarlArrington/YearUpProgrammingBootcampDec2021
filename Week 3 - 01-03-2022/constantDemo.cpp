#include <iostream>
using namespace std;

int main()
{
	// named constant
	const int DAYS_IN_WEEK = 7; // constants must be given a value before they can be used
								// the values do not change while the program is running
	
	// you cannot update the value of a constant
	// DAYS_IN_WEEK = 5; NO NO NOOOOOOOOO
	
	cout << "There are " << DAYS_IN_WEEK << " days in a week";
}
