#include "WorkingStudent.h"

void WorkingStudent::Set()
{
	cout << "FirstName\n";
	cin >> FirstName;
	cout << "LastName\n";
	cin >> LastName;
	cout << "Id\n";
	cin >> Id;
	cout << "Grade\n";
	cin >> Grade;
	cout << "Institue\n";
	cin >> ColName;
	cout << "Salary\n";
	cin >> salary;
}

void WorkingStudent::Print()
{
	cout <<"FirstName:\n"<< FirstName;
	cout << "LastName:\n" << LastName;
	cout << "Id:\n" << Id;
	cout << "Grade:\n" << Grade;
	cout << "Salary:\n" << salary;
	if (same_institue == true)cout << "Same Institue";
	else cout << "Not As The Same Institue";
}
