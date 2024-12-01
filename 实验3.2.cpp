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
	for (int i = 2; count <= 200; i++)
		if (is_prime(i))
		{
			cout << i << "\t";
			count++;
			if (count % 10 == 0)
				cout << endl;
		}

	return 0;
}