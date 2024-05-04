#include <iostream>

using namespace std;

int main() 
{
	/*
	 1 Dollar is 100 Cents
	 1 quater is 25 cents
	 1 dime is 10 cents
	 1 nickel is 5 cents
	 1 penny is 1 cent 
	*/
	
	int return_amount {};
	int remaining_amount {};
	const int dollor_in_cents {100};
	const int quater_in_cents {25};
	const int dime_in_cents {10};
	const int nickels_in_cents {5};
	const int penny_in_cents {1};
	
	cout << "Enter the amount to return in cents: ";
	cin >> return_amount;
	
	cout << "Here is how you can split give the change : " << endl;
	
	cout << "dollors: " << (return_amount / dollor_in_cents) << endl;
	remaining_amount = return_amount % dollor_in_cents;
	
	cout << "quaters: " << (remaining_amount / quater_in_cents) << endl;
	remaining_amount = remaining_amount % quater_in_cents;
	
	cout << "dimes: " << (remaining_amount / dime_in_cents) << endl;
	remaining_amount = remaining_amount % dime_in_cents;
	
	cout << "nickels: " << (remaining_amount / nickels_in_cents) << endl;
	remaining_amount = remaining_amount % nickels_in_cents;
	
	cout << "pennys: " << (remaining_amount / penny_in_cents) << endl;
	
		
	return 0;	
}
	