// Vehicle Parent class Implementation
//
// Author: Brian Horner
// Edit History:
// 11/12/2021 Initial Version
// 11/13/2021 Added get and set functions
// 11/13/2021 Fixed specification and implementation for two types

// Standard Library Includes
#include <iostream>


// User built Includes:
#include "Vehicle.h"

// Template options for the class
template class Vehicle<int, std::string>;
template class Vehicle<double, std::string>;
template class Vehicle<unsigned int, std::string>;



// --- Constructors ---
template<typename T, typename U>
Vehicle<T, U>::Vehicle(){
    make = "";
    model = "";
    std::cout << "Vehicle has been created. Please set the make, model, production year and price." <<std::endl;
}

template <typename T, typename U>
Vehicle<T, U>::Vehicle(U m, U mo, T prodYear, T p){
    make = m;
    model = mo;
    productionYear = prodYear;
    price = p;
    std::cout << "Vehicle has been created with the following attributes:" <<
                 "Make: " <<getVehicleMake() <<".\n" <<
                 "Model: " <<getVehicleModel() <<".\n" <<
                 "Production Year: " <<getVehicleProdYear() <<".\n"<<
                 "Price: " <<getVehiclePrice() <<"." << std::endl;


}




// --- Set Functions ---
template <typename T, typename U>
void Vehicle<T, U>::setVehicleMake(U m) {make=m;}
template <typename T, typename U>
void Vehicle<T, U>::setVehicleModel(U m) {make=m;}
template <typename T, typename U>
void Vehicle<T, U>::setVehiclePrice(T n) {price=n;}
template <typename T, typename U>
void Vehicle<T, U>::setVehicleProdYear(T n) {productionYear=n;}

// Add checks for negatives


// --- Get Functions ---
template <typename T, typename U>
U Vehicle<T, U>::getVehicleMake() const {return make;}
template <typename T, typename U>
U Vehicle<T, U>::getVehicleModel() const {return model;}
template <typename T, typename U>
T Vehicle<T, U>::getVehicleProdYear() const {return productionYear;}
template <typename T, typename U>
T Vehicle<T, U>::getVehiclePrice() const {return price;}

// --- Virtual Functions --
template <typename T, typename U>
void Vehicle<T, U>::start() const {
    std::cout << "..." <<std::endl;
}

template <typename T, typename U>
void Vehicle<T, U>::displayWindowSticker() const {
    std::cout << "..." <<std::endl;
}
// NEED TO ADD


// --- Destructor ---
template <typename T, typename U>
Vehicle<T, U>::~Vehicle<T, U>() {}