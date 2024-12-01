/*
//3.1
# include <iostream>
using namespace std;
int hs(int a, int b)
{
	int n;
	a > b ? n = b : n = a;
	while (n)
	{
		if (a % n == 0 && b % n == 0)
		{
			break;
		}
		--n;
	}
	return a * b / n;
}
int main()
{
	int a, b;
	double c,d;
	cout << "请输入两个整数" << endl;
	cin >> a >> b;
	c = hs(a, b);
	cout << "它们的最小公倍数是" << c << endl;
	d = a * b / c;
	cout << "它们的最大公因数是" << d << endl;
	return 0;
}
*/


//3.2
/*
# include <iostream>
using namespace std;
bool is_prime(int num)
{
	if (num <= 1) {
		return false;
	}
	if (num <= 3) {
		return true;
	}
	if (num % 2 == 0 || num % 3 == 0) {
		return false;
	}

	for (int i = 5; i <= std::sqrt(num); i += 6) {
		if (num % i == 0 || num % (i + 2) == 0) {
			return false;
		}
	}

	return true;
}


int main()
{
	int count = 0;
	for(int i=2;count<=200;i++)
		if(is_prime(i))
		{
			cout << i << "\t";
			count++;
			if (count % 10 == 0)
				cout << endl;
		}

	return 0;
}
*/
//3.3
/*
# include <iostream>
# include"mytemperature.h"
using namespace std;
int main()
{
	cout << "Celsius" << "\t" <<"\t" << "Fahrenheit" << endl;
	for (double i = 40.0; i >= 31.0; i--)
		cout << i << "\t" <<"\t" << celsius_to_fah(i) << endl;
	cout << "Fahrenheit" << "\t" << "Celsius" << endl;
	for (double n = 120.0; n >= 30.0; n=n-10)
		cout << n << "\t" <<"\t" << fahrenheit_to_cels(n) << endl;

	return 0;
}
*/
//3.5
/*
# include <iostream>
using namespace std;
int fac(int day)
{
	int t;
	if (day == 1)
		return 1;
	else
		t = (fac(day-1)+1)*2;
	return t;
}
int main()
{
	int n=10;
	cout << "第一天共摘了桃子" << fac(n) << "个。" << endl;

	return 0;
}
*/
//4.1.1
/*
# include <iostream>
using namespace std;
int main()
{   
	cout << "请输入十个数" << endl;
	int n, i, j;
	int a[10];
	for (n = 0; n < 10; n++)
	{
		cin >> a[n];
		if (a[n] < 0)
			break;
	}
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if (a[i] < a[j])
			{
				int t;
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
	for(i=0;i<j-1;i++)
		for (j = i + 1; j < n; j++)
			if (a[i] == a[j])
			{
				a[j] = 0;
			}
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (a[i] < a[j])
			{
				int t;
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
	cout << "其中不同的数为：" << endl;
	for (i = 0; i < n; i++)
		if (a[i] != 0)
			cout << a[i] << "\t";


	return 0;
}
*/

//4.1.2
/*
# include <iostream>
using namespace std;
int main()
{
	cout << "请输入十个数" << endl;
	int n, i, j;
	double a[10];
	for (n = 0; n < 10; n++)
	{
		cin >> a[n];
		if (a[n] < 0)
			break;
	}
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (a[i] > a[j])
			{
				double t;
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
	for (i = 0; i < n; i++)
		cout << a[i] << "\t";
	return 0;
}
*/

//4.1.3
/*
# include <iostream>
using namespace std;
int main()
{
	int a[100] = {0};
	for (int n = 0; n < 100; n++)
		for (int i = n; i < 100; i = i + n+1)
		{
			if (a[i] == 1)
				a[i] = 0;
			else
				a[i] = 1;
		}
	cout << "以下为开着的柜子" << endl;
	for (int m = 0; m < 100; m++)
		if (a[m] == 1)
			cout << m + 1 << "\t";
	
	return 0;
}
*/

//4.1.4
/*
# include <iostream>
using namespace std;

void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int temp;
	for (int j = 0; j < size1; j++)
		list3[j] = list1[j];
	for (int k = 0; k < size2; k++)
		list3[size1 + k] = list2[k];
	cout << "The merged list is : ";
	for (int m = 0; m < (size1 + size2) - 1; m++)
		for (int b = 0; b < (size1 + size2) - 1; b++)
			if (list3[b] > list3[b + 1])
			{
				temp = list3[b];
				list3[b] = list3[b + 1];
				list3[b + 1] = temp;
			}
	for (int a = 0; a < (size1 + size2); a++)
		cout << list3[a] << "  ";

}
int main()
{
	int size1, size2, size3;
	cout << "Enter size1: ";
	cin >> size1;
	cout << "Enter list1: ";
	int list1[80];
	for (int i = 0; i < size1; i++)
		cin >> list1[i];
	cout << "Enter size2: ";
	cin >> size2;
	cout << "Enter list2: ";
	int list2[80];
	for (int i = 0; i < size2; i++)
		cin >> list2[i];
	size3 = size1 + size2;
	int list3[160];
	merge(list1, size1, list2, size2, list3);

	cout << endl;

	return 0;
}
*/

