#include <iostream>
using namespace std;
int main()
{
	double x, y;
	cout << "请输入x（0<x<10）" << endl;
	cin >> x;
	if (x > 0 && x < 10)
	{
		if (x > 0 && x < 1)
		{
			y = 3 - 2 * x;
			cout << "y=" << y << endl;
		}
		else if (x >= 1 && x < 5)
		{
			y = 2 / (4 * x) + 1;
			cout << "y=" << y << endl;
		}
		else
		{
			y = x * x;
			cout << "y=" << y << endl;
		}
	}
	else
	{
		cout << "此数不在范围内" << endl;
	}
	system("pause");
	return 0;
}