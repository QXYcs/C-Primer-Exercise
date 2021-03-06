#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>

class Sales_data {
	friend std::istream &read(std::istream &is, Sales_data &item);
	friend std::ostream &print(std::ostream &os, const Sales_data &item);
public:
	Sales_data() = default;
	Sales_data(const std::string &s) : bookNo(s) {}; ///必须为const string. 初始化输入"..."的类型是const char[n], 不能转化为string类型
	Sales_data(const std::string &s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(p*n) {};
	Sales_data(std::istream &);

	std::string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data &);
	
private:
	double avg_price() const;
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0; 
};

std::istream &read(std::istream &is, Sales_data &item);

std::ostream &print(std::ostream &os, const Sales_data &item);
#endif