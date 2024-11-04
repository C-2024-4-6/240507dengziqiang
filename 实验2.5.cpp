#include <iostream>
#include <cctype>
using namespace std;
int main()
{
	char ch;
	int a = 0, b = 0, c = 0, d = 0;
	cout << "请输入一行字符" << endl;
	while (cin.get(ch))
	{
		if (isalpha(ch))
			a++;
		else if (isspace(ch))
			b++;
		else if (isdigit(ch))
			c++;
		else
			d++;
	}
	cout << "英文字母个数" << a << endl;
	cout << "空格个数" << b << endl;
	cout << "数字字符个数" << c << endl;
	cout << "其他字符个数" << d << endl;
	system("pause");
	return 0;
}