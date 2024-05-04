#include <iostream>
#include <vector>

using namespace std;

int main() 
{
	//Declare 2 empty vectors of integers named
		
	vector <int> vector1;
	vector <int> vector2;
   
   // Add 10 and 20 to vector1 dynamically using push back
	vector1.push_back(10);
	vector1.push_back(20);
	
	// Add 100 and 200 to vector1 dynamically using push back
	vector2.push_back(100);
	vector2.push_back(200);
   
	cout << "Vector 1 element at 0 : " << vector1.at(0) << endl;
	cout << "Vector 1 element at 1 : " << vector1.at(1) << endl;
	cout << "There are " << vector1.size() << " elements in vector1" << endl;
	
	cout << "\nVector 2 element at 0 : " << vector2.at(0) << endl;
	cout << "Vector 2 element at 1 : " << vector2.at(1) << endl;
	cout << "There are " << vector2.size() << " elements in vector2" << endl;
	
	vector <vector<int>> vector_2d;
	
	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);
	
	cout << "\nElements 0f 2D vector: " << endl;
	cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
	cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
	
	cout << "\nVector1 element changed in background" << endl;
	vector1.at(0) = 1000;
	
	cout << "\nElements 0f 2D vector: " << endl;
	cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
	cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

	cout << "\nVector 1 element at 0 : " << vector1.at(0) << endl;
	cout << "Vector 1 element at 1 : " << vector1.at(1) << endl;
	
	return 0;
	
}
	