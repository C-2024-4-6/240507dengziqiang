#include <iostream>
using namespace std;
int main()
{
	int a, b, n;
	double c;
	cout << "��������������" << endl;
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
	cout << "���ǵ����������" << n << endl;
	c = a * b / n;
	cout << "���ǵ���С��������" << c << endl;
	system("pause");
	return 0;
}