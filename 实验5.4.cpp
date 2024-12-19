//5.4
#include<iostream>
using namespace std;
class student
{
private:
	long no;
	int score;
public:

	student(long n, int s);
	void ShowScore();
	int max(student* a, int n);
};
student::student(long n, int s)
{
	no = n, score = s;
}
void student::ShowScore()
{
	cout << "No:" << no << "\t" << "Score:" << score << endl;
}
int student::max(student* a, int n)
{
	int t = 0;
	long m = 000;
	for (int i = 0; i < n; i++)
		if (a[i].score > t)
		{
			t = a[i].score;
			m = a[i].no;
		}
	return m;
}
int main()
{
	student studentscore[5] =
	{
	student(001,81),
	student(002,64),
	student(003,76),
	student(004,87),
	student(005,96)
	};
	student* p = studentscore;
	cout << studentscore[5].max(p, 5) << endl;
	return 0;
}