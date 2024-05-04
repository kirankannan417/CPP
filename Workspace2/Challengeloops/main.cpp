#include <iostream>
#include <vector>

using namespace std;

int main() 
{
	vector<int> list{};
	int number{},num_mean;
	char choice {};

	do{
		cout << "\nP - Print the numbers" << endl;
		cout << "A - Add a number" << endl;
		cout << "M - Display the mean of the numbers" << endl;
		cout << "S - Display the smallest number in list" << endl;
		cout << "L - Display the larget number in list" << endl;
		cout << "Q - Quit the program" << endl;
		
		cout << "\nEnter the choice : ";
		cin >> choice;
		switch(choice){
			case 'P':
			case 'p':
				if(!list.empty())
					for(auto vec:list)
						cout << vec << " ";
				else
					cout << "List is empty" << endl;
				break;
			case 'a':
			case 'A':			
				cout << "Add the desired number: ";
				cin >> number;
				list.push_back(number);
				cout << number << " added" << endl;
				break;	

			case 'M':
			case 'm':
				num_mean = {0};
				for(auto i:list)
					num_mean += i;
				cout << "\nMean of the numbers: " << num_mean/list.size() << endl;
				break;
			case 'l':
			case 'L':
				if(!list.empty())
				{
					int largest = list.at(0);
					for(auto num:list){
						if(num > largest)
							largest = num;
						}
					cout << "Largest number is: " << largest << endl;	
				}
				else
					cout << "List is empty" << endl;
				break;
			case 's':
			case 'S':
				if(!list.empty())
				{
					int smallest = list.at(0);
					for(auto num:list){
						if(num < smallest)
							smallest = num;
						}
					cout << "smallest number is: " << smallest << endl;	
				}
				else
					cout << "List is empty" << endl;
				break;		
			case 'Q':
			case 'q':
				cout << "Good bye !!" << endl;
				break;
			default:
				cout << "Invalid choice" << endl;
				break;
		}
	}while(choice != 'q' && choice != 'Q');
	
	return 0;	
}
	