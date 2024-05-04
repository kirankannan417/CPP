#include <iostream>

using namespace std;

int main() 
{
	int num {};
	const int min {10};
	const int max {100};
	
	cout << "Enter an number between 10 and 100: ";
	cin >> num;
	
	if(num >= min)
	{	
		cout << "\n==========if statement 1========================" << endl;
		cout <<  "Number is greater than or equal to " << min << endl;
		
		int diff{num - min};
		cout << num << " is " << diff << " greater than " << min << endl;
	}
	
	if(num <= max)
	{	
		cout << "\n==========if statement 2========================" << endl;
		cout <<  "Number is less than or equal to " << max << endl;
		
		int diff{max - num};
		cout << num << " is " << diff << " less than " << max << endl;
	}
	
	if(num >= min && num <= max)
	{
		cout << "\n===========if statement 3========================" << endl;
		cout << "Number is in bounds of " << min << " and " << max << endl;
		cout << "\nThis means statement 1 and 2 should be displayed !!" << endl;
	
	}
	
	if(num == min || num == max) {
		cout << "\n===========if statement 4========================" << endl;
		cout << num << " is on the boundaries of " << min << " and " << max << endl;
		cout << "\nThis means statement 1 2 and 3 should be displayed !!" << endl;
	}
	return 0;	
}
	