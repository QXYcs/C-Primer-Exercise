#include <iostream>
using namespace std;

int main() {
	//////ָ��
	int val = 42;
	int *p1 = &val;
	int *p2 = p1; ///p1 == &val  <------------------------------------------------------
	/*���ڶ���ʱ*ֻ��ʾp2��ָ����������һ�е�Ч��                                      |
	int *p2;                                                                           |
	p2 = p1;                                                                           |
	                                                                                   |*/
	cout << &val << endl; /// val�ĵ�ַ���õ�ַ��Ӧ���ڴ��洢������ֵ����42          |
	cout << *p1 << ' ' << p1 << ' ' << &p1 << endl; ///*p1��ָ������*����ַ����Ϊ���� p1��ŵ���ָ�����ַ p1�ĵ�ַ
	cout << *p2 << ' ' << p2 << ' ' << &p2 << endl; ///*p2��ָ������*����ַ����Ϊ���� p2��ŵ���ָ�����ַ p2�ĵ�ַ
	
	val = 24;
	cout << &val << endl; /// 
	cout << *p1 << ' ' << p1 << ' ' << &p1 << endl; 
	cout << *p2 << ' ' << p2 << ' ' << &p2 << endl;

	int **p3 = &p1;
	cout << **p3 << ' ' << *p3 << ' ' << p3 << ' ' << &p3 << endl;  /// p1ָ��Ķ��󣬼�val�洢��ֵ||  p3ָ��Ķ��󣬼�ָ��p1��ֵΪp1λ�ô洢�����ݣ���val�ĵ�ַ||  p3�洢��p1�ĵ�ַ||  p3�ĵ�ַ
	///��ָ��洢һ���µ�ַ����ʹ��ָ��������ַ��Ӧ�Ķ��󡣶���ָ����ĳ�����Ͳ��ܴ洢���ݵ��ڴ�ռ�


	//////ָ��ָ�������
	val = 42;
	int *p;
	int *&r = p;

	r = &val;
	cout << *r << endl;
	*r = 0;
	cout << val << endl;
	
	//////��const����
	const int ci = 1024;
	const int &r2 = ci; ///����޶��������򲻺Ϸ�
	const int &r3 = 31; ///ע��ǶԳ��������ã���const�޶�����Ϊ�Ƿ�
	double ci2 = 3.14;
	const int &r4 = ci2; ///ע��ǶԳ��������ã���const�޶�����Ϊ�Ƿ�
	cout << r2 << ' ' << r3 << ' ' << r4 << endl;
	
	//////ָ��const��ָ���constָ��
	const int *p4 = &ci;

	const double *p5 = &ci2; ///������constָ��ָ���const����Ȼ���޷�ͨ��ָ���޸����ֵ����Ȼ���ͷ�����һ��
	int errNumb = 0;
	int *const currErr = &errNumb; ///�����������const����һ����������, * ������һ��ָ�룬������ָ�롣�������ò���һ����������û�г�������
	cout << *p4 << ' ' << *p5 << ' ' << *currErr << endl;
	*currErr = 1;
	cout << errNumb << endl;
	const int *const pn = &errNumb; ///��� errNumbΪconst,���ó���ָ���������ָ������constָ��
	cout << *pn << endl;
	
	//////int const*   const int*   const int *const ��������
	///���ߵ�������Ҫ������(1)����ʱ�Ƿ���Ҫ��ʼ�� (2)�Ƿ�����޸�ָ��(�洢�ĵ�ַ)ֵ (3)�Ƿ�����޸�ָ��ָ��Ķ���ֵ
	///���ڸ����ձ�������ֵ�Ϳ����������2.4.3����const
	///1. int const*
	int numb = 10;
	int numb2 = 11;
	int *const p6 = &numb;
	/*
	int *const p6;
	p6 = &numb;
	���Ϸ� ����ʱ�����ʼ��*/

	///p6 = &numb2; ���Ϸ� ����ָ��ֵ�޷��޸�
	*p6 = 11; ///�Ϸ������޸�ָ��ָ��Ķ���ֵ

	///2. const int*
	int numb3 = 13;
	int numb4 = 14;
	const int *p7 = &numb3;
	/*
	const int *p7;
	p7 = &numb3;
	�Ϸ�������ʱ�����ʼ��*/

	const int *p8 = &numb4; 
	///*p7 = 14; ���Ϸ���ָ������ָ��ָ��Ķ���ֵ�޷�ͨ��ָ���޸�
	p7 = p8; ///�Ϸ���ָ��ֵ�����޸�

	///3. const int *const
	int numb5 = 15;
	int numb6 = 16;
	const int *const p9 = &numb5;
	/*
	const int *const p9;
	p9 = &numb5;
	���Ϸ��������ʼ��*/

	const int * const p10 = &numb6;
	///*p9 = 16; ���Ϸ���ָ�����ĳ�ָ��ָ��Ķ���ֵ�޷�ͨ��ָ���޸�
	///p9 = p10; ���Ϸ�����ֵҲ�������޸�
	system("pause");
}