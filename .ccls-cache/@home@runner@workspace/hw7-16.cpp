//hw7-16.cpp - displays three tip amounts
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double bill = 0.0;
	double tip = 0.0;
	double rate = 0.0;

	cout << "Bill amount: ";
	cin >> bill;

	cout << "Rate: ";
	cin >> rate;
	tip = bill * rate;
	cout << fixed << setprecision(2);

	while (rate <= 0.2)
		rate = rate + 0.05;
		} //end while
cout << fixed << setprecision(2);
cout << "Tip: $" << tip << endl;
	return 0;
}	//end of main function
