#include <iostream>
using namespace std;

int main() {
	//////指针
	int val = 42;
	int *p1 = &val;
	int *p2 = p1; ///p1 == &val  <------------------------------------------------------
	/*由于定义时*只表示p2是指针所以上面一行等效于                                      |
	int *p2;                                                                           |
	p2 = p1;                                                                           |
	                                                                                   |*/
	cout << &val << endl; /// val的地址，该地址对应的内存块存储着字面值常量42          |
	cout << *p1 << ' ' << p1 << ' ' << &p1 << endl; ///*p1所指对象（用*将地址解析为对象） p1存放的所指对象地址 p1的地址
	cout << *p2 << ' ' << p2 << ' ' << &p2 << endl; ///*p2所指对象（用*将地址解析为对象） p2存放的所指对象地址 p2的地址
	
	val = 24;
	cout << &val << endl; /// 
	cout << *p1 << ' ' << p1 << ' ' << &p1 << endl; 
	cout << *p2 << ' ' << p2 << ' ' << &p2 << endl;

	int **p3 = &p1;
	cout << **p3 << ' ' << *p3 << ' ' << p3 << ' ' << &p3 << endl;  /// p1指向的对象，即val存储的值||  p3指向的对象，即指针p1。值为p1位置存储的内容，即val的地址||  p3存储的p1的地址||  p3的地址
	///给指针存储一个新地址，即使其指向和这个地址对应的对象。对象指具有某种类型并能存储数据的内存空间


	//////指向指针的引用
	val = 42;
	int *p;
	int *&r = p;

	r = &val;
	cout << *r << endl;
	*r = 0;
	cout << val << endl;
	
	//////对const引用
	const int ci = 1024;
	const int &r2 = ci; ///需加限定符，否则不合法
	const int &r3 = 31; ///注意非对常量的引用（无const限定符）为非法
	double ci2 = 3.14;
	const int &r4 = ci2; ///注意非对常量的引用（无const限定符）为非法
	cout << r2 << ' ' << r3 << ' ' << r4 << endl;
	
	//////指向const的指针和const指针
	const int *p4 = &ci;

	const double *p5 = &ci2; ///允许用const指针指向非const量，然而无法通过指针修改这个值。当然类型符必须一致
	int errNumb = 0;
	int *const currErr = &errNumb; ///从右向左读，const代表一个常量对象, * 代表是一个指针，即常量指针。由于引用不是一个对象所以没有常量引用
	cout << *p4 << ' ' << *p5 << ' ' << *currErr << endl;
	*currErr = 1;
	cout << errNumb << endl;
	const int *const pn = &errNumb; ///如果 errNumb为const,想用常量指针则必须用指向常量的const指针
	cout << *pn << endl;
	
	//////int const*   const int*   const int *const 类型区别
	///三者的区别主要体现在(1)定义时是否需要初始化 (2)是否可以修改指针(存储的地址)值 (3)是否可以修改指针指向的对象值
	///关于更加普遍的情况赋值和拷贝的区别见2.4.3顶层const
	///1. int const*
	int numb = 10;
	int numb2 = 11;
	int *const p6 = &numb;
	/*
	int *const p6;
	p6 = &numb;
	不合法 定义时必须初始化*/

	///p6 = &numb2; 不合法 常量指针值无法修改
	*p6 = 11; ///合法可以修改指针指向的对象值

	///2. const int*
	int numb3 = 13;
	int numb4 = 14;
	const int *p7 = &numb3;
	/*
	const int *p7;
	p7 = &numb3;
	合法，定义时无须初始化*/

	const int *p8 = &numb4; 
	///*p7 = 14; 不合法，指向常量的指针指向的对象值无法通过指针修改
	p7 = p8; ///合法，指针值可以修改

	///3. const int *const
	int numb5 = 15;
	int numb6 = 16;
	const int *const p9 = &numb5;
	/*
	const int *const p9;
	p9 = &numb5;
	不合法，必须初始化*/

	const int * const p10 = &numb6;
	///*p9 = 16; 不合法，指向常量的常指针指向的对象值无法通过指针修改
	///p9 = p10; 不合法，其值也不可以修改
	system("pause");
}