#include <iostream>
#include <string>
#include <forward_list>
using namespace std;

void insert_string(forward_list<string> &fl, string str1, string str2) {
	auto pre = fl.before_begin();
	auto curse = fl.begin();
	bool isFound = false;
	while (true) {
		if (curse == fl.cend()) {
			if (!isFound) fl.insert_after(pre, str2);
			return;
		}

		if (*curse == str1) {
			++pre;
			curse = fl.insert_after(curse, str2);
			isFound = true;
		}
		else {
			++pre;
			++curse;
		}
	}
}

int main() {
	forward_list<string> fl{ "ab", "bc", "ccde", "ccde", "efgh" };
	insert_string(fl, "fesf", "zz");
	for (const auto &i : fl)
		cout << i << endl;
	system("pause");
}