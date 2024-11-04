#include <iostream>
using namespace std;
int main()
{
	double a, c;
	cout << "请输入华氏温度：" << endl;
	cin >> a;
	c = (a - 32) * 5 / 9;
	cout << "转化为摄氏温度为：" << c << endl;
	system("pause");
	return 0;
}