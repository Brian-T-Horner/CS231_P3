// Vehicle Parent Class Specification
//
// Author: Brian Horner
// Edit History:
// 11/12/2021 Initial Version
// 11/13/2021 Added virtual functions for start and window sticker

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

    // Virtual Functions
    virtual void start() const; // Virtual function to display info
    virtual void displayWindowSticker() const; // Virtual function to display windowsticker

private:
    T make;
    T model;
    T productionYear;
    T price;
    static int vehicleCount;
};

#endif
