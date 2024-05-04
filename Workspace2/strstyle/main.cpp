#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

int main() 
{
	string secret_messgage;
	string encrypted_message;
	string decreypted_message;
	
	string aplphabet {"ABCDEFGHIJKLMNXYZabcdefghijklmnopqrstuvwxyz"};
	string key {"lmnoIJKLMNABCDghijklqrstuvwxDE123IJKmnopqrO"};
	
	cout << "Enter your scret message :";
	getline(cin,secret_messgage);
	
	for(auto encryption:secret_messgage){
		for(size_t i = 0; i < aplphabet.size();i++){
			if(encryption == aplphabet[i]){
				encrypted_message.push_back(key.at(i));
			}
		}		
	}			
				
	cout << "Encrypted message : " << encrypted_message << endl;
	
	return 0;	
}
	