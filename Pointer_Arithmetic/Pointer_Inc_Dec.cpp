#include <iostream>
using namespace std;
int main() {
	int a[] = { 3,2,67,0,56 };
	int* p;
	p = &a[3];
	cout << --(*p) << endl;
	cout << *p++ << endl << *p++ << endl << *p << endl;

}