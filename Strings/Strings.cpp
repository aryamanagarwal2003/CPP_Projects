#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
	char c = '2';
	cout << isalpha(c) << endl; //if c is a letter - 0
	cout << isalnum(c) << endl; //if c is a letter or a digit - 1
	cout << isdigit(c) << endl; //if c is a digit - 1
	cout << islower(c) << endl; //if c is a lowercase character
	cout << isprint(c) << endl; //if c is a printable character
	cout << ispunct(c) << endl; //if c is a punctuation character
	cout << isupper(c) << endl; //if c is an uppercase letter
	cout << isspace(c) << endl; //if c is a whitespace


	//char str[80];
	//strcpy_s(str, "Hello"); //copy
	//cout << str << endl;
	//
	//strcat_s(str, "Aman"); //catenation
	//cout << str << endl;

	//cout << strcmp(str, "Another") << endl; // >0
}