#include <iostream>
using namespace std;
int main() {
	int a[] = { 2,4,3,0,-7 };
	int* p = a;
	int* q = &a[3];
	cout << "p-q = " << p - q << endl;
	cout << "q-p = " << q - p << endl;
	cout << "q = " << *q << endl;
	q = q - 2;
	cout << "q = " << *q << endl;
}