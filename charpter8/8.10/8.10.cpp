#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
int main(int argc, char *argv[]) {
	ifstream ifs(argv[1]);
	vector<string> essay;
	string line;
	while (getline(ifs, line)) essay.push_back(line);
	
	for (auto line : essay) {
		istringstream iss(line);
		string word;
		while(iss >> word)
			cout << word << ends;
		cout << endl;
	}
}