<<<<<<< HEAD
# include <iostream>
using namespace std;
int hs(int a, int b)
{
	int n;
	a > b ? n = b : n = a;
	while (n)
	{
		if (a % n == 0 && b % n == 0)
		{
			break;
		}
		--n;
	}
	return a * b / n;
}
int main()
{
	int a, b;
	double c, d;
	cout << "请输入两个整数" << endl;
	cin >> a >> b;
	c = hs(a, b);
	cout << "它们的最小公倍数是" << c << endl;
	d = a * b / c;
	cout << "它们的最大公因数是" << d << endl;
	return 0;
=======
# include <iostream>
using namespace std;
int hs(int a, int b)
{
	int n;
	a > b ? n = b : n = a;
	while (n)
	{
		if (a % n == 0 && b % n == 0)
		{
			break;
		}
		--n;
	}
	return a * b / n;
}
int main()
{
	int a, b;
	double c, d;
	cout << "请输入两个整数" << endl;
	cin >> a >> b;
	c = hs(a, b);
	cout << "它们的最小公倍数是" << c << endl;
	d = a * b / c;
	cout << "它们的最大公因数是" << d << endl;
	return 0;
>>>>>>> 9df952d9ef3c74aee0ca372828614037dc5f6c1a
}