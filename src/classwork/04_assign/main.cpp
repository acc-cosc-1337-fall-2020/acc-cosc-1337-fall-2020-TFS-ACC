//write includes statements
#include "loops.h"
//write using statements for cin and cout
using namespace std;
/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	int factori; 
	char cont = 'Y';

	do{

		int choice = 0;

		while( choice >= 11 || choice <= 0 ) {	
	
			cout << "Please enter a number between 1 and 10: " ;

			cin >> choice;

		}
	
		factori = factorial(choice);

		cout << "The factorial of " << choice << " is " << factori << "\n";

		cout << "would you like to enter another number? (Y/n): ";
		cin >> cont; 

	} while (cont == 'y' || cont == 'Y');

	return 0;
}