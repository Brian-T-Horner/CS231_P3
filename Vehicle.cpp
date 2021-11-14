// Vehicle Parent class Implementation
//
// Author: Brian Horner
// Edit History:
// 11/12/2021 Initial Version
// 11/13/2021 Added get and set functions

// Standard Library Includes
#include <iostream>


// User built Includes:
#include "Vehicle.h"

template class Vehicle<int>;
template class Vehicle<double>;
template class Vehicle<unsigned int>;
template class Vehicle<std::string>;


// --- Constructors ---
template<typename T>
Vehicle<T>::Vehicle(){
    make = "";
    model = "";
    std::cout << "Vehicle has been created. Please set the make, model, production year and price." <<std::endl;
}




// --- Set Functions ---
template <typename T>
void Vehicle<T>::setVehicleMake(T m) {make=m;}
template <typename T>
void Vehicle<T>::setVehicleModel(T m) {make=m;}
template <typename T>
void Vehicle<T>::setVehiclePrice(T n) {price=n;}
template <typename T>
void Vehicle<T>::setVehicleProdYear(T n) {productionYear=n;}

// Add checks for negatives


// --- Get Functions ---
template <typename T>
T Vehicle<T>::getVehicleMake() const {return make;}
template <typename T>
T Vehicle<T>::getVehicleModel() const {return model;}
template <typename T>
T Vehicle<T>::getVehicleProdYear() const {return productionYear;}
template <typename T>
T Vehicle<T>::getVehiclePrice() const {return price;}

// --- Virtual Functions --

// NEED TO ADD


// --- Destructor ---
template <typename T>
Vehicle<T>::~Vehicle<T>() {}