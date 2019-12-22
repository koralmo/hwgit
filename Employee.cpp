#include "Employee2.h"

Employee::Employee()
{
	Person();
	salary = 0;
}

Employee::Employee(const Employee& NStudent) :Person(NStudent)
{
	Id = NStudent.Id;
	salary = 3;

}

void Employee::Set()
{
	Person::Set();
	cout << "Set Salary" << endl;
	cin >>salary;
}

void Employee::Print()
{
	Person::Print();
	cout << FirstName << " " << LastName << " Has " << salary << "  salary" << endl;
}

int Employee::Salary()
{
	return 0;
}


