# include <iostream>
using namespace std;
int fac(int day)
{
	int t;
	if (day == 1)
		return 1;
	else
		t = (fac(day - 1) + 1) * 2;
	return t;
}
int main()
{
	int n = 10;
	cout << "��һ�칲ժ������" << fac(n) << "����" << endl;

	return 0;
}