#include <iostream>
#include <string>
#include <vector>
#include <iterator> ///��c���arrayʹ��begin end
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;
using std::begin; using std::end; ///!!!��Ҫ
int main() {
	int ia[3][4] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
	cout << "�汾1" << endl;
	for (auto &r : ia)
		for (auto c : r)
			cout << c << endl;

	cout << "�汾2" << endl;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 4; j++)
			cout << ia[i][j] << endl;

	cout << "�汾3" << endl;
	for (int(*r)[4] = begin(ia); r != end(ia); ++r)
		for (int *c = begin(*r); c != end(*r); ++c)
			cout << *c << endl;
	system("pause");
}