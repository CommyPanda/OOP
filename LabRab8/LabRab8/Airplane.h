#pragma once

class Airplane
{
protected:
	int _fuel;
	int _strength;
	///bool _repairability;
public:
	Airplane();

	int GetFuel();
	int GetStrength();
	/*
	int GetRepairability()
	{}
	*/

	void FillUp();
	void Repair();

	void Fly(int distance);
};

