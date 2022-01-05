#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name, city;
	
	cout << "Enter your first and last name: ";
	//cin >> name;
	getline(cin, name); // same as cin >> name, except it allows for spaces
	cout << "Enter the city you live in: ";
	//cin >> city;
	getline(cin, city);
	
	cout << endl << "Hello " << name << "!" << endl;
	cout << "You live in " << city;	
}
