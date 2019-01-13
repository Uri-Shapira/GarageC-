#include "pch.h"
#include "Car.h"
#include <string>
#include "Wheel.h"

void Car::setWheels()
{
	CarWheel wheels[4];
	m_wheels = wheels;
}

Car::Car() 
{
	setWheels();
	m_name = "Regular Car";
}
