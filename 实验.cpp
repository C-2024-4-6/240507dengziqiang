//实验一
//题一
/*#include <iostream>
using namespace std;
int main()
{
int k=1;
int i = k + 1;
cout << i++ << endl;
cout << i++ << endl;
cout << "Welcome to C++" << endl;
system("pause");
return 0;

}*/
//题二
/*#include <iostream>
using namespace std;
int main()
{
	const double pi = 3.1416;
	double r, h,v;
	cout << "请输入圆锥底面圆半径：r=";
	cin >> r;
	cout << "请输入圆锥的高：h=";
	cin >> h;
	v =pi * r * r * h/3;
	cout << "圆锥的体积是V=" << v << endl;
}*/
//题三
/*#include <iostream>
using namespace std;
int main()
{
	cout << "char length:" << sizeof(char) << endl;
	cout << "int length:" << sizeof(int) << endl;
	cout << "float length:" << sizeof(float) << endl;
	cout << "bool length:" << sizeof(bool) << endl;
	system("pause");
	return 0;
}*/

//题四
/*#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	unsigned int testUnint = 65534;//oxfffe
	cout << "output in unsigned int 1 type:" << testUnint<< endl; //<<oct;
	cout << "output in char type:!" << static_cast<char>(testUnint) << endl;
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;//为什么结果为-2?:
	cout << "output in int type:" << static_cast<int>(testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl; //16进制输出
	system("pause");
	return 0;
}*/

/*#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	unsigned int testUnint = 65534;
	cout<< "output in Oct unsigned int type:" <<oct<< testUnint << endl;
	system("pause");
	return 0;
}*/

//题五
/*#include <iostream>
using namespace std;
int main()
{
	double a,c;
	cout << "请输入华氏温度：" << endl;
	cin >> a;
	c =   (a-32)*5/9;
	cout << "转化为摄氏温度为：" << c << endl;
	system("pause");
	return 0;
}*/

//实验2
//题一
/*#include <iostream>
using namespace std;

int main() {
	char ch;
	cout << "请输入一个字符：";
	cin >> ch;
	if (ch >= 'a' && ch <= 'z') {
		cout << char(ch - 32) << endl;
	}
	else {
		cout << int(ch + 1)<<endl;
	}
	system("pause");
	return 0;
}
*/
//题二
/*#include <iostream>
using namespace std;
int main()
{
	double x, y;
	cout << "请输入x（0<x<10）" << endl;
	cin >> x ;
	if (x>0&&x < 10)
	{
		if (x>0&&x<1)
		{
			y = 3 - 2 * x;
			cout << "y=" << y << endl;
		}
		else if (x>=1&&x<5)
		{
			y = 2 / (4 * x) + 1;
			cout << "y=" << y << endl;
		}
		else
		{
			y = x * x;
			cout << "y=" << y << endl;
		}
	}
	else
	{
		cout << "此数不在范围内" << endl;
	}
	system("pause");
	return 0;
}
*/

//题三
/*#include <iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << "请输入三角形的三条边" << endl;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && c + b > a)
	{
		if (a == b || b == c || a == c)
			cout << "它是等腰三角形" << endl;
		else
			cout << "它不是等腰三角形" << endl;
	}
	else
		cout << "它不是三角形" << endl;
	system("pause");
	return 0;
}*/
//题四
/*#include <iostream>
using namespace std;
int main()
{
	double a, b, c;
	char op;
	cout << "请输入一个数" << endl;
	cin >> a;
	cout << "请输入一个运算符(+,-，*，/,%)" << endl;
	cin >> op;
	cout << "请输入一个数" << endl;
	cin >> b;
	switch (op)
	{
	case'+':
		cout << a + b << endl;
		break;
	case'-':
		cout << a - b << endl;
		break;
	case'*':
		cout << a * b << endl;
		break;
	case'%':
		if (static_cast<int>(b) == 0 || a < static_cast<int>(a) || b < static_cast<int>(b))
		{
			cout << "对于取余运算，除数不能为 0，且操作数应为整数。" << endl;
		}
		else
			c = static_cast<int>(a) % static_cast<int>(b);
		cout << c << endl;
		break;
	case'/':
		if (b == 0)
			cout << "对于除法运算，除数不能为 0。" << endl;
		else
			cout << a / b << endl;
		break;
	}
	system("pause");
	return 0;
}*/

/*#include <iostream>
#include <cctype>
using namespace std;
int main()
{
	char ch;
	int a = 0, b = 0, c = 0, d = 0;
	cout << "请输入一行字符" << endl;
	while (cin.get(ch))
	{
		if (isalpha(ch))
			a++;
		else if (isspace(ch))
			b++;
		else if (isdigit(ch))
			c++;
		else
			d++;
	}
	cout << "英文字母个数" << a << endl;
	cout << "空格个数" << b << endl;
	cout << "数字字符个数" << c<< endl;
	cout << "其他字符个数" << d<< endl;
	system("pause");
	return 0;
}*/

/*#include <iostream>
using namespace std;

int main() {
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}*/

#include <iostream>
using namespace std;
int main()
{
	int day = 1;
	int totalApples = 2;
	double totalCost = 0.8 * 2;
	while (totalApples <= 100)
	{
		day++;
		int applesToday = totalApples * 2;
		totalApples += applesToday;
		totalCost += 0.8 * applesToday;
	}
	double averageCost = totalCost / day;
	cout << "平均每天花费：" << averageCost << "元" << endl;

	system("pause");
	return 0;
}

/*#include <iostream>
using namespace std;
int main()
{
	system("pause");
	return 0;
}*/

/*#include <iostream>
using namespace std;
int main()
{
	system("pause");
	return 0;
}*/

/*#include <iostream>
using namespace std;
int main()
{
	system("pause");
	return 0;
}*/