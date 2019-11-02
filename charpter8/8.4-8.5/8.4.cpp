#include <fstream>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

void read_file(const string path, vector<string> &v) {
	ifstream ifs(path, ios::in);
	string s;
	while (getline(ifs, s)) 
		v.push_back(s);
}

int main() {
	vector<string> v;
	read_file("F:\\Sheffield\\C++\\C++ primer\\codes\\charpter8\\8.4-8.5\\text.txt", v);
	for (auto s : v) cout << s << endl;
	system("pause");
}