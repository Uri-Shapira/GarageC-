#include "pch.h"
#include "Car.h"
#include <string>
#include "Wheel.h"

void Car::setWheels()
{
	CarWheel wheels[4];
	m_wheels = wheels;
}

void Car::createCar()
{
	setWheels();
	m_name = "Regular Car";
}

Car::Car() 
{
	createCar();
}
