#include <iostream>
#include <string>
#include<vector>
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

int main() {
	int a[10];
	int value = 0;
	for (auto &i : a)
		i = value++;
	for (auto i : a)
		cout << i << endl;
	system("pause");

	int b[10];
	memcpy(b, a, sizeof(b));
	for (auto i : b)
		cout << i << endl;
	system("pause");
}