#include <iostream> 	// header allows for console input and output
#include <string>		// allows for strings to be used
using namespace std;	// uses the standard C++ namespace (avoids std::) 

int main()
{
	// char allows for a single character in single quotes ''
	char letter1 = 'A';
	char letter2 = 'B';
	
	cout << letter1 << " " << letter2 << endl;
	
	// use ASCII references for characters
	char letter3 = 72; 	// this is a 'H'
	char letter4 = 73;	// this is an 'I'
	
	cout << letter3 << letter4 << endl;
	
	// string allows for multiple characters in double quotes ""
	string sentence = "This is more C++!";
	string sentence2 = "C++ is different from Python!";
	
	cout << sentence << endl;
	cout << sentence2 << endl;
}
