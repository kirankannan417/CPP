#include <iostream>
#include <vector>

using namespace std;

int main() 
{
	vector <int> test_scores {10, 20, 30, 40, 50};
	vector <char> vowels {'a', 'e', 'i', 'o', 'u'};
	cout << vowels.at(0) << endl;
	cout << vowels.at(4) << endl;
	
	cout << "\nTest scores using vector syntax" << endl;
	cout << test_scores.at(0) << endl;
	cout << test_scores.at(1) << endl;
	cout << test_scores.at(2) << endl;
	cout << test_scores.at(3) << endl;
	
	cout << "\nThere are " << test_scores.size() << " vectors in test score" << endl;
	
	cout << "\n Enter new test score to add to vector: ";
	
	int score_to_add {0};
	cin >> score_to_add;
	
	test_scores.push_back(score_to_add);
	cout << "\nThere are " << test_scores.size() << " vectors in test score" << endl;
	cout << test_scores.at(5) << endl;
	
	cout << "\n Enter new test score to add to vector: ";
	cin >> score_to_add;
	test_scores.push_back(score_to_add);
	cout << "\nThere are " << test_scores.size() << " vectors in test score" << endl;
	cout << test_scores.at(6) << endl;
	
	cout << "\nThis should cause an exception" << test_scores.at(10) << endl;
	
	return 0;	
}
	