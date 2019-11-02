#include "Sales_data.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
	ifstream ifs(argv[1], fstream::in);
	ofstream ofs(argv[2], fstream::app);
	Sales_data total;
	if (read(ifs, total)) {
		Sales_data trans;
		while (read(ifs, trans)) {
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else {
				print(ofs, total) << endl;
				total = trans;
			}
		}
		print(ofs, total) << endl;
	}
	else {
		cerr << "No data?!" << endl;
	}
	system("pause");
}