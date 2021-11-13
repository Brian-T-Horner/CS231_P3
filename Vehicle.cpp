// Vehicle Parent class Implementation
//
// Author: Brian Horner
// Edit History:
// 11/12/2021 Initial Version

// Standard Library Includes
#include <iostream>


// User built Includes:
#include "Vehicle.h"

template class Vehicle<int>;
template class Vehicle<double>;
template class Vehicle<unsigned int>;


// --- Constructors ---
template<typename T>
Vehicle<T>::Vehicle() = default;



// --- Set Functions ---
void setVehicleMake(std::string make);
void setVehicleModel(std::string model);
void setVehicleProdYear(T prodYear);
void setVehiclePrice(T price);

// --- Get Functions ---
std::string getVehicleMake() const;
std::string getVehicleModel() const;
unsigned int getVehicleProdYear() const;
unsigned int getVehiclePrice() const;

// --- Destructor ---
template<typename T>
~Vehicle<T>;

} //Destructor


std::string make{};
std::string model{};
T productionYear;
T price;
static int vehicleCount;