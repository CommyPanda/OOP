#include "Scientist.h"

Scientist::Scientist()
{
	Employee();
	Student();
	_qPub = 0;
}
Scientist::Scientist(std::string name, unsigned long number, std::string university, std::string degree, int qPub)
{
	Employee(name, number);
	Student(university, degree);
	_qPub = qPub;
}

void Scientist::EnterPersonalData(std::string name, unsigned long number, std::string university, std::string degree, int qPub)
{
	setName(name);
	setNumber(number);
	setUniversity(university);
	setDegree(degree);
	_qPub = qPub;
}
int Scientist::getQuantityOfPublication()
{
	return _qPub;
}