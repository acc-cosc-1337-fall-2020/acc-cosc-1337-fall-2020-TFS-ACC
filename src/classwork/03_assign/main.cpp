//Write the include statement for decisions.h here
#include "decision.h"
//Write namespace using statements for cout and cin
using namespace std;

int main() 
{
	int grade;

	string if_letter, switch_letter;

	cout << "Please enter your numeric grade:";

	cin >> grade;

	if_letter = get_letter_grade_using_if(grade);

	switch_letter =  get_letter_grade_using_switch(grade);

	cout << switch_letter << "\n";
	cout << if_letter << "\n";

	return 0;
}

