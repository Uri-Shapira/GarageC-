#pragma once
#include <string>
#include "Wheel.h"

class Vehicle
{

protected:
	Wheel* m_wheels;
	string m_name;
	int m_numberOfWheels;
	virtual void setWheels();

public:
	Wheel* getWheels();
	string getName();
};

