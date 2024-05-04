#include <cstring>
#include <iostream>
#include <string>

using namespace std;

int main() 
{
	string input {},pyramid {},previous{};
	
	int rows = input.size();
	int spaces = rows - 1;
	
	cout << "Enter your string: ";
	getline(cin,input);
		
	for(size_t i = 0;i < input.size();i++){
		pyramid += input.at(i);
		cout << pyramid + previous << " " 	;
	}
		cout << endl;
	
	return 0;	
}
	