#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

int main() {
	vector<string> words;
	string word;
	while (cin >> word) {
		words.push_back(word);
	}
	for (auto &w : words){
		for (auto &c : w)
			c = toupper(c);
		cout << w << endl;
	}
	system("pause");
	/*
	for (auto w : words)
		cout << w << endl;
	system("pause");
	*/
}