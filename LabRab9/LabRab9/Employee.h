#include <string>
#pragma once
class Employee
{
private:
	std::string _name; //Имя работника
	unsigned long _number; //Номер работника
public:
	Employee();
	Employee(std::string name, unsigned long number);

	void setName(std::string name); //Меняет имя сотрудника
	void setNumber(unsigned long number);//Меняет номер сотрудника

	std::string getName();//Выводит имя сотрудника
	unsigned long getNumber();//Выводит номер сотрудника
};

