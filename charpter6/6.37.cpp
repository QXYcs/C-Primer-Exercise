#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

string(&svalue())[10];

auto svalue2()->string (&)[10]; ///Òªµ¥¶ÀÀ¨³ö&£¡£¡£¡

string sarr[10];
string (&ref)[10] = sarr;
decltype(ref) svalue3();

int odd[] = { 1,3,5,7,9 };
decltype(odd) *arrptr();

constexpr int sizz() {
	return 2;
}

constexpr int sizz(int i) {
	return 2 + i;
}

int main() {
}