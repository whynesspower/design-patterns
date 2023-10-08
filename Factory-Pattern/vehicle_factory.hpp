#ifndef vehicle_factory_hpp
#define vehicle_facotry_hpp
#include <iostream>
#include "cars.hpp"
#include "bike.hpp"
using namespace std;

class VehicleFactory
{
public:
    static Vehicle *getVehicle(string vehicleType);
};

#endif // !vehicle_factory_hpp
