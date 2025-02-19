#include <iostream>
#include <stdio.h>
#include <stdlib.h>

void Malloc() {
	int* p = (int*)malloc(sizeof(int));
	int* q = (int*)calloc(5, sizeof(int));
	int* r = (int*)malloc(5 * sizeof(int));
	if (p == NULL) {
		printf("Failed to allocate memory\n");
		return;
	}
	*p = 5;
	printf("%d", *p);
	free(p); // to avoid memory leak.
	p = NULL;
}

void New() {
	int* p = new int(5);
	*p = 6;
	std::cout << *p << std::endl;
	delete p;
	p = nullptr;
}

void NewArrays() {
	int* p = new int[5];
	for (int i = 0; i < 5; i++) {
		p[i] = i;
	}
	delete[]p;
}

void Strings() {
	char* p = new char[4];
	strcpy_s(p, 4, "C++");
	std::cout << p << std::endl;
	delete[]p;
}

void TwoD() {
	int* p1 = new int[3];
	int* p2 = new int[3];

	int** pData = new int* [2];
	pData[0] = p1;
	pData[1] = p2;

	pData[0][1] = 2;

	delete[]p1; //delete[] pData[0]
	delete[]p2; //delete[] pData[1]

	delete[]pData;
	// Number of delete calls should match number of new calls.
}

int main() {
	New();
	NewArrays();
	Strings();

	int data[2][3] = {
		1,2,3,
		4,5,6
	};
	return 0;
}