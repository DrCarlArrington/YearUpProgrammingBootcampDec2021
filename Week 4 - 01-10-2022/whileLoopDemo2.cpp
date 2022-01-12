#include <iostream>
using namespace std;

int main()
{
	int repeat;
	
	// while loops can be used to validate input
	cout << "Enter a number between 1 and 5: ";
	cin >> repeat;
	
	// when validating, always check for bad data
	// in this case, we only loop if the value is less than 1 or greater than 5
	while(repeat < 1 or repeat > 5)
	{
		// display an error message, then get another input
		cout << "\nERROR - NUMBER ENTERED IS NOT BETWEEN 1 AND 5. TRY AGAIN! \n";
		cout << "Enter a number between 1 and 5: ";
		cin >> repeat;
	}
	
	// once valid data is entered, display the message
	while(repeat > 0)
	{
		cout << "This is C++" << endl;
		// update the condition by changing the value of repeat (subtract 1 from repeat)
		repeat--;
	}
}

