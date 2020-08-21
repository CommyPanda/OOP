#include <iostream>
#include "Scientist.h"
using namespace std;

void showAllData(Scientist obj)
{
	cout << "Name: " << obj.getName() << endl;
	cout << "Personal Number: " << obj.getNumber() << endl;
	cout << "University: " << obj.getUniversity() << endl;
	cout << "Degree: " << obj.getDegree() << endl;
	cout << "Quantity of publication: " << obj.getQuantityOfPublication() << endl << endl;
}

int main()
{
	Scientist _ivan;
	showAllData(_ivan);

	_ivan.EnterPersonalData("Ivan", 777, "ChSU", "PhD", 200);
	showAllData(_ivan);
}