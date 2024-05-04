#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() 
{
	char first_name[20] {};
	char last_name[20] {};
	char full_name[50] {};
	char temp[50] {};
	
	cout << "Please enter your first name : ";
	cin >> first_name;
	
	cout << "Please enter your last name : ";
	cin >> last_name;
	cout << "=======================" << endl;
	
	cout << "Hello " << first_name << " your first name has " << strlen(first_name) << " characters" << endl;
	cout << "and your last name " << last_name << " has " << strlen(last_name) << " characters" << endl;

	strcpy(full_name,first_name);
	strcat(full_name," ");
	strcat(full_name,last_name);
	
	cout << "Your Full name is : " << full_name << endl;
  
	cout << "\n=======================" << endl;
	cout << "Enter your full name : ";	
	cin.ignore();
	cin.getline(temp,50);
	
	cout << temp << endl;
	
	cout << "\n=======================" << endl;
	if(strcmp(full_name,temp) == 0)
		cout << temp << " and " << full_name << " are same"  << endl;
	else
		cout << temp << " and " << full_name << " are different"  << endl;
	
	for(size_t i = 0;i < strlen(temp);++i)
		if(isalpha(temp[i]))
			temp[i] = toupper(temp[i]);
	
	cout << temp << endl;
  
	return 0;	
}
	