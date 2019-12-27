#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <deque>
#include <array>
using namespace std;

int main() {
	cout << "1. Usage of reverse iterators" << endl;
	vector<string> v1 = { "abc", "def" };
	list<const char*> l1 = { "gh", "ijk" };
	cout << *l1.crbegin() << endl; ///.crbegin()返回反向后的第一个元素
	cout << *(--l1.crend()) << endl; ///.crend()返回返向后的尾后位置
	deque<string> q1(l1.crbegin(), l1.crend());
	///cout << "test1" << endl;
	for (const auto &i : q1)
		cout << i;
	cout << endl;
	system("pause");

	cout << "2. size() and capacity" << endl;
	vector<int> v2(10);
	cout << "size: " << v2.size() << endl; 
	cout << "capacity: " << v2.capacity() << endl;
	v2.reserve(100);
	cout << "reserve(100),size and capacity" << v2.size() << ' ' << v2.capacity() << endl;
	system("pause");
}