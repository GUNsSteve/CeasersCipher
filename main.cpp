#include <algorithm> // for using transform
#include <cctype> // for using toupper
#include <iostream>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int alphabetize(char);
char dealphabetize(int n);

int key;
using namespace std;


int main(int argc, char** argv) {
	std::string encrypter;
	
	string decrypted="";
	std::cout<<"Enter a string that you want to encrypt\n";
	std::cin >> encrypter;
	cout<<"Enter a key you want to use to encrypt";
	cin >> key;
    transform(encrypter.begin(), encrypter.end(), encrypter.begin(),::toupper);
	cout << encrypter<<endl;
		for(int i = 0; i< encrypter.length();i++){
			decrypted+= dealphabetize(alphabetize(encrypter[i]+key)%26);
			cout<<"num: "<<alphabetize(encrypter[i]+key)%26<<" ";
			cout<<"char: "<<dealphabetize(alphabetize(encrypter[i]+key)%26)<<" ";
		}
		for(int i = 0; i< encrypter.length();i++){
			decrypted[i] = decripted[i];

		}
	cout<<endl<<encrypter;
	cout <<endl<< decrypted;
	return 0;
}
int alphabetize(char c){
	return(int)(((int)c)-65);
}
char dealphabetize(int n){
	return char(n+65);
}
