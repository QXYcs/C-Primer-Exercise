#include <vector>
#include <iostream>
using std::vector;
using std::cin; using std::cout; using std::endl;

int main() {
	vector<int> vec;
	int num;
	while (cin >> num) vec.push_back(num);
	for (auto i : vec)
		cout << ((i % 2) ? i*i : i) << endl;
	system("pause");
}