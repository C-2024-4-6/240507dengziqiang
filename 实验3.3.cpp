# include <iostream>
# include"mytemperature.h"
using namespace std;
int main()
{
	cout << "Celsius" << "\t" << "\t" << "Fahrenheit" << endl;
	for (double i = 40.0; i >= 31.0; i--)
		cout << i << "\t" << "\t" << celsius_to_fah(i) << endl;
	cout << "Fahrenheit" << "\t" << "Celsius" << endl;
	for (double n = 120.0; n >= 30.0; n = n - 10)
		cout << n << "\t" << "\t" << fahrenheit_to_cels(n) << endl;

	return 0;
}