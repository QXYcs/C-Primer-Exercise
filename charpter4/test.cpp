#include <iostream>
#include <vector>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int main() {
	///1. 比较运算符类型转化理解
	char *cp = "Hello,word";
	int i = 1;
	double j = 1.1;
	if (i == j) cout << "?" << endl;
	
	///2. sizeof
	///char类型执行sizeof结果为1
	char c[] = "Hello123";
	int ia[] = {1,2,3,4,5,6,7,8};
	string s = "Hello123";
	cout << sizeof c << ' ' << sizeof ia << ' ' << sizeof s << endl;
	system("pause");

	///3. 算数类型转化：
	bool flag;
	char cval;
	short sval; unsigned short usval;
	int ival; unsigned int  uival;
	long lval; unsigned long ulval;
	float fval; double dval;
	auto a = (300000000 * 300000000);
	cout << a << endl;
	system("pause");

	///4. 命名的强制类型转化
	dval = 2.30;
	void *vp = &dval;
	double *dp = static_cast<double*>(vp);
	cout << *dp << endl;
	cout << *static_cast<int*>(vp) << endl; ///由于转化后所得类型不是所指类型 出现未定义结果
	
	cval = 'a';
	const char* pc = &cval;
	char *p = const_cast<char*> (pc);
	cout << *p << endl;
	*p = 'b'; ///使用*p写值确实改变了*pc 和 *p的值，但是根据p145,这是未定义行为
	cout << *p << ' ' << *pc << endl; ///
	system("pause");

	///5. 求值顺序(看（1）（2）以及（3）（4）组表达式结果可得P150结论，不过要是重复运行同一条语句结果是一样的[不是时间的随机数？])
	i = 1; 
	cout << i++ + i << ' ' << i + i++ << endl; ///4 2 (1)
	i = 1; 
	cout << i++ + i << endl; ///4 2 (2)
	i = 1;
	cout << ++i + i << ' ' << i + i++ << endl; ///6 2
	i = 1;
	cout << i++ + 1 + i << ' ' << i + 1 + i++ << endl; ///5 3（3）
	i = 1;
	cout << i++ + 1 + i << endl; ///5 3（4）
	i = 1;
	cout << ++i + 1 + i << ' ' << ++i + 1 + i << endl; ///7 7
	system("pause");
}