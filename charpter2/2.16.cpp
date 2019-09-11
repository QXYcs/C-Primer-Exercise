#include <iostream>
using namespace std;

int main() {
	for (int j = 0; j < 4; j++) {
		int i = 0, &r1 = i;
		double d = 1, &r2 = d;
		
		switch (j) {
		case 0: {
			r2 = 3.14159;
			cout << "case0: " << r2 << endl;
			break;
		}

		case 1: {
			r2 = r1;
			cout << "case1: " << r2 << endl;
			break;
		}

		case 2: {
			i = r2;
			cout << "case2: " << i << endl;
			break;
		}

		case 3: {
			r1 = d;
			cout << "case3: " << r1 << endl;
			break;
		}
		}
	}
	system("pause");
}