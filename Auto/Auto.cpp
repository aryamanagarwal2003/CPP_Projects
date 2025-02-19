#include <iostream>
using namespace std;
int Sum(int x, int y) {
	return (x + y);
}
int main() {
	auto i = 10;
	auto j = 5;
	auto sum = i + 4.3f;

	auto result = Sum(i, j);
	static auto y = 2;
	const int x = 10;
	auto var = x;
	auto& var1 = x;
	auto ptr = &x;

	auto list = { 1,2,3,4 };
	//auto list1{ 1,2,3,4 }; error
	auto list1{ 1 };
	return 0;
}