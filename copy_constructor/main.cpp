#include <iostream>
#include "Integer.h"

void Print(Integer i) {

}

Integer Add(int x, int y) {
	return Integer(x + y);
}

int main() {
	int* p1 = new int(5);
	//Shallow copy;
	int* p2 = p1;

	//Deep copy;
	int* p3 = new int(*p1);

	Integer i(5);
	Integer i2(i);

	std::cout << i.GetValue() << std::endl;
	return 0;
}