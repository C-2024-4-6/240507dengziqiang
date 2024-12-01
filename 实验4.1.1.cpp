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
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (a[i] < a[j])
			{
				int t;
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
	for (i = 0; i < j - 1; i++)
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