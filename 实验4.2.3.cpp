<<<<<<< HEAD
# include <iostream>
using namespace std;
void swap(int* a, int m)
{
	int t;
	for (int i = 0; i < m - 1; i++)
		for (int j = i + 1; j < m; j++)
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
	a = new int[m];
	cout << "请输入数组元素" << endl;
	for (int i = 0; i < m; i++)
		cin >> a[i];
	swap(a, m);
	cout << "排序后的数组元素为：";
	for (int i = 0; i < m; i++)
		cout << *(a + i) << "\t";
	delete[]a;

	return 0;
=======
# include <iostream>
using namespace std;
void swap(int* a, int m)
{
	int t;
	for (int i = 0; i < m - 1; i++)
		for (int j = i + 1; j < m; j++)
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
	a = new int[m];
	cout << "请输入数组元素" << endl;
	for (int i = 0; i < m; i++)
		cin >> a[i];
	swap(a, m);
	cout << "排序后的数组元素为：";
	for (int i = 0; i < m; i++)
		cout << *(a + i) << "\t";
	delete[]a;

	return 0;
>>>>>>> 9df952d9ef3c74aee0ca372828614037dc5f6c1a
}