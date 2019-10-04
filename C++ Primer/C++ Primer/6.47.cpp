#include <iostream>
#include <vector>
#include <cassert>
using namespace std;
#define NDEBUG

void print_vector(vector<int> &vec, vector<int>::iterator beg, vector<int>::iterator end) {
#ifndef NDEBUG
	cerr << __func__ << " :ararry size is " << vec.size() << endl;
	cerr << "time: " << __TIME__ << endl;
	cerr << "date: " << __DATE__ << endl;
	assert(vec.size() >= 5); ///表达式为假就输出信息并终止调试
#endif
	
	if (beg != end) { 
		cout << *beg << endl; 
		print_vector(vec, ++beg, end);
	}
}

int main() {
	vector<int> vec;
	int num;
	while (cin >> num) vec.push_back(num);
	print_vector(vec, vec.begin(), vec.end());
	system("pause");
}