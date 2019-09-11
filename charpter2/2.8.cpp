#include <iostream>
using namespace std;

int main() {
	cout << "\062\115\012"; ///'\' + 1-3 位8进制数
	cout << "\x32\x9\x4D\x0A"; /// '\' + 'x' + 1-2位16进制数
	system("pause");
}