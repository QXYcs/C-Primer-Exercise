#include <iostream>
using std::cin; using std::cout; using std::endl;

int main() {
	int a = 1;
	int *pa = &a;
	int &b = *pa;
}