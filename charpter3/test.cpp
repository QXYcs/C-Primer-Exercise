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

	///2. �Ƚϴ�С
	string a = "Helloa";
	string b = "Hello ";
	cout << (a > b) << endl; ///True
	system("pause");

	///3.range for���
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
	///��ʹ���б��ʼ��int��float�����δ����ʼ��λ�ö�Ӧ��Ԫ�ػᱻĬ�ϳ�ʼ��Ϊ0����a1�Ƿ��ں������ڡ���char��Ϊ'',string��Ϊ""
	///��δ��ʼ����int float����array�ᱻ��ʼ��δ���ֵ
	for (int i = 0; i < 5; i++) 
		cout << a3[i] << endl;
	system("pause");
	int i = 0;
}