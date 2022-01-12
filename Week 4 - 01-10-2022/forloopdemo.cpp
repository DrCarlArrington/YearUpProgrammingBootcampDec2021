#include <iostream>
using namespace std;

int main()
{
	/*
		for loops are count controlled loops
		designed to execute a set number of times
		
		structure:
			for(start; condition (end); amount to change)
			{
				statement(s);
			}
			
		** avoid updating the loop control variable in the body of the loop *
		* loop control variable only has the lifespan of the loop if declared in the header *

	
	int repeat = 5; // variable used to control the loop below
	
	while(repeat > 0)
	{
		cout << "This is C++" << endl;
		// update the condition by changing the value of repeat (subtract 1 from repeat)
		repeat--;
	}
	
	// re-written as a for loop
	for(int repeat = 5; repeat > 0; repeat--)
	{
		cout << "This is C++" << endl;
	}
	*/
	
	// re-written using increment
	for(int repeat = 0; repeat < 5; repeat++)
	{
		cout << "This is C++" << endl;
	}

}

