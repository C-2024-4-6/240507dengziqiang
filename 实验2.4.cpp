#include <iostream>
using namespace std;
int main()
{
	double a, b, c;
	char op;
	cout << "������һ����" << endl;
	cin >> a;
	cout << "������һ�������(+,-��*��/,%)" << endl;
	cin >> op;
	cout << "������һ����" << endl;
	cin >> b;
	switch (op)
	{
	case'+':
		cout << a + b << endl;
		break;
	case'-':
		cout << a - b << endl;
		break;
	case'*':
		cout << a * b << endl;
		break;
	case'%':
		if (static_cast<int>(b) == 0 || a < static_cast<int>(a) || b < static_cast<int>(b))
		{
			cout << "����ȡ�����㣬��������Ϊ 0���Ҳ�����ӦΪ������" << endl;
		}
		else
			c = static_cast<int>(a) % static_cast<int>(b);
		cout << c << endl;
		break;
	case'/':
		if (b == 0)
			cout << "���ڳ������㣬��������Ϊ 0��" << endl;
		else
			cout << a / b << endl;
		break;
	}
	system("pause");
	return 0;
}