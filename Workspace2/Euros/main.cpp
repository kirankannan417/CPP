#include <iostream>

using namespace std;

int main() 
{
	const double usd_per_euro {1.19};
	
	cout << "Welcome tothe EUR to USD Convertor" << endl;
	cout << "Enter the value in Euros: "; 
	
	double euros {0.0};
	double dollors {0.0};
	
	cin >> euros;
	dollors = euros * usd_per_euro;
	
	cout << euros << " Euros is to equialent to " << dollors << " dollors" << endl;
		
	return 0;	
}
	