#include <iostream>
#include <vector>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int main() {
	///1. �Ƚ����������ת�����
	char *cp = "Hello,word";
	int i = 1;
	double j = 1.1;
	if (i == j) cout << "?" << endl;
	
	///2. sizeof
	///char����ִ��sizeof���Ϊ1
	char c[] = "Hello123";
	int ia[] = {1,2,3,4,5,6,7,8};
	string s = "Hello123";
	cout << sizeof c << ' ' << sizeof ia << ' ' << sizeof s << endl;
	system("pause");

	///3. ��������ת����
	bool flag;
	char cval;
	short sval; unsigned short usval;
	int ival; unsigned int  uival;
	long lval; unsigned long ulval;
	float fval; double dval;
	auto a = (300000000 * 300000000);
	cout << a << endl;
	system("pause");

	///4. ������ǿ������ת��
	dval = 2.30;
	void *vp = &dval;
	double *dp = static_cast<double*>(vp);
	cout << *dp << endl;
	cout << *static_cast<int*>(vp) << endl; ///����ת�����������Ͳ�����ָ���� ����δ������
	
	cval = 'a';
	const char* pc = &cval;
	char *p = const_cast<char*> (pc);
	cout << *p << endl;
	*p = 'b'; ///ʹ��*pдֵȷʵ�ı���*pc �� *p��ֵ�����Ǹ���p145,����δ������Ϊ
	cout << *p << ' ' << *pc << endl; ///
	system("pause");

	///5. ��ֵ˳��(����1����2���Լ���3����4������ʽ����ɵ�P150���ۣ�����Ҫ���ظ�����ͬһ���������һ����[����ʱ����������])
	i = 1; 
	cout << i++ + i << ' ' << i + i++ << endl; ///4 2 (1)
	i = 1; 
	cout << i++ + i << endl; ///4 2 (2)
	i = 1;
	cout << ++i + i << ' ' << i + i++ << endl; ///6 2
	i = 1;
	cout << i++ + 1 + i << ' ' << i + 1 + i++ << endl; ///5 3��3��
	i = 1;
	cout << i++ + 1 + i << endl; ///5 3��4��
	i = 1;
	cout << ++i + 1 + i << ' ' << ++i + 1 + i << endl; ///7 7
	system("pause");
}