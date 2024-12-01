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
	int counts[26] = { 0 };
	char s[999];
	int a;
	cout << "Enter a string:";
	cin.getline(s, 999);
	count(s, counts);

	return 0;
}