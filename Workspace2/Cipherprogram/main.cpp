#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

int main() 
{
	string secret_messgage {};
	string encrypted_message {};
	string decreypted_message {};
	
	string aplphabet {" !'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	string key {"[}|mnopqrstuvwxyzABCDEFGHIJKLabcdefghijklMNOPQRSTUVWXYZ"};
	
	cout << "Enter your scret message : ";
	getline(cin,secret_messgage);
	
	for(char encryption:secret_messgage){
		size_t position = aplphabet.find(encryption);
		if(position != string::npos){
			encrypted_message += key.at(position);
		}
		else {
			encrypted_message += encryption;			
		}
			
	}				
	cout << "Encrypted message : " << encrypted_message << endl;
	
	for(auto decryption:encrypted_message){
		size_t position = key.find(decryption);
			if(position != string::npos){
				decreypted_message += aplphabet.at(position);
			}
			else {
				decreypted_message += decryption;			
			}	
	}
		
	cout << "Decrypted message : " << decreypted_message << endl;
	return 0;	
}
	
	