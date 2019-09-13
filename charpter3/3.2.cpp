#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string;

int main() {
	///1. 读入一行
	/*
	string line;
	while (getline(cin, line)) {
		cout << line << endl;
	}
	*/
	///2. 读入单词(两个一起写上面的ctrl+Z会使下面无法进入循环)
	string word;
	while (cin >> word) {
		cout << word << endl;
	}
	system("pause");
}