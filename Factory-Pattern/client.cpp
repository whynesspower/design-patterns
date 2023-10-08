#include <iostream>
#include "bike.hpp"
#include "cars.hpp"
using namespace std;

int main()
{
    string vehicleType;
    cin >> vehicleType;
    Vehicle *vehicle;
    if (vehicleType == "car")
    {
        vehicle = new Car();
    }
    else if (vehicleType == "bike")
    {
        vehicle = new Bike();
    }
    vehicle->createVehicle();
    return 0;
}