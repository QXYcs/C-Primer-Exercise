#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string;

int main() {
	string a, b;
	int mode;
	while (cin >> a >> b) {
		cin >> mode;
		switch (mode) {
			case 0: {
				if (a > b) cout << a << endl;
				else if (a < b) cout << b << endl;
				break;
			}
			case 1: {
				if (a.size() > b.size()) cout << a << endl;
				else if (a.size() < b.size()) cout << b << endl;
				break;
			}
		}
	}
	system("pause");
}