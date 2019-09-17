#include <iostream>
#include <string>
#include <vector>
#include <iterator> ///对c风格array使用begin end
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;
using std::begin; using std::end; ///!!!必要
int main() {
	int ia[3][4] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
	cout << "版本1" << endl;
	for (auto &r : ia)
		for (auto c : r)
			cout << c << endl;

	cout << "版本2" << endl;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 4; j++)
			cout << ia[i][j] << endl;

	cout << "版本3" << endl;
	for (int(*r)[4] = begin(ia); r != end(ia); ++r)
		for (int *c = begin(*r); c != end(*r); ++c)
			cout << *c << endl;
	system("pause");
}