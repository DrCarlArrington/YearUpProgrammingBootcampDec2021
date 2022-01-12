#include <iostream>
using namespace std;

int main()
{
	// cin >> for primitives (int, float, double, etc)
	// getline(cin, variable) for strings 
	
	// declare strings
	string name, college;
	
	// declare integer
	int age;
	
	// input of the user's name
	cout << "What is your name? ";
	getline(cin, name);
	
	// input of the user's age
	cout << name << ", how old are you? ";
	cin >> age;
	
	// when going from the input of a primitive
	// (int, float, double, etc.)
	// to a non-primitive input (string)
	// clear the keyboard buffer
	cin.ignore();
	
	// input of the user's college
	cout << "What college do you attend? ";
	getline(cin, college);
	
	// display the information
	cout << endl << "Name: \t " << name << endl;
	cout << "Age: \t " << age << endl;
	cout << "College: " << college;
}
