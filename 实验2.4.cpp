#include <iostream>
using namespace std;
int main()
{
	double a, b, c;
	char op;
	cout << "请输入一个数" << endl;
	cin >> a;
	cout << "请输入一个运算符(+,-，*，/,%)" << endl;
	cin >> op;
	cout << "请输入一个数" << endl;
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
			cout << "对于取余运算，除数不能为 0，且操作数应为整数。" << endl;
		}
		else
			c = static_cast<int>(a) % static_cast<int>(b);
		cout << c << endl;
		break;
	case'/':
		if (b == 0)
			cout << "对于除法运算，除数不能为 0。" << endl;
		else
			cout << a / b << endl;
		break;
	}
	system("pause");
	return 0;
}