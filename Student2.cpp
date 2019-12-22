#include "Student2.h"

Student::Student()
{
	Person();
	Grade = 0;
}

Student::Student(const Student& NStudent) :Person(NStudent)
{
	Id = NStudent.Id;
	Grade = NStudent.Grade;

}

void Student::Set()
{
	Person::Set();
	cout << "Set Grade" << endl;
	cin >> Grade;
	cout << "Set College Name \n";
	cin >> ColName;
}

void Student::Print()
{
	Person::Print();
	cout << FirstName << " " << LastName << " Has " << Grade << "  Grade Years" << endl;
}

int Student::Salary()
{
	return 0;
}


