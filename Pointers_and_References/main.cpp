#include <iostream>
#include "Source.h"
using namespace std;

int main() {
	int a, b, result = 0;
	cin >> a >> b;
	cout << Add(&a, &b) << endl;

	AddVal(&a, &b, &result);
	cout << result << endl;

	Swap(&a, &b);
	cout <<"a = "<< a << " b = " << b << endl;

	Factorial(&b, &result);
	cout << result << endl;

	

	Add_R( a, b, result);
	cout << result << endl;

	Factorial_R(b, result);
	cout << result << endl;

	Swap_R(a, b);
	cout << "a = " << a << " b = " << b << endl;



	int c = 10, d = 9;
	int* p, * q;
	p = &a;
	q = &b;
	*q = *p;

	cout << a << " " << *p << " " << *q << " " << b;

}