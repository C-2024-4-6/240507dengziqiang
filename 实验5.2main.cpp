//5.2
//main.cpp
#include <iostream>             
#include "student.h"
int main()
{
	Student stud;                
	stud.set_value(007, "tcg", 'm');
	stud.display();              
	return 0;
}