#include "pch.h"
#include "Wheel.h"
#include <iostream>

using namespace std;


Wheel::Wheel()
{
	m_CurrentAirPressure = 0;
}

int Wheel::getCurrentAirPressure()
{
	return m_CurrentAirPressure;
}

int Wheel::getMaximumAirPressure()
{
	return m_MaximumAirPressure;
}

void Wheel::FillAirPressure(int i_amount)
{
	if (m_CurrentAirPressure + i_amount <= m_MaximumAirPressure) {
		m_CurrentAirPressure += i_amount;
	}
	else {
		cout << "Invalid air amount" << endl;
	}
}
