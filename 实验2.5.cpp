#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	char ch;
	int a = 0, b = 0, c = 0, d = 0;
	cout << "������һ���ַ�" << endl;
	ch = getchar();
	while (ch != '\n')
	{
		if ((ch >= 'a') && (ch <= 'z') || (ch >= 'A') && (ch <= 'Z'))
		{
			a++;
		}
		else if (ch == ' ')
		{
			b++;
		}
		else if (ch >= '0' && ch <= '9')
		{
			c++;
		}
		else
		{
			d++;
		}
		ch = getchar();
	}
	cout << "Ӣ����ĸ����" << a << endl;
	cout << "�ո����" << b << endl;
	cout << "�����ַ�����" << c << endl;
	cout << "�����ַ�����" << d << endl;
	system("pause");
	return 0;
}