#include <list>
#include <iostream>
using namespace std;

int main() {
	list<int> li{1, 2, 3, 4, 5};
	auto iter = li.begin(), end = li.end();
	while (iter != end) {
		iter = li.insert(iter, *iter);
		++(++iter);
	}

	for (const auto &i : li) {
		cout << i << endl;
	}

	system("pause");
}