#include <string>
#include <iostream>
#include<stdexcept>
using std::string;
using std::cin; using std::cout; using std::endl;
using std::runtime_error;
int main() {
	double a, b;
	while(cin >> a >> b){
		try {
			if (!b) throw runtime_error("Divisor cannot be zero"); ///扔出错误直接跳转到catch
			cout << a / b << endl;
		}
		catch (runtime_error err) {
			cout << err.what() << endl;
			cout << "Try again?(y/n)";
			char c;
			cin >> c;
			if (!cin || c == 'n') break;
		}
	}
	system("pause");
}