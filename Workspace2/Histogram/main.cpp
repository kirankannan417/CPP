#include <iostream>
#include <vector>

using namespace std;

int main() 
{
	int num_data_items {};	
	cout << "Enter the number of data items : ";
	cin >> num_data_items;
	
	vector<int> data_item {};
	
	for(int i {1};i <= num_data_items; ++i){
		int data{};
		cout << "Enter the data item " << i << " : ";
		cin >> data;
		data_item.push_back(data);		
		}
	
	cout << "\nDisplay Histogram " << endl;
	for(auto val:data_item){
		for(int i {1};i <=val; ++i){
			if(i % 5 == 0)
				cout << "*";
			else	
				cout << "=";
			}
		cout << endl;	
	}		
	return 0;	
}
	