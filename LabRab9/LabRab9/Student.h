#include <string>
#pragma once
class Student
{
private:
	std::string _university; //Учебное заведение
	std::string _degree; //Уровень образования
public:
	Student();
	Student(std::string university, std::string degree);

	void setUniversity(std::string university);//Меняет учебное заведение
	void setDegree(std::string degree);//Меняет уровень образования

	std::string getUniversity();//Выводит учебное заведение
	std::string getDegree();//Выводит уровень образования
};

