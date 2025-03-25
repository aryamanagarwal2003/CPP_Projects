#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> nums = { 1, 2, 3, 4, 5 };
    for_each(nums.begin(), nums.end(), [](int n) { cout << n * 2 << " "; });
    return 0;
}
