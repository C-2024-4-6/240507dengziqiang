#include <iostream>
#include <cctype>
using namespace std;
int main()
{
	char ch;
	int a = 0, b = 0, c = 0, d = 0;
	cout << "������һ���ַ�" << endl;
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
	cout << "Ӣ����ĸ����" << a << endl;
	cout << "�ո����" << b << endl;
	cout << "�����ַ�����" << c << endl;
	cout << "�����ַ�����" << d << endl;
	system("pause");
	return 0;
}