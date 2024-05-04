#include <iostream>

using namespace std;

int main() 
{
	//Program to find ASCII value for a character
	char input_char {};
	cout << "Enter the character to find ascii value: ";
	cin >> input_char;
	cout << "ASCII Value of " << input_char << "=" << int(input_char) << endl;
	
	//Swap two number program
	int a {},b{},temp{};
	cout << "\nSwap two numbers : " << endl;
	cout << "-----------------------" << endl;
	cout << "Input 1st number : ";
	cin >> a;
	cout << "Input 2nd number : ";
	cin >> b;
	
	temp = a;
	a = b;
	b = temp;
	
	cout << "\nAfter swapping the 1st number is : " << a << endl;
	cout << "After swapping the 2nd number is : " << b << endl;
	
	cout << "\nCheck whether a number is positive, negative or zero :" << endl;
	cout << "-----------------------------------------------------------" << endl;
	int num {};
	cout << "Input a number : ";
	cin >> num;
	
	if(num == 0)
		cout << "\nEntered number is Zero" << endl;
	else if(num > 0)
		cout << "\nEntered number is positive" << endl;
	else
		cout << "\nEntered number is negative" << endl;
	
	return 0;	
}
	