#include "pch.h"
#include "MyGarage.h"
#include "Car.h"


MyGarage::MyGarage()
{
}


MyGarage::~MyGarage()
{
}

Vehicle MyGarage::VehicleFactoryMethod(int i_input)
{
	Vehicle vehicle;
	switch (i_input)
	{
	case '1':
		vehicle = Car();
		break;
	}
	return vehicle;
}

