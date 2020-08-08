#include "Airplane.h"
#include "Airport.h"
#pragma once

class BigAirport : public Airport
{
public:
	
	BigAirport() :Airport() {};

	void RefuelAllPlanes();
	void RepierAllPlanes();
};

