#include <iostream>
using std::cin; using std::cout;
using std::endl;

int main() {
	int x[10]; int *p = x;
	cout << sizeof(x) / sizeof(*x) << endl;
	cout << sizeof(p) / sizeof(*p) << endl;
	system("pause");
	
	int x1 = 2, y = 3;
	cout << sizeof x1 + y << endl;
	system("pause");
}