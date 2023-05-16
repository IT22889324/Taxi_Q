#include "Taxi.h"
#include <iostream>
#include <string.h>

using namespace std;

void Taxi::setTaxiDetails(int id, char pDriver[], int km, int distance) {
	taxiID = id;
	strcpy_s(driver, pDriver);
	ratePerKM = km;
	distanceTravelled = distance;
}

void Taxi::displayTaxiDetails() {
	cout << "Taxi ID = " << taxiID << endl;
	cout << "Driver Name = " << driver << endl;
	cout << "BillAmount = " << calculateBill() << endl << endl;

}

float Taxi::calculateBill() {
	return ratePerKM * distanceTravelled;
}
