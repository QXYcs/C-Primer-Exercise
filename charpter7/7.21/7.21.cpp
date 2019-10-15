#include "Sales_data.h"
#include <string>
#include <iostream>
using namespace std;

int main() {
	Sales_data data1("book1");
	Sales_data data2{"book2", 10, 45.5};
	Sales_data data3(cin);
	print(cout, data3) << endl;
	Sales_data data4;
	system("pause");
}