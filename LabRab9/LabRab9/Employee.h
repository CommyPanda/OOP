#include <string>
#pragma once
class Employee
{
private:
	std::string _name; //��� ���������
	unsigned long _number; //����� ���������
public:
	Employee();
	Employee(std::string name, unsigned long number);

	void setName(std::string name); //������ ��� ����������
	void setNumber(unsigned long number);//������ ����� ����������

	std::string getName();//������� ��� ����������
	unsigned long getNumber();//������� ����� ����������
};

