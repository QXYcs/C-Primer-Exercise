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
	///while (cin >> num) nums.push_back(num); ///�뱣֤��������
	auto beg = nums.begin(), end = nums.end(), mid = beg + (end - beg)/2;
	if (mid != nums.end() && *mid == sought) {
		cout << "success" << endl;
		system("pause");
		return 0;
	}
	/// cout << end - beg << endl;
	while (beg != end) { ///��������1 дΪbeg < end��Ϊ����
		cout << *mid << ' ' << *beg << ' ' << endl;
		if (sought < *mid)
			end = mid - 1; ///���дmid - 1,��beg midͬʱָ���һ��Ԫ��ʱend��Ƿ���

		else
			beg = mid + 1;
		mid = beg + (end - beg)/2;
		if (mid != nums.end() && *mid == sought) { ///!!!�ǳ���Ҫ��beg��ǰһ��ִ��mid+1�Ļ��ᵼ����β����������,
			///mid�����Ҳ����β���������ȣ�����ʱ����ִ���
			cout << "success" << endl;
			break;
		}
	}
	system("pause");
}
///�ܽ᣺���ǵ�������С��Χ��ʱ����ȡmid - 1 mid ���� mid + 1�أ�
///(1)������֪mid������sought����Χ��ǰһ��ʱȡmid - 1����һ��ʱȡmid + 1����
///(2)��ο��Ǳ߽����(��������Ϊbeg��end���ڻ�û�ҵ���),��soughtС��mid��
///��beg end����ʱmid���ݼ���ʽ�ص���beg����һ��ѭ����ʼ���soughtС��mid,
///��end��Ϊmid - 1����end��С��beg�����ʱ��Ӧ�˳��ģ�������Ԥ�ڡ�
///����������԰ѽ���������Ϊbeg<end��Ȼ����һ�����������beg==midָ���һ��Ԫ��
///b��end����ʱend��Ϊmid-1�ᵼ��ֱ���쳣������endÿ��Ӧ��ȡmid����Ҳ�������
///ѭ���˳�����Ϊbeg==mid��end��sought<midʱ��һ��end��Ϊmid==beg���޴𰸾��˳��ˡ�
///(3)�߽�������sought>mid, mid����һֱ����Ϊ0�������һ��ѭ����ʼbeg�Ը�ֵΪmid��
///��������ѭ�������Դ����￴Ӧ����beg=mid+1�����ǵ�endΪβ�����������ʱ����һ��ѭ�����
///beg == mid == end��*mid�ǷǷ��ġ�����ʹ��*mid�ĵط�һ��Ҫ�����Ƿ�Ϊβ�������������жϡ�
///(4)����һ��if (mid != nums.end() && *mid == sought)����ж�����ÿ��midֵ���º󶼽��С�P100ҳ�ĳ����ж�
///д��while()�ﱣ֤��һ�㣨��ʼ��->�ж�->����->�ж�...����������Ҫ��֤�ɹ����success���Բ���д�����λ�á�
///���ݱ��������Ҫ���㲻©�����Ҫ�ڳ�ʼ�����ѭ�����ﶼдһ�Ρ�

///˼����(1)�����С��Χʱǰһ���Ͻ�ȡmid-1 ��һ���½�ȡmidʱ����α��
///		 (2)�Ƿ�����if (mid != nums.end() && *mid == sought)������ֻдһ�Σ