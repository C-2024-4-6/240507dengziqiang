#include <iostream>
using namespace std;
int main()
{
	const double pi = 3.1416;
	double r, h, v;
	cout << "������Բ׶����Բ�뾶��r=";
	cin >> r;
	cout << "������Բ׶�ĸߣ�h=";
	cin >> h;
	v = pi * r * r * h / 3;
	cout << "Բ׶�������V=" << v << endl;
}