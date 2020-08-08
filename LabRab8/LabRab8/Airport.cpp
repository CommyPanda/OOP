#include "Airport.h"

Airport::Airport()
{
	_quantity = 0;
}

void Airport::PutIn(Airplane &somePlane)
{
		_hangar[_quantity] = &somePlane;
		_quantity++;
}

void Airport::TakeOutAllPlanes()
{
	_quantity = 0;
}