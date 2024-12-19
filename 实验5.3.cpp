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
		cout << "长方体体积为：" << length * width * height << endl;
	}
};
int main()
{
	int l, w, h;
	cuboid cuboid1;
	cout << "请依次输入长方体的长宽高：" << endl;
	cin >> l >> w >> h;
	cuboid1.set(l, w, h);
	cuboid1.volumn();
	return 0;
}