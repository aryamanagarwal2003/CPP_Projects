#include<iostream>
using namespace std;
void Print(int count, char ch) {
	for (int i = 0; i < count; i++)
	{
		cout << ch;
	}
	cout << endl;
}
void EndMessage() {
	cout << "End of Program" << endl;
}
int main() {
	atexit(EndMessage);
	Print(5, '#');
	void(*pfn)(int, char) = Print;
	(*pfn)(8, '@');
	pfn(5, '+');
	cout << "End of Main" << endl;
	return 0;
}