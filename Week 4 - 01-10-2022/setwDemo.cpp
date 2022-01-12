#include <iostream> // header for input and output
#include <iomanip>	// header that allows for additional output formatting
using namespace std;

int main()
{
	/*
		setw() allows for you to set the number of spaces your text
		will fill
		
		you can add 'left' or 'right' to align your text
	*/
	
	cout << setw(100) << right << "Right aligned" << endl;
	cout << setw(100) << left << "Left aligned" << "Happy" << endl;
}
