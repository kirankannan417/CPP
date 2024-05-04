#include <iostream>

using namespace std;

int main() 
{
	bool equal_result {false};
	bool not_equal_result {false};
	
	cout << boolalpha;
	
	
	int num1 {0},num2 {0};
	
	cout << "Enter two integers: ";
	cin >> num1 >> num2;
	
	equal_result = (num1 == num2);
	not_equal_result = (num1 != num2);
	
	cout << "Comparision equals: " << equal_result << endl;
	cout << "Comparision not equals: " << not_equal_result << endl;
	
	
	
	return 0;	
}
	