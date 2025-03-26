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

	while (rate<=0.2)
			{
				rate += 0.05;
	
			tip = bill * rate;
			cout << fixed << setprecision(2);
			cout << rate *100 << "% tip: ";
			cout << "$" << tip << endl;
		} 	//end while
}
