//ʵ��һ
//��һ
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
//���
/*#include <iostream>
using namespace std;
int main()
{
	const double pi = 3.1416;
	double r, h,v;
	cout << "������Բ׶����Բ�뾶��r=";
	cin >> r;
	cout << "������Բ׶�ĸߣ�h=";
	cin >> h;
	v =pi * r * r * h/3;
	cout << "Բ׶�������V=" << v << endl;
}*/
//����
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

//����
/*#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	unsigned int testUnint = 65534;//oxfffe
	cout << "output in unsigned int 1 type:" << testUnint<< endl; //<<oct;
	cout << "output in char type:!" << static_cast<char>(testUnint) << endl;
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;//Ϊʲô���Ϊ-2?:
	cout << "output in int type:" << static_cast<int>(testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl; //16�������
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

//����
/*#include <iostream>
using namespace std;
int main()
{
	double a,c;
	cout << "�����뻪���¶ȣ�" << endl;
	cin >> a;
	c =   (a-32)*5/9;
	cout << "ת��Ϊ�����¶�Ϊ��" << c << endl;
	system("pause");
	return 0;
}*/

//ʵ��2
//��һ
/*#include <iostream>
using namespace std;

int main() {
	char ch;
	cout << "������һ���ַ���";
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
//���
/*#include <iostream>
using namespace std;
int main()
{
	double x, y;
	cout << "������x��0<x<10��" << endl;
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
		cout << "�������ڷ�Χ��" << endl;
	}
	system("pause");
	return 0;
}
*/

//����
/*#include <iostream>
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
}*/
//����
/*#include <iostream>
using namespace std;
int main()
{
	double a, b, c;
	char op;
	cout << "������һ����" << endl;
	cin >> a;
	cout << "������һ�������(+,-��*��/,%)" << endl;
	cin >> op;
	cout << "������һ����" << endl;
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
			cout << "����ȡ�����㣬��������Ϊ 0���Ҳ�����ӦΪ������" << endl;
		}
		else
			c = static_cast<int>(a) % static_cast<int>(b);
		cout << c << endl;
		break;
	case'/':
		if (b == 0)
			cout << "���ڳ������㣬��������Ϊ 0��" << endl;
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
	cout << "������һ���ַ�" << endl;
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
	cout << "Ӣ����ĸ����" << a << endl;
	cout << "�ո����" << b << endl;
	cout << "�����ַ�����" << c<< endl;
	cout << "�����ַ�����" << d<< endl;
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
	cout << "ƽ��ÿ�컨�ѣ�" << averageCost << "Ԫ" << endl;

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