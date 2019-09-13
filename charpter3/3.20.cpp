#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

int main() {
	vector<int> nums;
	int num;
	while (cin >> num) nums.push_back(num);
	auto size = nums.size();
	for (decltype(nums.size()) i = 0; i < size; i++)
		if (i < size - 1 - i) cout << nums[i] + nums[size - 1 - i] << endl;
		else if (i == size - 1 - i) cout << nums[i] << endl;
	system("pause");
}