#include <iostream>
#include <string>
#include<vector>
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

int main() {
	const char ca[] = { 'h', 'e', 'l', 'l', 'o', '\0' }; ///结尾添加'/0'才能正确结束
	const char *cp = ca;
	while (*cp) {
		cout << *cp << endl;
		++cp;
	}
	system("pause");
}