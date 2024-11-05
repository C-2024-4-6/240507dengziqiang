#include <iostream>
using namespace std;
int main()
{
	int a, b, n;
	double c;
	cout << "请输入两个整数" << endl;
	cin >> a >> b;
	a > b ? n = b : n = a;
	while (n)
	{
		if (a % n == 0 && b % n == 0)
		{
			break;
		}
		--n;
	}
	cout << "它们的最大公因数是" << n << endl;
	c = a * b / n;
	cout << "它们的最小公倍数是" << c << endl;
	system("pause");
	return 0;
}