void Add_R(int a, int b, int& result) {
	result = a + b;
}
void Factorial_R(int a, int& result) {
	result = 1;
	for (int i = 1; i <= a;i++) {
		result *= i;
	}
}
void Swap_R(int& a, int& b) {
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
}