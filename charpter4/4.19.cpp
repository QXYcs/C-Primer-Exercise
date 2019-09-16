#include <iostream>
#include <vector>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int main() {
	int ival = 0;
	cout << (ival++ && ival) << endl;

	vector<int> vec{ 1, 2, 1 };
	cout << (vec[ival++] <= vec[ival]) << endl;
	
	string s{ "Hello" };
	auto beg = s.begin();

	///p133´íÎó³ÌÐò£º
	while (beg != s.end() - 1)
		*beg = toupper(*beg++);
	cout << s << endl;
	system("pause");
}