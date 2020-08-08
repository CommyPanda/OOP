#include "BigAirport.h"
#include <iostream>

void BigAirport::RefuelAllPlanes()
{
	for (int i = 0; i < _quantity; i++)
	{
		_hangar[i]->FillUp();
	}
}

void BigAirport::RepierAllPlanes()
{
	for (int i = 0; i < _quantity; i++)
	{
		_hangar[i]->Repair();
	}
}