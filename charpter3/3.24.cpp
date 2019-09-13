#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

int main() {
	int num;
	vector<int> nums;
	while (cin >> num) nums.push_back(num);
	for (auto it1 = nums.cbegin(), it2 = nums.cend() - 1; it1 <= it2; ++it1, --it2) ///!!尾后迭代器必须-1才能解引用
		if (it1 == it2) cout << *it1 << endl;
		else cout << *it1 + *it2 << endl;

	system("pause");
}