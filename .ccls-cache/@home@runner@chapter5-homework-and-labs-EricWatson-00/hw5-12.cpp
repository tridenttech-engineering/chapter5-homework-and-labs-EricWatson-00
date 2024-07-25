//hw5-12.cpp - displays the total owed
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{double itemOne=0.0;
 double itemTwo=0.0;
 double amountOwed=0.0;

 cout<<"Input the amount of item one: ";
 cin>>itemOne;
 cout<<"Input the amount of item two: ";
 cin>> itemTwo;

 if (itemOne>itemTwo)
	 amountOwed= itemOne+ (itemTwo*.5);

 else
	 amountOwed=itemTwo+ (itemOne*.5);

 cout<<fixed<<setprecision(2);
 cout<<"The amount owed is: "<<amountOwed<<endl;

	return 0;
}	//end of main function