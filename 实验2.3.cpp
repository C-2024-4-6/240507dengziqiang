#include <iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << "�����������ε�������" << endl;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && c + b > a)
	{
		if (a == b || b == c || a == c)
			cout << "���ǵ���������" << endl;
		else
			cout << "�����ǵ���������" << endl;
	}
	else
		cout << "������������" << endl;
	system("pause");
	return 0;
}