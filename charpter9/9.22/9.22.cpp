#include <vector>
#include <iostream>

using namespace std;

int main() {
	vector<int> iv{ 1, 2, 3, 4, 5, 7, 9};
	///cout << iv.size() / 2;
	vector<int>::size_type increment = iv.size() / 2;///iv.size() / 2��ѭ��������
	vector<int>::iterator iter = iv.begin(), mid = iv.begin() + increment; 

	while (iter != mid){
		cout << "mid: " << *mid << endl;
	    cout << "iter: " << *iter << endl;
		if (*iter == 3){
			iter = iv.insert(iter, 2 * 3);
			++iter;
			mid = iv.begin() + increment + 1; ///ǰ���һ��Ԫ�أ�ԭ�ȵ�λ�ü�1
			cout << "mid_in_if: " << *mid << endl;
			cout << "iter_in_if: " << *iter << endl;
		}
		++iter;
	}
	for (const auto &i : iv)
		cout << i << endl;

	system("pause");
}
