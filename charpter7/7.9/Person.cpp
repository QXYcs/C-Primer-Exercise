#include "Person.h"
#include <iostream>
std::istream& read(std::istream &is, Person &item) {
	std::cin >> item.name >> item.address;
	return is;
}

std::ostream& print(std::ostream &os, const Person &item) {
	std::cout << item.name << " " << item.address;
	return os;
}