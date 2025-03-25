#include<iostream>
class Integer {
	int m_value{ 0 };
public:
	Integer() = default;
	/*Integer() {
		m_value = 0;
	}*/
	Integer(int value) {
		m_value = value;
	}
	Integer(const Integer&) = delete;
	void SetValue(int value) {
		m_value = value;
	}
	void SetValue(float) = delete;
};

int main() {
	Integer i1;
	Integer i2(3);
	//i1.SetValue(3.4f); error because we have deleted float in SetValue.
	return 0;
}