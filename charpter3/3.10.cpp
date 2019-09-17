#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string;

int main() {
	string s, ans;
	cin >> s;
	for (auto c : s)
		if (!ispunct(c)) {
			ans += c;
		}
	cout << ans << endl;
	const string a = "sdvs";
	system("pause");
}