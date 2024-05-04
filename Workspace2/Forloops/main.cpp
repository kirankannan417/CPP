#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() 
{
	int num {};
	vector <int> nums {10,20,30,40,50};
	int scores [] {100,97,98};
	vector <double> temps {100.0,98.7,96.6,88.1,99.1};
	double running_temp{};
	
	cout << "Enter an integer to figure out even numbers in range : " ;
	cin >> num;
	
	for(int i {0} ;i <= num ; i++)
		cout << i << ((i % 10 == 0) ? "\n" : " ");
	
	for(unsigned j {0};j < nums.size();j++)
		cout << nums[j] << endl;
	
	for(int score : scores)
		cout << score << endl; 
		
	for(auto temp:temps)
		running_temp += temp;
	
	cout << fixed << setprecision(2) << endl;
	cout << "average temp : " << running_temp/temps.size() << endl;
	return 0;	
}
	