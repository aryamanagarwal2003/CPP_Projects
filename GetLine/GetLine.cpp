#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
	char first_name[50]{};
	char last_name[50]{};
	char full_name[50]{};
	char full_name1[50]{};

	cout << "Enter your first name: ";
	cin >> first_name;
	cout << "Enter your last name: ";
	cin >> last_name;
	cout << "Hello " << first_name << " your first name has " << strlen(first_name) << " characters" << endl;
	cout << "and your last name, " << last_name << " has " << strlen(last_name) << " characters" << endl;

	strcpy_s(full_name, first_name);
	strcat_s(full_name, " ");
	strcat_s(full_name, last_name);
	cout << "Your full name is " << full_name << endl;

	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << "Enter your full name: ";
	cin.getline(full_name1, 50);
	cout << "Your full name is: " << full_name1 << endl;
}