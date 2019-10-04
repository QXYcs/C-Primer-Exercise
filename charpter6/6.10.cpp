# include <iostream>
using std::cin; using std::cout; using std::endl;
void exchange(int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void  aa(int b) {
	cout << b << endl;
};

int main() {
	int num1, num2;
	cin >> num1 >> num2; ///使用cin只能向char*指针输入
	int *a = &num1, *b = &num2;
	exchange(a, b);
	cout << *a << ' ' << *b << endl;
	aa(1.2);
	system("pause");
}