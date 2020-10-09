//write include statements
#include "dna.h"
//write using statements
using namespace std;
/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	char cont = 'Y';


	do {

		int choice;
		int choicevalid = 0;
		string dnastring;
		string complement;
		double content;

		while (choicevalid == 0){

			cout << "enter 1 for Get GC Content, or 2 for Get DNA Complement.: ";
			cin >> choice;

			if (choice == 1 || choice == 2) {
				choicevalid = 1;
			}
		

		}

		if (choice == 1){

			cout << "GC content chosen." << "\n" << "Please enter your DNA string.: ";
			cin >> dnastring;

			content = get_gc_content(dnastring);

			cout << "The GC content of this string is: " << content << "\n";

		} else if (choice == 2){

			cout << "DNA complement chosen." << "\n" << "Please enter your DNA string.: ";
			cin >> dnastring;

			complement = get_dna_complement(dnastring);

			cout << "The DNA complement of this string is: " << complement << "\n";

		}


		cout << "Would you like to evaluate another string? (Y/n): ";
		cin >> cont;

	} while (cont == 'y' || cont == 'Y');


	return 0;
}