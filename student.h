//student.h
//5.2
#pragma
#include<iostream>
using namespace std;
class Student              
{
public:                   
	void display();
	void set_value(long num,const char*name,char sex)
	{
		this->num = num;
		this->name = name;
		this->sex = sex;
	}
private:
	long num;
	const char*name;
	char sex;
};

