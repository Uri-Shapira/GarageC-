#pragma once
#include <iostream>
#include <string>
#include "CarWheel.h"
#include "Vehicle.h"

using namespace std;

class Car : public Vehicle
{
	private:
		void createCar();
	public:
		void setWheels();
		Car();
};

