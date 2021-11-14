// Vehicle Parent Class Specification
//
// Author: Brian Horner
// Edit History:
// 11/12/2021 Initial Version

#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>

template<typename T>

class Vehicle{

public:
    // Constructors
    Vehicle(); //Constructor
    Vehicle(T make, T model, T prodYear, T price);


    // Set funcs
    void setVehicleMake(T m);
    void setVehicleModel(T m);
    void setVehicleProdYear(T n);
    void setVehiclePrice(T n);

    // Get funcs
    T getVehicleMake() const;
    T getVehicleModel() const;
    T getVehicleProdYear() const;
    T getVehiclePrice() const;

    ~Vehicle(); //Destructor

private:
    T make;
    T model;
    T productionYear;
    T price;
    static int vehicleCount;
};

#endif
