#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

int main() {
	int num, sought;
	vector<int> nums{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	cin >> sought;
	///while (cin >> num) nums.push_back(num); ///须保证输入有序
	auto beg = nums.begin(), end = nums.end(), mid = beg + (end - beg)/2;
	if (mid != nums.end() && *mid == sought) {
		cout << "success" << endl;
		system("pause");
		return 0;
	}
	/// cout << end - beg << endl;
	while (beg != end) { ///进行条件1 写为beg < end更为保险
		cout << *mid << ' ' << *beg << ' ' << endl;
		if (sought < *mid)
			end = mid - 1; ///如果写mid - 1,当beg mid同时指向第一个元素时end会非法。

		else
			beg = mid + 1;
		mid = beg + (end - beg)/2;
		if (mid != nums.end() && *mid == sought) { ///!!!非常重要，beg在前一步执行mid+1的话会导致与尾后迭代器相等,
			///mid计算后也会与尾后迭代器相等，解析时会出现错误。
			cout << "success" << endl;
			break;
		}
	}
	system("pause");
}
///总结：我们到底在缩小范围的时候是取mid - 1 mid 还是 mid + 1呢？
///(1)首先已知mid不等于sought当范围在前一半时取mid - 1，后一半时取mid + 1合理
///(2)其次考虑边界情况(最差情况即为beg与end相邻还没找到解),且sought小于mid。
///当beg end相邻时mid根据计算式必等于beg。下一次循环开始如果sought小于mid,
///则end变为mid - 1导致end会小于beg。这个时候本应退出的，不符合预期。
///解决方法可以把进行条件改为beg<end。然而另一个问题是如果beg==mid指向第一个元素
///b和end相邻时end变为mid-1会导致直接异常。所以end每次应该取mid。这也不会妨碍
///循环退出。因为beg==mid和end且sought<mid时下一步end变为mid==beg。无答案就退出了。
///(3)边界情况如果sought>mid, mid增量一直保持为0，如果下一次循环开始beg仍赋值为mid，
///则陷入死循环。所以从这里看应该让beg=mid+1。考虑当end为尾后迭代器对象时，下一个循环完后
///beg == mid == end，*mid是非法的。所以使用*mid的地方一定要加上是否为尾后迭代器对象的判断。
///(4)还有一点if (mid != nums.end() && *mid == sought)这个判断须在每次mid值更新后都进行。P100页的程序将判断
///写在while()里保证这一点（初始化->判断->更新->判断...）。而我们要保证成功输出success所以不能写在这个位置。
///根据本题情况需要满足不漏解就需要在初始化后和循环体里都写一次。

///思考：(1)如果缩小范围时前一半上界取mid-1 后一半下界取mid时该如何编程
///		 (2)是否能让if (mid != nums.end() && *mid == sought)这个语句只写一次？