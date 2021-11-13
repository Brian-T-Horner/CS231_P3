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


    // Set funcs
    void setVehicleMake(std::string make);
    void setVehicleModel(std::string model);
    void setVehicleProdYear(T prodYear);
    void setVehiclePrice(T price);

    // Get funcs
    std::string getVehicleMake() const;
    std::string getVehicleModel() const;
    unsigned int getVehicleProdYear() const;
    unsigned int getVehiclePrice() const;

    ~Vehicle(); //Destructor

private:
    std::string make{};
    std::string model{};
    T productionYear;
    T price;
    static int vehicleCount;
};

#endif
