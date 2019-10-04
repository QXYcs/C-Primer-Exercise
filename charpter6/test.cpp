#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

int create_lso() {
	static int lso; ///lso执行值初始化(内置类型0)，自动对象执行默认初始化(内置类型未定义)
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

	///1. 局部静态对象
	create_lso();
	///cout << (lso + 2) << endl; ///lso无法访问，因为只在函数create_lso作用域中可见
	cout << create_lso() << endl;

	///2. 返回局部对象的指针(这样做是不合法的，然而如果局部变量是内置类型编译可以通过)
	/*所谓不能返回局部变量，是指局部变量在栈空间中分配内存，函数返回时栈指针回退，当主调函数继续调用其它被调函数时，栈指针上移，上一次函数调用所分配的空间会被本次调用覆盖，如果此时再引用原来的局部变量就会出现不可预见的结果。
	所以局部变量在函数返回时并不是被销毁而是相当于可被再次利用。
	所以如果第一题你在cout<<x<<endl;前调用一函数，此函数大量分配局部变量，后面的输出值必变！*/
	///cout << create_lso() << endl;
	///cout << val() << endl;

	///3. 列表初始化返回值(内置类型列表中的值不能超过一个)
	/*const int* list_val() {///不合法
		return{ 1,2,3,4,5 }
	}*/

	///4. 求值顺序(由于函数中的--val产生的错误)
	cout << factorial(3) << endl;

	///5. 复杂形参和返回类型:无法从int*[]转化为int[]
	///int arr[5] = { 1, 2, 3, 4 };
	///int p_arr = p_array(arr);
}