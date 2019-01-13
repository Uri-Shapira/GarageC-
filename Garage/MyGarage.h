#pragma once
#include "Vehicle.h"

class MyGarage
{
public:
	MyGarage();
	~MyGarage();

	static Vehicle VehicleFactoryMethod(int i_input);
};

