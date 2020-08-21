#include "Employee.h"
#include "Student.h"
#pragma once
class Scientist : public Employee, public Student
{
private:
	int _qPub; //количество публикаций
public:
	Scientist();
	Scientist(std::string name, unsigned long number, std::string university, std::string degree, int qPub);

	void EnterPersonalData(std::string name, unsigned long number, std::string university, std::string degree, int qPub); //Заполняет данные об учёном

	int getQuantityOfPublication(); //Выводит данные об учёном
};

