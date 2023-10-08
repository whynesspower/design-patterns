#ifndef vehicle_hpp
#define vehilce_hpp

class vehicle
{
public:
    virtual void createVehicle() = 0;
    // any class which will inherit from the vehicle class
    // will necessarily implement this function
};

#endif // !vehicle_hpp
