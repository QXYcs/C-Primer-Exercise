#include <iostream>
#include <string>
#include<vector>
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

int main() {
	/*
	///1. getline(in <string>)
	string line;
	while (getline(cin, line)) {
		cout << "out: " << line << endl;
	}
	system("pause");

	///2. 比较大小
	string a = "Helloa";
	string b = "Hello ";
	cout << (a > b) << endl; ///True
	system("pause");

	///3.range for语句
	string str("Hello world!!!");
	decltype(str.size()) punct_cnt = -1;
	for (auto c : str)
		if (ispunct(c))
			++punct_cnt;

	cout << punct_cnt
		<< " punctuation characters in " << str << endl;
	system("pause");

	///4. vector
	int bb = 1;
	vector<int> aa{ 10, bb };
	bb = 2;
	cout << aa[1] << ' ' << bb << endl;
	system("pause");
	*/

	///5. array
	constexpr int a_size = 10;
	int a1[5] = { 1, 2 };
	float a2[5] = { 1.0 , 2.05};
	char a3[5];
	///若使用列表初始化int和float相关型未被初始化位置对应的元素会被默认初始化为0不论a1是否在函数体内。而char型为'',string型为""
	///若未初始化，int float类型array会被初始化未随机值
	for (int i = 0; i < 5; i++) 
		cout << a3[i] << endl;
	system("pause");
	int i = 0;
}