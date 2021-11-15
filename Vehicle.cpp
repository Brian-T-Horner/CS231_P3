// Vehicle Parent class Implementation
//
// Author: Brian Horner
// Edit History:
// 11/12/2021 Initial Version
// 11/13/2021 Added get and set functions
// 11/13/2021 Fixed specification and implementation for two types
// 11/13/2021 Added start procedure function implementation
// 11/13/2021 Added window sticker function implementation
// 11/13/2021 Added transmission type attribute and methods
// 11/13/2021 Added price manipulating methods
// 11/13/2021 Added exception handing for price, year, price manipulation


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
    transmission = "";
    std::cout << "Vehicle has been created. Please set the make, model, "
                 "production year, price and transmission type." <<std::endl;
}

template <typename T, typename U>
Vehicle<T, U>::Vehicle(U m, U mo, T prodYear, T p, U trans){
    make = m;
    model = mo;
    if(prodYear > 1885){
        productionYear = prodYear;
    }else{
        throw std::invalid_argument("Invalid input for production year of "
                                    "vehicle.");
    }
    price = p;
    transmission = trans;
    std::cout << "Vehicle has been created with the following attributes:" <<
                 "Make: " <<this->make <<".\n" <<
                 "Model: " <<this->model <<".\n" <<
                 "Production Year: " <<this->productionYear <<".\n"<<
                 "Price: " <<this->price <<".\n" <<
                 "Transmission Type: "<<this->transmission <<std::endl;


}

// -- Sale Methods --

// Percent price changes
template <typename T, typename U>
void Vehicle<T, U>::giveDiscountPercent(T n) {
    if(n >= 0){
        price = (price-(price * (n/100)));
    }else{
        throw std::invalid_argument("Invalid input for price discount by "
                                    "percent. Input ignored...please try again.");
    }
}

template <typename T, typename U>
void Vehicle<T, U>::raisePricePercent(T n) {
    if(n >= 0){
        price = (price + (price* (n/100)));
    }else{
        throw std::invalid_argument("Invalid input for price raise by percent. "
                                    "Input ignored...please try again.");
    }

}

// Value price changes
template <typename T, typename U>
void  Vehicle<T, U>::giveDiscountValue(T n) {
    if(n>=0 && n<price){
        price-=n;
    }else{
        throw std::invalid_argument("Invalid input for discount by value. "
                                    "Input ignored...please try again.");
    }
}
template <typename T, typename U>
void Vehicle<T, U>::raisePriceValue(T n) {
    if(n>=0){
        price+=n;
    }else{
        throw std::invalid_argument("Invalid input raise by value. Input "
                                    "ignored...please try again. ");
    }
}

// --- Set Functions ---
template <typename T, typename U>
void Vehicle<T, U>::setVehicleMake(U m) {make=m;}
template <typename T, typename U>
void Vehicle<T, U>::setVehicleModel(U m) {model=m;}


template <typename T, typename U>
void Vehicle<T, U>::setVehiclePrice(T n) {
    if(n>=0){
        price=n;
    }else{
        throw std::invalid_argument("Invalid input for vehicle price. Input "
                                    "ignored, please try again.");
    }
}

template <typename T, typename U>
void Vehicle<T, U>::setVehicleProdYear(T n) {
    if(n > 1885){
       productionYear = n;
    }else{
        throw std::invalid_argument("Invalid input for production year of "
                                    "vehicle. Input ignored, please try again");
    }
}

template <typename T, typename U>
void Vehicle<T, U>::setVehicleTransmission(U trans) {transmission=trans;}

// --- Get Functions ---
template <typename T, typename U>
U Vehicle<T, U>::getVehicleMake() const {return make;}
template <typename T, typename U>
U Vehicle<T, U>::getVehicleModel() const {return model;}
template <typename T, typename U>
T Vehicle<T, U>::getVehicleProdYear() const {return productionYear;}
template <typename T, typename U>
T Vehicle<T, U>::getVehiclePrice() const {return price;}
template <typename T, typename U>
U Vehicle<T, U>::getVehicleTransmission() const {return transmission;}

// --- Virtual Functions --
template <typename T, typename U>
void Vehicle<T, U>::start() const {
    std::cout << "Starting Procedure: \n" <<
    "1. Insert key into ignition.\n";
}

template <typename T, typename U>
void Vehicle<T, U>::displayWindowSticker() const {
    std::cout <<
    "Current Information:" <<std::endl<<
    "Make: " <<this->make << std::endl <<
    "Model: " << this->model << std::endl <<
    "Price: " <<this->price <<std::endl <<
    "Transmission Type: "<<this->transmission<<std::endl<<
    "Production Year: " <<this->productionYear <<std::endl;
}



// --- Destructor ---
template <typename T, typename U>
Vehicle<T, U>::~Vehicle<T, U>() {}