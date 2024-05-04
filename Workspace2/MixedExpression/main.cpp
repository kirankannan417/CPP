#include <iostream>

using namespace std;

int main() 
{
	int total {};
	int num1 {},num2 {},num3 {};
	const int count {3};
	
	cout << "Enter three integers: ";
	cin >> num1 >> num2 >> num3;
	
	total = num1 + num2 + num3;
	double average {0.0};
	
	average = static_cast<double>(total) / count;
	
	cout << "The three numbers are : " << num1 << " ;" << num2 << " ;" << num3 << " ;" << endl;
	cout << "The average of three number: " << average << endl;
	cout << "The total for three numbers: " << total << endl;
	
	return 0;	
}
	