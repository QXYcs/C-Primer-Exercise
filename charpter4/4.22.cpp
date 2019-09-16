#include <vector>
#include <iostream>
using std::vector;
using std::cin; using std::cout; using std::endl;

int main() {
	int grade;
	while(cin >> grade)
		cout << ((grade > 90) ? "High pass" : (grade > 75) ? "Pass" : (grade >= 60) ? "Low pass" : "Fail") << endl;
	system("pause");
}