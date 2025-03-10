//Lab7-4.cpp - displays the average electric bill
//Created/revised by Karlie Cradock on 3/9/25

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double bill = 0.0;
	double total = 0.0;
	double average = 0.0;
	int numBills = 0;
	cout << "Bill for month 1: ";
	cin >> bill;
	while (bill != -1)
		{
			total = total + bill;
			numBills = numBills + 1;
			cout << "Bill for month " << numBills + 1 << ": ";	
			cin >> bill;
		} //end while
	if (numBills > 0)
	{ average = total / numBills;
	cout << fixed << setprecision(2);
	cout << "Average bill: $" << average << endl;
	}
else cout << "No bills entered." << endl;
	//end if
	return 0;
}	//end of main function