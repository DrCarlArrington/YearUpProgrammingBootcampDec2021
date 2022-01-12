#include <iostream> // header for input and output
#include <iomanip>	// header that allows for additional output formatting
using namespace std;

int main()
{
	/*
		in order to format a decimal number to show a certain number
		of decimal places, use setprecision
		
		cout << setprecision(number) << showpoint << fixed;
		
		this line formats decimal numbers to show the number of decimal places
		in fixed point notation show that the decimal places are always
		displayed
		
		ONLY AFFECTS DOUBLE AND FLOAT DATA
	*/
	
	cout << 15.55555555 << endl;
	cout << 10.1 << endl;
	cout << 89.99993 << endl << endl;
	
	cout << setprecision(2) << showpoint << fixed;
	// all lines below will show 2 decimal places
	cout << 15.55555555 << endl;
	cout << 10.1 << endl;
	cout << 89.99993 << endl << endl;
	
	// to change the number of decimal places shown, do another setprecision
	cout << setprecision(4) << showpoint << fixed;
	// all lines below will show 2 decimal places
	cout << 15.55555555 << endl;
	cout << 10.1 << endl;
	cout << 89.99993 << endl << endl;
	
	// to change the number of decimal places shown, do another setprecision
	cout << setprecision(0);
	// all lines below will show 2 decimal places
	cout << 15.55555555 << endl;
	cout << 10.1 << endl;
	cout << 89.99993 << endl;
}
