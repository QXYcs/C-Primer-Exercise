#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string;

int main() {
	string s;
	///1. for°æ
	cin >> s;
	for (decltype(s.size()) i = 0; i < s.size(); i++) 
		s[i] = 'X';

	cout << s << endl;
	system("pause");

	///2. while°æ
	cin >> s;
	decltype(s.size()) i = 0;
	while (i != s.size()) { 
		s[i] = 'X'; 
		i++;
	}

	cout << s << endl;
	system("pause");
}