#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>

struct Sales_data;
std::istream &read(std::istream &is, Sales_data &item);
struct Sales_data {
	Sales_data() = default;
	Sales_data(const std::string &s) : bookNo(s) {}; ///必须为const string. 初始化输入"..."的类型是const char[n], 不能转化为string类型
	Sales_data(const std::string &s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(p*n) {};
	Sales_data(std::istream & is) {
		read(is, *this);
	}

	std::string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data &);
	double avg_price() const;
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0; 
};

std::ostream &print(std::ostream &os, const Sales_data &item);
#endif