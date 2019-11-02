#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

struct PersonInfo
{
	string name;
	vector<string> phones;
};

int main(int argc, char** argv)
{
	string line, word;
	vector<PersonInfo> people;
	istringstream record;

	while (getline(cin, line)){
	PersonInfo info;
	record.clear();
	record.str(line);
	record >> info.name;
	///cout << "test1" << endl;
	while (record >> word)
		info.phones.push_back(word);
	people.push_back(info);
	}

	for (auto p : people) {
		cout << p.name << ends;
		for (auto phone : p.phones)
			cout << phone << ends;
		cout << endl;
	}
	}
