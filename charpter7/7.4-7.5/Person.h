#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
struct Person {
	std::string name;
	std::string address;
	std::string print_name() const {
		return name;
	}
	std::string print_address() const {
		return address;
	}
};
#endif