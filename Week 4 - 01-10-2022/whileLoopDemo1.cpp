#include <iostream>
using namespace std;

int main()
{
	/*
		while loops are pretest loops
		
		structure:
			while(condition)
			{
				statement(s);
			}
			
		** at least one of the statements needs to update the condition **
		** if you don't you can create an infinite loop **
		
		while loops can execute from 0 up to many times
	*/	
	
	int repeat = 5; // variable used to control the loop below
	
	// while loop example
	while(repeat > 0) // test to see if the value of repeat is greater than 0
	{
		cout << "This is C++" << endl;	
		// update the condition by changing the value of repeat (subtract 1 from repeat)
		repeat = repeat - 1;
		
		// using combined assignment
		//repeat -= 1; // same as repeat = repeat - 1;
			 // can be used with +=, *=, /=, %= (only for ints)
		
		// using post or pre decrement
		//repeat--; // (post) same as repeat = repeat - 1;
		//--repeat; // (pre) same as repeat = repeat - 1
					// to increment, use ++
	}
}
