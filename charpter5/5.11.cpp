#include <string>
#include <iostream>
using std::string;
using std::cin; using std::cout; using std::endl;

int main() {
	int acnt = 0, ecnt = 0, icnt = 0, ocnt = 0, ucnt = 0, spcnt = 0, tabcnt = 0, encnt = 0;
	string s;
	while (getline(cin, s)) {
		++encnt;
		for (auto c : s) {
			if (isalpha(c)) c = tolower(c);
			switch (c) {
				case 'a':
					acnt++;
					break;
				case 'e':
					ecnt++;
					break;
				case 'i':
					icnt++;
					break;
				case 'o':
					ocnt++;
					break;
				case 'u':
					ucnt++;
					break;
				case ' ': ///²»ÊÇ'\0'
					spcnt++;
					break;
				case '\t':
					tabcnt++;
					break;
				case '\v':
					tabcnt++;
					break;
				default:;
			}
		}
	}
	cout << acnt << ecnt << icnt << ocnt << ucnt << spcnt << tabcnt << encnt << endl;
	system("pause");
}