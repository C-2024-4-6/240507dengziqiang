# include <iostream>
using namespace std;
int main()
{
	int a[100] = { 0 };
	for (int n = 0; n < 100; n++)
		for (int i = n; i < 100; i = i + n + 1)
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