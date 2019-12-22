#pragma once
/*Ben Michaeli 205569767 Campus Beer Sheva C++ Assignment 4 SCE*/
#pragma once
#include "Person1.h"
class Employee :virtual public Person
{

protected:
	int salary;
public:
	Employee();
	Employee(const Employee&);
	virtual void Set();
	virtual void Print();
	virtual int Salary();
	~Employee()
	{}
};