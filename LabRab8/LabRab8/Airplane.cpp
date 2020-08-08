#include "Airplane.h"

Airplane::Airplane()
{
	_fuel = 100;
	_strength = 100;
	//_repairability = true;
}

int Airplane::GetFuel()
{
	return _fuel;
}
int Airplane::GetStrength()
{
	return _strength;
}
/*
int Airplane::GetRepairability()
{
	return _repairability;
}
*/
void Airplane::FillUp()
{
	_fuel = 100;
}
void Airplane::Repair()
{
	_strength = 100;
}

void Airplane::Fly(int distance)
{
	_fuel = _fuel - distance;
	_strength = _strength - 10;
}