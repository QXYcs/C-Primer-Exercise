#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string;

int main() {
	///1. ����һ��
	/*
	string line;
	while (getline(cin, line)) {
		cout << line << endl;
	}
	*/
	///2. ���뵥��(����һ��д�����ctrl+Z��ʹ�����޷�����ѭ��)
	string word;
	while (cin >> word) {
		cout << word << endl;
	}
	system("pause");
}