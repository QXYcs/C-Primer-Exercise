#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

istringstream &print_string(istringstream &iss) {
	string s;
	while (iss >> s) cout << s << endl;
	iss.clear();
	return iss;
}

int main() {
	string info = "AB CDE FG";
	istringstream iss(info);
	print_string(iss);
}