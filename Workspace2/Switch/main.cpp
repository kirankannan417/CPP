#include <iostream>

using namespace std;

int main() 
{
	char letter_grade {};
	
	cout << "Enter the letter you expect on the Exams: ";
	cin >> letter_grade;
	
	switch(letter_grade){
		case 'a':
		case 'A':
			cout << "You need 90+ to have " << letter_grade << endl;
			break;
		case 'b':
		case 'B':
			cout << "You need 80 to 89 to have " << letter_grade << endl;
			break;	
		case 'c':
		case 'C':
			cout << "You need 70 to 79 to have " << letter_grade << endl;
			break;
		case 'd':
		case 'D':
			cout << "You need 60 to 69have " << letter_grade << endl;
			break;
		case 'f':
		case 'F':
			{
				char confrim {};
				cout << "Are you sure you want F (Y/N): ";
				cin >> confrim;
				if(confrim == 'y' || confrim == 'Y')
					cout << "Ok, I guess you dont want to study" << endl;
				else if(confrim == 'n' || confrim == 'N')
					cout << "Great !!, then go study";
				else
					cout << "Illegal character" << endl;
				break;
			}
		default:
			cout << "Sorry thats a valid grade" << endl;
	}
	return 0;
}	