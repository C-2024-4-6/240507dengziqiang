#include <iostream>
using namespace std;

double jdz(double x) {    //x是所需要转化绝对值的数
	if (x > 0) {
		return x;
	}
	if (x < 0) {
		return -x;
	}
}
int main()
{
	double a, b, i, x, n;
	cin >> a;
	x = a;
	n = (x + a / x) / 2;
	while (jdz(n - x) > 10e-5)
	{
		i = (n + a / n) / 2;
		x = n;
		n = i;
	}
	cout << n << endl;
	return 0;
}