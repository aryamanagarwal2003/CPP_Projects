#include <iostream>
using namespace std;
void Print(int* ptr) {
	cout << *ptr << endl;
	*ptr = 700; //x gets changed to 700 therefore in Print, const int *ptr is good so that no modification is done.
}
void Print_R(int &ref ) {
	cout << ref << endl; 
	ref = 200; // to avoid this change write const int &ref
}
int main() {
	
	/*
	float radius = 0;
	cin >> radius;
	const float PI = 3.14159f;
	float area = PI * radius * radius;
	float circumference = 2 * PI * radius;
	cout << "Area is : " << area << endl;
	cout << "circumference is: " << circumference << endl;
	*/
	const int chunk = 512;
	const int * const ptr = &chunk;
	int x = 10;
	//*ptr = 1;
	//ptr = &x;
	Print(&x);
	cout << "main -> x " << x << endl;

	Print_R(x);
	cout << "main_R -> x " << x << endl;

}