#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <deque>
using namespace std;

bool find_num(vector<int>::const_iterator begin, vector<int>::const_iterator end, int num) {
	while (begin != end) {
		if (*begin == num) return true;
		++begin;
	}
	return false;
}

int main() {
	vector<int> vec;
	int num;
	while (cin >> num) vec.push_back(num);
	cin.clear();
	int left, right, ele;
	cin >> left >> right >> ele;
	cout << find_num(vec.begin() + left, vec.begin() + right, ele);
}