#include "Account.h"
void Account::rate(const double newRate) {
	interestRate = newRate;
}

double Account::interestRate = initRate();

double Account::initRate(const double r) {
	return r;
}

constexpr int Account::period;