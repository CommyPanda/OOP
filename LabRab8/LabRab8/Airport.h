#include "Airplane.h"
#pragma once

class Airport
{
protected:

	Airplane* _hangar[10];
	int _quantity;

public:

	Airport();

	void PutIn(Airplane &somePlane);

	void TakeOutAllPlanes();

};