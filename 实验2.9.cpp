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
