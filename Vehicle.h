// Vehicle Parent Class Specification
//
// Author: Brian Horner
// Edit History:
// 11/12/2021 Initial Version

#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>

class Vehicle{

public:
    // Constructors
    Vehicle(); //Constructor

    // Set funcs

    // Get funcs
    std::string getVehicleMake(); 
    std::string getVehicleModel();
    unsigned int

    ~Vehicle(); //Destructor
private:
    std::string make{};
    std::string model{};
    unsigned int productionYear{0};
    unsigned int price{0};
    static int vehicleCount;
};

#endif
