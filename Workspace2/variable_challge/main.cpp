#include <iostream>

using namespace std;

int main() 
{
	cout << "Hello, Welcome to Kiran's Carpet Cleaning Service" << endl;
	cout << "\nHow many large rooms would you like to be cleaned: ";
	int number_of_large_rooms {0};
	cin >> number_of_large_rooms;
	cout << "\nHow many small rooms would you like to be cleaned: ";
	int number_of_small_rooms {0};
	cin >> number_of_small_rooms;
	cout << "\n========================" << endl;
	
	cout << "\nEstimate for room clean service" << endl;
	
	const double price_for_large_room {35};
	const double price_for_small_room {25};
	const double sales_tax {0.06};
	const int estimate_expiry {30};
	
	cout << "\nPrice for large room: $" << price_for_large_room << endl;
	cout << "\nPrice for small room: $" << price_for_small_room << endl;
	
	cout << "\nCost: $" 
		 << ((price_for_large_room * number_of_large_rooms) + 
			 (price_for_small_room * number_of_small_rooms)) 
		 << endl;
		 
	cout << "\nTax: $" 
		 << (((price_for_large_room * number_of_large_rooms) + 
			 (price_for_small_room * number_of_small_rooms)) * sales_tax) 
		 << endl;
		 
	cout << "\n========================" << endl;
	cout << "\nTotal Estimate: $" 
		 << ((price_for_large_room * number_of_large_rooms) + 
			(price_for_small_room * number_of_small_rooms) + 
			((price_for_large_room * number_of_large_rooms) + 
			(price_for_small_room * number_of_small_rooms))  * sales_tax)
		 << endl;
		 
	cout << "\nThis estimate is valid for " << estimate_expiry << " days" << endl;
	
	
	return 0;	
}
	