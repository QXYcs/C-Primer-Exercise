#include <iostream>
#include <string>
#include<vector>
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

int main() {
	vector<int> v1{ 1, 2, 3};
	vector<int> v2{ 1, 2, 4};
	cout << (v1 < v2) << endl;
	system("pause");
}