#include <iostream>
using namespace std;

int main()
{
	/*
		multiple alternative decision structures have multiple forms -
		this program demonstrates if / else if statements
		
		structure of if / else if statements:
			
				if(condition)
				{
					statement(s); // execute if the expression is true
				}
				else if(condition)
				{
					statement(s); // execute if the expression is true	
				}
				else
				{
					statement(s); // execute when none of the above expressions are true
				}
				
		** you can have as many else ifs between an if and an else as you need **
	*/	
	
	// declare two variables to hold numbers to be input by the user
	int a, b;
	
	// ask the user to enter the numbers
	cout << "Enter a number: ";
	cin >> a;
	cout << "Enter another number: ";
	cin >> b;
	
	// use an if / else if to tell the relationship between the two numbers
	if(a > b)
	{
		// if the first number is greater than the second
		cout << a << " is greater than " << b;
	}
	else if(b > a)
	{
		// if the second number is greater than the first
		cout << b << " is greater than " << a; 
	}
	else
	{
		// otherwise, the numbers must be equal
		cout << a << " is equal to " << b;
	}		
}

