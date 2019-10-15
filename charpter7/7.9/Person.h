#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
#include <iostream>
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

std::istream& read(std::istream &is, Person &item);
std::ostream& print(std::ostream &os, const Person &item);
#endif