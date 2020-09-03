//Write the include statement for types.h here
#include "types.h"
//Write include for capturing input from keyboard and displaying output to screen
#include <iostream>
using namespace std;

int main() 
{
	int num, result, num1;
	
	num1 = 4;

	cout << "enter a number:";
	cin >> num;

	result = multiply_numbers(num);

	cout << result << "\n"; 

	result = multiply_numbers(num1);

	cout << result;

	return 0;
}

