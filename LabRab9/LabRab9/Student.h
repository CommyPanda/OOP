#include <string>
#pragma once
class Student
{
private:
	std::string _university; //������� ���������
	std::string _degree; //������� �����������
public:
	Student();
	Student(std::string university, std::string degree);

	void setUniversity(std::string university);//������ ������� ���������
	void setDegree(std::string degree);//������ ������� �����������

	std::string getUniversity();//������� ������� ���������
	std::string getDegree();//������� ������� �����������
};

