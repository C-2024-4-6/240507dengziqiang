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
