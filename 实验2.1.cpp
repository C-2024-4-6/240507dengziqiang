#include <iostream>
using namespace std;

int main() {
	char ch;
	cout << "������һ���ַ���";
	cin >> ch;
	if (ch >= 'a' && ch <= 'z') {
		cout << char(ch - 32) << endl;
	}
	else {
		cout << int(ch + 1) << endl;
	}
	system("pause");
	return 0;
}