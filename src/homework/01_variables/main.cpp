//write include statements
#include <iostream>
#include "variables.h"
//write namespace using statement for cout
using namespace std;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount, tip_rate, tip_amount, tax_amount, total;

	cout << "please enter meal amount: ";
	cin >> meal_amount;

	tax_amount = get_sales_tax_amount(meal_amount); 

	cout << "please enter tip rate: ";
	cin >> tip_rate;

	tip_amount = get_tip_amount(meal_amount, tip_rate);

	total = tip_amount + tax_amount + meal_amount;

	cout << "Meal Amount: " << "\t" << meal_amount << "\n" << 
	"Sales Tax: " << "\t" << tax_amount << "\n" << 
	"Tip Amount: " << "\t" << tip_amount << "\n" << 
	"Total: " << "\t" << total << "\n";

	return 0;
}
