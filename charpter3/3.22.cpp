#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

int main() {
	string s;
	vector<string> text;
	while (getline(cin, s)) text.push_back(s); ///��Ҫ������մ�
	///cout << (text.end() == text.cend()) << endl; ///���1
	for (auto it = text.begin(); it != text.end() && !it->empty(); ++it) {
		for (auto &c : *it) c = toupper(c);
		cout << *it << endl;
	}	
	
	///decltype(text.end() - text.begin()) aaa;
	system("pause");
}