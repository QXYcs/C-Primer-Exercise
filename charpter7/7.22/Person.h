#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
#include <iostream>
class Person {
	friend std::istream& read(std::istream &is, Person &item);
	friend std::ostream& print(std::ostream &os, const Person &item);
public:
	Person() = default;
	Person(const std::string n) : name(n) {};
	Person(const std::string n, const std::string a) : name(n), address(a) {};
	Person(std::istream &);
	std::string print_name() const {
		return name;
	}
	std::string print_address() const {
		return address;
	}

private:
	std::string name;
	std::string address;

};

std::istream& read(std::istream &is, Person &item);
std::ostream& print(std::ostream &os, const Person &item);
#endif