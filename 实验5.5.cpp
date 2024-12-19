#include<iostream>
using namespace std;
class point
{
private:
	double x;
	double y;
public:
	void set(double x = 60, double y = 80)
	{
		this->x = x;
		this->y = y;
	}
	void setpoint(double i, double j)
	{
		this->x = 60 + i;
		this->y = 80 + j;
	}
	void display()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	point p1;
	double i, j;
	cout << "ÇëÒÀ´ÎÊäÈëi£¬j£º" << endl;
	cin >> i >> j;
	p1.setpoint(i, j);
	p1.display();
	return 0;

}