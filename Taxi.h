#pragma once
class Taxi
{
private:
	int taxiID;
	char driver[20];
	int ratePerKM;
	int distanceTravelled;
public:
	void setTaxiDetails(int id, char pDriver[], int km, int distance);
	void displayTaxiDetails();
	float calculateBill();
};

