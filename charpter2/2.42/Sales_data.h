#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>

struct Sales_data {
	std::string bookNo = "0000";
	unsigned units_sold = 0;
	double revenue = 0; ///不初始化会是一个随机值
};
#endif