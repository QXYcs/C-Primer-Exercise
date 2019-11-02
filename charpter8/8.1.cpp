#include <iostream>
#include <string>
///#include <ios>
using std::istream; using std::ostream;
using std::cin; using std::cout; using std::endl;
using std::string;
using std::ios_base;
using std::unitbuf;  using std::nounitbuf;

istream &print_info(istream &is) {
	string info;
	while (is >> info);
	cout << info << endl;
	///is.clear();
	return is;
}

int main() {
	/*
	auto &s = print_info(cin);
	auto state = s.rdstate();
	cout << state << endl;
	system("pause");
	*/
	int i;
	cin >> i;
	auto state = cin.rdstate();
	cout << nounitbuf;
	cout << state << cin.eof() << cin.bad() << cin.fail() << cin.good() << endl;
	system("pause");
}