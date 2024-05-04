#include <iostream>

using namespace std;

int main() 
{
	int num {};
	cout << "Enter a postive integer - start the countdown: ";
	cin >> num;
	
	while(num > 0){
		cout << num << endl;
		--num;
	}	
	cout << "Count down ends !!!" << endl;
	return 0;	
}
	