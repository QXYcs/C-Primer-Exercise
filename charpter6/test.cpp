#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

int create_lso() {
	static int lso; ///lsoִ��ֵ��ʼ��(��������0)���Զ�����ִ��Ĭ�ϳ�ʼ��(��������δ����)
	lso++;
	return lso;
}

const string &manip() {
	string ret = "a";
	if (!ret.empty()) return ret;
	else return "Empty";
}

const char &val() {
	char val = 'a';
	char &ref = val;
	return ref;
}

int factorial(int val) {
	if (val > 1)
		return factorial(--val)*val;
	return 1;
}

auto p_array(int (*arr)[]) -> int (*)[]{
	///arr[1] = -arr[1];
	return arr;
}

int main() {

	///1. �ֲ���̬����
	create_lso();
	///cout << (lso + 2) << endl; ///lso�޷����ʣ���Ϊֻ�ں���create_lso�������пɼ�
	cout << create_lso() << endl;

	///2. ���ؾֲ������ָ��(�������ǲ��Ϸ��ģ�Ȼ������ֲ��������������ͱ������ͨ��)
	/*��ν���ܷ��ؾֲ���������ָ�ֲ�������ջ�ռ��з����ڴ棬��������ʱջָ����ˣ�������������������������������ʱ��ջָ�����ƣ���һ�κ�������������Ŀռ�ᱻ���ε��ø��ǣ������ʱ������ԭ���ľֲ������ͻ���ֲ���Ԥ���Ľ����
	���Ծֲ������ں�������ʱ�����Ǳ����ٶ����൱�ڿɱ��ٴ����á�
	���������һ������cout<<x<<endl;ǰ����һ�������˺�����������ֲ���������������ֵ�ر䣡*/
	///cout << create_lso() << endl;
	///cout << val() << endl;

	///3. �б��ʼ������ֵ(���������б��е�ֵ���ܳ���һ��)
	/*const int* list_val() {///���Ϸ�
		return{ 1,2,3,4,5 }
	}*/

	///4. ��ֵ˳��(���ں����е�--val�����Ĵ���)
	cout << factorial(3) << endl;

	///5. �����βκͷ�������:�޷���int*[]ת��Ϊint[]
	///int arr[5] = { 1, 2, 3, 4 };
	///int p_arr = p_array(arr);
}