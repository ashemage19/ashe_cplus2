#include <iostream>
using namespace std;

int main () {
	char ch; cout <<"Enter the letter (in Capital Letters): ";
	cin >> ch;
	
	switch (ch) {
		case 'A': case 'a':
			cout <<"Your Character Is A. Your Character is a Vowel \n";break;
		case 'E': case 'e':
			cout <<"Your Character Is E. Your Character is a Vowel \n";break;
		case 'I': case 'i':
			cout <<"Your Character Is I. Your Character is a Vowel \n";break;
		case 'O': case 'o':
			cout <<"Your Character Is O. Your Character is a Vowel \n";break;
		case 'U': case 'u':
			cout <<"Your Character Is U. Your Character is a Vowel \n";break;
		default:
			cout << "Your Character Is Not Vowel. Otherwise Not a Capital Letter \n";break;
	}
}
