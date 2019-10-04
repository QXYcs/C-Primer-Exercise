#include <iostream>
#include <initializer_list>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::initializer_list;
using std::vector;

int sum(initializer_list<int> nums) {
	int sum = 0;
	for (auto &n : nums)
		sum += n;
	return sum;
}

int main() {
	int num;
	cout << sum({ 1, 2, 3, 4 }) << endl;
	system("pause");
}