//4.1.5
/*
#include <iostream>
#include "string.h"
using namespace std;
int indexOf(char s1[], char s2[])
{
	int n1 = strlen(s1), n2 = strlen(s2);
	int t = -1;
	for (int i = 0; i < n2 - n1; i++)
	{
		for (int j = 0, k = i; j < n1; j++, k++)
			if (s1[j] != s2[k])
				goto skip;
		t = i;
	skip:
		continue;
	}
	return t;
}

int main()
{
	char s1[999], s2[999];
	cout << "Enter the first string:";
	cin.getline(s1, 999);
	cout << "Enter the second string:";
	cin.getline(s2, 999);
	int n = indexOf(s1, s2);
	cout << "indexOf(\"" << s1 << "\",\"" << s2 << "\") is " << n;
}
*/

//4.1.6
/*
# include <iostream>
using namespace std;
void count(const char s[], int counts[])
{
	int size = strlen(s);
	for (int m = 0; m <= size; m++)
		for (int n = 0; n < 26; n++)
		{
			if (s[m] == 'a' + n || s[m] == 'A' + n)
				counts[n]++;
		}
	for (int i = 0; i < 26; i++)
		if (counts[i] != 0)
			cout << static_cast<char>('a' + i) << ":" << counts[i] << "times" << endl;
}
int main()
{
	int counts[26] = {0};
	char s[999];
	int a;
	cout << "Enter a string:";
	cin.getline(s, 999);
	count(s, counts);

	return 0;
}
*/

//4.2.1
/*
# include <iostream>
using namespace std;
 void main()
	{
	   int i,j,*pi,*pj;     //此处的*表示定义指针变量，而非间接运算符
	   pi=&i;
	   pj=&j;
	   i=5;j=7;
	   cout<<i<<"\t" << j << "\t"  << pi <<"\t"  << pj<<endl;
	   cout<<&i<< "\t" <<*&i<< "\t" <<&j<< "\t" <<*&j<<endl;
	   
	}
*/




//
/*
#include<iostream>
#include<cstring>
using namespace std;

int indexOf(const char* s1, const char* s2);
int main()
{
	int size = 999;
	char s1[999];
	char s2[999];
	cout << "Enter the first string : ";
	cin.getline(s1, size);
	cout << "Enter the second string: ";
	cin.getline(s2, size);
	cout << "indexOf(\"" << s1 << "\", \"" << s2 << "\") is " << indexOf(s1, s2) << endl;

	return 0;
}

int indexOf(const char* s1, const char* s2)
{
	int a, b, index, j, k;
	a = strlen(s1);
	b = strlen(s2);
	bool s3[999];
	for (int m = 0; m < a; m++)
		s3[m] = false;
	for (int i = 0; i < b - a + 1; i++)
	{
		for (j = 0, k = i; (j < a) && (k < i + a); j++, k++)
			if (s1[j] == s2[k])
			{
				index = i;
				s3[j] = true;
			}
		int h = 0;
		for (int n = 0; n < a; n++)
		{
			if (s3[n] == false && i == b - a)
			{
				return -1; break;
			}
			if (s3[n])
				h++;
		}
		if (h == a)
		{
			return index;
		}
	}
}
*/



//
/*
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int parseHex(const char* const hexString) 
{
	string hexStr(hexString);
	int decimalValue = 0;
	int hexLength = hexStr.length();
	for (int i = 0; i < hexLength; ++i)
	{
		char c = hexStr[i];
		int digitValue;
		if (c >= '0' && c <= '9')
		{
			digitValue = c - '0';
		}
		else if (c >= 'A' && c <= 'F') 
		{
			digitValue = c - 'A' + 10;
		}
		else if (c >= 'a' && c <= 'f')
		{
			digitValue = c - 'a' + 10;
		}
		decimalValue += digitValue * static_cast<int>(pow(16, hexLength - 1 - i));
	}
	return decimalValue;
}
int main() {
	const char* hexadecimal = "A5";
	int result = parseHex(hexadecimal);
	cout << "十六进制 " << hexadecimal << " 转换为十进制是 " << result << std::endl;
	return 0;
}
*/

//

/*
# include <iostream>
using namespace std;
void swap(int* a, int m)
{
	int t;
	for (int i = 0; i < m - 1; i++)
		for(int j=i+1;j<m;j++)
		if (a[i] > a[j])
		{
			t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
}
int main()
{
	int m, n;
	int* a;
	cout << "请输入数组元素个数" << endl;
	cin >> m;
	a = new int [m];
	cout << "请输入数组元素" << endl;
	for (int i = 0; i < m; i++)
		cin >> a[i];
	swap(a, m);
	cout << "排序后的数组元素为：";
	for(int i=0;i<m;i++)
		cout <<*(a+i) <<"\t";
	delete[]a;

	return 0;
}
*/



//
/*
# include <iostream>
using namespace std;
int main()
{

	return 0;
}
*/

//
/*
# include <iostream>
using namespace std;
int main()
{

	return 0;
}
*/

//
/*
# include <iostream>
using namespace std;
int main()
{

	return 0;
}
*/

//
/*
# include <iostream>
using namespace std;
int main()
{

	return 0;
}
*/