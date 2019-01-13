#include <string>
#include "pch.h"
#include <iostream>
#include "Wheel.h"
#include "CarWheel.h"
#include "Car.h"
#include "MyGarage.h"

using namespace std;
	
	int main()
	{
		MyGarage garage;
		bool exit = false;
		char choice;
		while (exit == false)
		{
			cout << "Welcome To The Garage. Please Pick Which Vehicle You Want to Create:" << endl;
			cout << "1. Car" << endl;
			cout << "2. Truck" << endl;
			cout << "3. Motorcycle" << endl;
			cout << "4. exit" << endl;
			cin >> choice;
			Vehicle vehicle = garage.VehicleFactoryMethod(choice);
			cout << "You Created A " << vehicle.getName() << endl;
			if (choice == '4') {
				exit = true;
			}
		}
		return 0;
	}





