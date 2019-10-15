#include "Sales_data.h"
///#include "Sales_data.h"  没有保护符include两次会出错 有则没有问题
#include <string>
#include <iostream>
using namespace std;
///在头文件"Sales_data.h"已经包含了<string>,源文件中不写也可以使用。如果包含using namespace std;则主文件中可以不写
///然而使用头文件时不看源码并不知道是否使用了<string>，也没有必要知道。未防止重复include，在头文件里使用头文件保护符
int main() {
}