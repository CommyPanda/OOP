#include "Student.h"

Student::Student()
{
	_university = "NoData";
	_degree = "NoData";
}
Student::Student(std::string university, std::string degree)
{
	_university = university;
	_degree = degree;
}
void Student::setUniversity(std::string university)
{
	_university = university;
}
void Student::setDegree(std::string degree)
{
	_degree = degree;
}

std::string Student::getUniversity()
{
	return _university;
}
std::string Student::getDegree()
{
	return _degree;
}