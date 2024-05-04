#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
	int length {},width {}, height{};
		
	const int first_thershold {100};
	const int second_thershold {500};
	
	const int max_dimensions {10};
	
	const double surcharge1 {0.10};
	const double surcharge2 {0.25};
	const double base_cost {2.50};
	
	int package_volume {};
	
	cout << "Welcome to the package cost calculator !!" << endl;
	cout << "Enter the volume of the package in Length, width & height: ";
	cin >> length >> width >> height;
	
	if(length > max_dimensions || width > max_dimensions || height > max_dimensions)
		cout << "Sorry, Package is too big to ship" << endl;		
	else{
		double package_cost {};
		package_volume = length * width * height;
		cout << "\nPackage Volume is: " << package_volume << endl;
		package_cost = base_cost;
		
		if(package_volume > first_thershold && package_volume < second_thershold)
			package_cost += package_cost * surcharge1;
		else if(package_volume > second_thershold)
			package_cost += package_cost * surcharge2;
			
		//cout << fixed << setprecision(2);
		cout << "\nHere is Price estimate for your package: $" << package_cost << endl;			
	}
	return 0;
	}
		

	