#include <iostream>
#include "Airplane.h"
#include "Airport.h"
#include "BigAirport.h"

using namespace std;



int main()
{
	Airplane f1, f2;
	BigAirport letov;

	f1.Fly(50);
	f2.Fly(20);

	cout << "Fuel f1: " << f1.GetFuel() << endl;
	cout << "Strength f1: " << f1.GetStrength() << endl;

	cout << "Fuel f2: " << f2.GetFuel() << endl;
	cout << "Strength f2: " << f2.GetStrength() << endl;

	letov.PutIn(f1);
	letov.PutIn(f2);

	letov.RepierAllPlanes();
	letov.RefuelAllPlanes();

	letov.TakeOutAllPlanes();

	cout << "Fuel f1: " << f1.GetFuel() << endl;
	cout << "Strength f1: " << f1.GetStrength() << endl;

	cout << "Fuel f2: " << f2.GetFuel() << endl;
	cout << "Strength f2: " << f2.GetStrength() << endl;

	return 0;
}