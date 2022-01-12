#include <iostream>
using namespace std;

int main()
{
	/*
		do-while loops are posttest loops
		
		structure:
			do
			{
				statement(s);
			}while(condition);
			
		** do while loops execute AT LEAST ONCE before checking the condition **	
	*/
	
	int total = 0;
	int number;	
	
	do
	{
		// ask the user to enter a number
		cout << "\nenter a number, enter a negative number or 0 to stop: ";
		cin >> number;
		
		// add on to the running total only if the number is positive
		if(number > 0)
			total += number; // same as total = total + number;
		
		// display the current total of all numbers entered
		cout << "Current Total: " << total << endl;	
	}while(number > 0);
}

