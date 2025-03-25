class Counter {
private:
    int value;
public:
    Counter(int v) : value(v) {}

    // Prefix increment
    Counter& operator++() {
        ++value;
        return *this;
    }

    // Postfix increment
    Counter operator++(int) {
        Counter temp = *this;
        value++;
        return temp;
    }

    void display() { cout << "Value: " << value << endl; }
};

int main() {
    Counter c(5);
    ++c;  // Prefix
    c.display();  // Value: 6

    Counter c2 = c++;  // Postfix
    c.display();  // Value: 7
    c2.display(); // Value: 6
    return 0;
}
