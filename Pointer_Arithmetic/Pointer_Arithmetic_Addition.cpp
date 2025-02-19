#include <iostream>
using namespace std;
int main() {
	int a[5] = { 0,1,2,3,4 };
	int* p = &a[0];
	cout << *p << endl;
	p = p + 2;
	cout << *p << endl;
	*p += 8;
	cout << *p << " " << a[2] << endl;
}