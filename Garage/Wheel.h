#pragma once
#include <string>

using namespace std;

class Wheel
{

	protected:
		int m_CurrentAirPressure;
		int m_MaximumAirPressure;
		string m_Manufacturer;
	public:
		Wheel();
		int getCurrentAirPressure();
		int getMaximumAirPressure();
		void FillAirPressure(int i_amount);
};



