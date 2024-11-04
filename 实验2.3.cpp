#include <iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << "请输入三角形的三条边" << endl;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && c + b > a)
	{
		if (a == b || b == c || a == c)
			cout << "它是等腰三角形" << endl;
		else
			cout << "它不是等腰三角形" << endl;
	}
	else
		cout << "它不是三角形" << endl;
	system("pause");
	return 0;
}