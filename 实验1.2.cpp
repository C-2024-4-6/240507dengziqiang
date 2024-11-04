#include <iostream>
using namespace std;
int main()
{
	const double pi = 3.1416;
	double r, h, v;
	cout << "ÇëÊäÈëÔ²×¶µ×ÃæÔ²°ë¾¶£ºr=";
	cin >> r;
	cout << "ÇëÊäÈëÔ²×¶µÄ¸ß£ºh=";
	cin >> h;
	v = pi * r * r * h / 3;
	cout << "Ô²×¶µÄÌå»ýÊÇV=" << v << endl;
}