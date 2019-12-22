#pragma once
/*Ben Michaeli 205569767 Campus Beer Sheva C++ Assignment 4 SCE*/
#pragma once
#include "Person1.h"
class Student :virtual public Person
{

protected:
	string ColName;
	int Grade;
public:
	Student();
	Student(const Student&);
	virtual void Set();
	virtual void Print();
	virtual int Salary();
	~Student()
	{}
};