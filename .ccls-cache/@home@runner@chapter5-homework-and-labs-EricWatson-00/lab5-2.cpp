//lab5-2.cpp - displays the total amount due
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double discountRate=.01;
	const double shipCHG1=.99;
	const double shipCHG2=4.99;
	double amountOwed=0.0;
	char member = ' ';

	cout<< "Amount that is owed before discount and or shipping: ";
	cin>> amountOwed;
	cout<< "Club member? (Y/N): ";
	cin>> member;

	if (toupper(member) =='Y')
		amountOwed -= amountOwed * discountRate;

	if (amountOwed >= 100.0)
		amountOwed += shipCHG1;
	else
		amountOwed += shipCHG2;

	cout<< fixed<< setprecision(2);
	cout<< "Amount owed after shipping and discount: " << amountOwed<<endl;
	

	return 0;
}	//end of main function