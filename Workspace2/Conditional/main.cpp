#include <iostream>

using namespace std;

int main() 
{
	//Write a program to figure out which the largest number:

	int num1 {},num2{};
	cout << "Enter two integers sperated by comma: ";
	cin >> num1 >> num2;
	
	if(num1 != num2)
	{
		cout << "Largerst number is " << ((num1 > num2) ? num1 : num2) << endl;
		cout << "Smallest number is " << ((num1 < num2) ? num1 : num2) << endl;
		}
	else
		cout << "Entered numbers are equal" << endl;
	return 0;
}
	