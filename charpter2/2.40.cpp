#include <string>
#include <iostream>
using namespace std;

struct Sales_data {
	string bookNo = "0000";
	unsigned units_sold = 0;
	double revenue = 0; ///不初始化会是一个随机值
};

int main() {
	Sales_data books1;
	books1.bookNo = "1024";
	cout << books1.bookNo << ' ' << books1.units_sold << ' ' << books1.revenue << endl;
	books1.revenue = 24.5, books1.units_sold = 5;
	cout << books1.revenue << ' ' << books1.revenue*books1.units_sold << endl;
	system("pause");
}