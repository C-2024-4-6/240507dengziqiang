//5.3
# include<iostream>
using namespace std;
class cuboid
{
private:
	int length;
	int width;
	int height;
public:
	void set(int l, int w, int h)
	{
		length = l, width = w, height = h;
	}
	void volumn()
	{
		cout << "���������Ϊ��" << length * width * height << endl;
	}
};
int main()
{
	int l, w, h;
	cuboid cuboid1;
	cout << "���������볤����ĳ���ߣ�" << endl;
	cin >> l >> w >> h;
	cuboid1.set(l, w, h);
	cuboid1.volumn();
	return 0;
}