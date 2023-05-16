#include <iostream>
#include "Taxi.h"
#include <iomanip>

int main()
{
    Taxi t1, t2, t3;

    t1.setTaxiDetails(1234, (char*)"Ben", 150, 10);
    t2.setTaxiDetails(4321, (char*)"Chris", 250, 4);
    t3.setTaxiDetails(3434, (char*)"Nick", 175.22, 2.2);

    t1.displayTaxiDetails();
    t2.displayTaxiDetails();
    t3.displayTaxiDetails();

    return 0;
}

