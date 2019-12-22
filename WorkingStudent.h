#pragma once
#include "Employee2.h"
#include "Student2.h"

class WorkingStudent :public Employee,public Student
{
	bool same_institue;

public:
	WorkingStudent()
	{
		FirstName = "NULL";
		LastName = "NULL";
		Id = "NULL";
		Grade = 0;
		salary = 0;
		same_institue = false;
	}
	void Set();
	void Print();
};