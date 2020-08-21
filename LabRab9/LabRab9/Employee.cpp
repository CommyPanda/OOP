#include "Employee.h"

Employee::Employee()
{
	_name = "NoData";
	_number = 0;
}
Employee::Employee(std::string name, unsigned long number)
{
	_name = name;
	_number = number;
}

void Employee::setName(std::string name)
{
	_name = name;
}
void Employee::setNumber(unsigned long number)
{
	_number = number;
}

std::string Employee::getName()
{
	return _name;
}
unsigned long Employee::getNumber()
{
	return _number;
}