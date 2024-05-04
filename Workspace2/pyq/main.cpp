#include <iostream>
#include <string>

using namespace std;

int main() {
    
	string input {};
	cout << "Enter your string: ";
	getline(cin,input);
	
	size_t rows = input.size(); // Number of rows in the pyramid
    size_t spaces = rows - 1;
    
    for (size_t i = 0; i < rows; i++) {
        // Print spaces
        for (size_t j = 1; j < spaces; j++)
            cout << " ";
            
        // Print left half of the pyramid
        for (size_t j = 0; j < i; j++)
            cout << input.at(j);
        
        // Print right half of the pyramid
        for (size_t j = i - 1; j >= 1; j--)
            cout << input.at(j);
        
        cout << endl;
        spaces--;
    }
    return 0;
}
	