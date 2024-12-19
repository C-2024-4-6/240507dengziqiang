//#include<iostream>
//using namespace std;
//class Time            
//{
//private:
//	int hour;
//	int minute;
//	int sec;
//public:              
//	void set(int h, int m, int s)
//	{
//		hour = h, minute = m, sec = s;
//	}
//	void get()
//	{
//		cout << "hour:" << hour << "\t" << "minute：" << minute << "\t" << "sec:" << sec << endl;
//	}
//};
//int main()
//{
//	Time t1;			 
//	int h, m, s;
//	cout << "请输入设定的时间 " << endl;
//	cin >> h;      
//	cin >> m;
//	cin >> s;
//	t1.set(h, m, s);
//	t1.get();
//	return 0;
//}

////5.2
////main.cpp
//#include <iostream>            
//#include "student.h"
//int main()
//{
//	Student stud;               
//	stud.set_value(007,"tcg", 'm');
//	stud.display();              
//	return 0;
//}

//5.3
//# include<iostream>
//using namespace std;
//class cuboid
//{
//private:
//	int length;
//	int width;
//	int height;
//public:
//	void set(int l, int w, int h)
//	{
//		length = l, width = w, height = h;
//	}
//	void volumn()
//	{
//		cout << "长方体体积为："<<length * width * height << endl;
//	}
//};
//int main()
//{
//	int l, w, h;
//	cuboid cuboid1;
//	cout << "请依次输入长方体的长宽高：" << endl;
//	cin >> l >> w >> h;
//	cuboid1.set(l, w, h);
//	cuboid1.volumn();
//  return 0;
//}

//5.4
//#include<iostream>
//using namespace std;
//class student
//{
//private:
//	long no;
//	int score;
//public:
//	
//	student(long n, int s);
//	void ShowScore();
//	int max(student *a,int n);
//};
//student:: student(long n, int s)
//{
//	no = n, score = s;
//}
//void student::ShowScore()
//{
//	cout << "No:" << no << "\t" << "Score:" << score << endl;
//}
//int student::max(student *a,int n)
//{
//	int t=0;
//	long m=000;
//	for (int i = 0; i < n; i++)
//			if(a[i].score>t)
//			{
//				t=a[i].score;
//				m = a[i].no;
//			}
//	return m;
//}
//int main()
//{
//	student studentscore[5]= 
//	{
//	student(001,81),
//	student(002,64),
//	student(003,76),
//	student(004,87),
//	student(005,96)
//	};
//	student* p = studentscore;
//	cout << studentscore[5].max(p, 5) << endl;
//	return 0;
//}

//5.5
//#include<iostream>
//using namespace std;
//class point
//{
//private:
//	double x;
//	double y;
//public:
//	void set(double x=60,double y=80)
//	{
//		this->x = x;
//		this->y = y;
//	}
//	void setpoint(double i,double j)
//	{
//		this->x=60+ i;
//		this->y=80 + j;
//	}
//	void display()
//	{
//		cout << "(" << x << "," << y << ")" << endl;
//	}
//};
//int main()
//{
//	point p1;
//	double i, j;
//	cout << "请依次输入i，j：" << endl;
//	cin >> i >> j;
//	p1.setpoint(i,j);
//	p1.display();
//	return 0;
//
//}