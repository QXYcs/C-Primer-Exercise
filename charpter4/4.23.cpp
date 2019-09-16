#include <string>
#include <iostream>

using std::string;
using std::cin; using std::cout; using std::endl;

int main() {
	string s = "word";
	string p1 = s + s[s.size() - 1] == 's' ? "" : "s";
}