#include <iostream> 	// header allows for console input and output
using namespace std;	// uses the standard C++ namespace (avoids std::) 

int main()
{
	// floats / doubles hold numbers with decimals
	double num; // variable named num that holds numbers with decimal places
	num = 1; // storing the value of 1 into num
	// display the value of num
	cout << "num = " << num << endl;
	
	// declaration using intiialization
	double num2 = 2; 	// declares a variable named num2 and initializes
					// the value to 2
					
	// display the value of num2
	cout << "num2 = " << num2 << endl;
	
	// a variable to hold an answer
	double answer;
	
	// answer holds the value of adding the num and num2 variables together
	answer = num + num2;
	cout << "num + num2 = " << answer << endl;
	
	// answer holds the value of subracting the num2 from num 
	answer = num - num2;
	cout << "num - num2 = " << answer << endl;
	
	// answer holds the value of multiplying the num and num2 variables together
	answer = num * num2;
	cout << "num * num2 = " << answer << endl;
	
	// answer holds the value of dividing num by num2
	answer = num / num2;
	cout << "num / num2 = " << answer << endl;
	
	// answer holds the value of dividing num2 by num
	answer = num2 / num;
	cout << "num2 / num = " << answer << endl;
}
