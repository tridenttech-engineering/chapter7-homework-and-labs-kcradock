//Lab7-6.cpp - calculates and displays the average price
//Created/revised by Karlie Cradock on 3/9/25

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int numItems = 0;
	double price = 0.0;
	double total = 0.0;
	double average = 0.0;

	cout << "Price (negative number to end): ";
	cin >> price;
	while (price >= 0.0)
		{
			numItems = numItems + 1;
			total = total + price;
			cout << "Next price:(negtive number to end): ";
				cin >> price;
		} //end while

	if (numItems > 0)
		average = total / numItems;
	else 	
		average = 0.0;
	//end if
	cout << fixed << setprecision(2) << endl;
	cout << "Average price: $" << average << endl;
	return 0;
}	//end of main function