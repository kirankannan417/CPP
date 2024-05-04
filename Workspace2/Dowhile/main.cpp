#include <iostream>
#include <vector>

using namespace std;

int main() 
{
	vector <char> selection {'f','r','a','n','k'};
	int i {0};
	bool vowel_found {false};
	if(!selection.empty())
	{
		do{
			if(selection.at(i) == 'a' || selection.at(i) == 'e' || 
			   selection.at(i) == 'i' || selection.at(i) == 'o' || 
			   selection.at(i) == 'u')
				vowel_found =true;
			else
				i++;
			
		}while(!vowel_found && i < selection.size());

	}
	if(vowel_found)
		cout << "Vowel found: " << selection.at(i);
	else
		cout << "No vowel was found";
	return 0;	
}
	