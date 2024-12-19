#include<iostream>
using namespace std;
class Time
{
private:
	int hour;
	int minute;
	int sec;
public:
	void set(int h, int m, int s)
	{
		hour = h, minute = m, sec = s;
	}
	void get()
	{
		cout << "hour:" << hour << "\t" << "minute：" << minute << "\t" << "sec:" << sec << endl;
	}
};
int main()
{
	Time t1;
	int h, m, s;
	cout << "请输入设定的时间 " << endl;
	cin >> h;
	cin >> m;
	cin >> s;
	t1.set(h, m, s);
	t1.get();
	return 0;
}