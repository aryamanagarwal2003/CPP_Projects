#include <iostream>
using namespace std;
int main() {
	//Try to modify x1 & x2 and see the compilation output
	int x = 5;
	const int MAX = 12;
	int &ref_x1 = x;
	const int &ref_x2 = x;
	cout << x << endl << ref_x1 << endl << ref_x2 << endl;

	ref_x1 = 4;
	cout << x << endl << ref_x1 << endl << ref_x2 << endl;


	//Try to modify the pointer (e.g. ptr1) and the pointer value (e.g. *ptr1)
	
	const int* ptr1 = &x;
	int* const ptr2 = &x;
	const int* const ptr3 = &x;
	int y = 1;
	ptr1 = &y;
	*ptr2 = 10;
	cout << *ptr1 << endl << *ptr2 << endl << *ptr3 << endl << x << endl << ref_x1 << endl << ref_x2 << endl;


	//Find which declarations are valid. If invalid, correct the declaration
	const int* ptr4 = &MAX;
	//int* ptr4 = &MAX; wrong

	const int& r1 = ref_x1;
	//int& r2 = ref_x2; wrong

	const int*& p_ref1 = ptr1;
	int*const& p_ref2 = ptr2;
}