#include <iostream>

using namespace std;

int main() 
{
	char vowels[] {'a', 'e', 'i', 'o', 'u'};
	cout << "\nFirst vowel : " << vowels[0] << endl;
	cout << "\nLast vowel : " << vowels[4] << endl;
	
	double hi_temp [] {90.1,89.5,81.6};
	cout << "\nThe first high temp: " << hi_temp[0] << endl;
	
	hi_temp[0] = 100.7;
	cout << "\nThe first high temp: " << hi_temp[0] << endl;
	
	int test_scores [5] {};
	
	
	cout << "\nEnter Test Scores: ";
	cin >> test_scores[0];
	cin >> test_scores[1];
	cin >> test_scores[2];
	cin >> test_scores[3];
	cin >> test_scores[4];
	
	cout << "First score at index 0: " << test_scores[0] << endl;
	cout << "Second score at index 1: " << test_scores[1] << endl;
	cout << "Third score at index 2: " << test_scores[2] << endl;
	cout << "Fourth score at index 3: " << test_scores[3] << endl;
	cout << "Fivth score at index 4: " << test_scores[4] << endl;
	
	cout << "\nNotice what happens to array: " << test_scores <<endl;
	
	
	return 0;
}
	