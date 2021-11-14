// Truck Class Implementation (Child class of Vehicle)
//
//
// Author: Brian Horner
// Edit History:
// 11/12/2021 Initial Version
// 11/13/2021 Added constructor, set, get and destructor implementations
// 11/13/2021 Added virtual functions implementations

// Standard Library Includes
#include <iostream>
#include <string>

// User built Includes
#include "Truck.h"

// Template options for the class
template class Truck<int, std::string>;
template class Truck<unsigned int, std::string>;
template class Truck<double, std::string>;


// --- Constructors ---
template <typename T, typename U>
Truck<T, U>::Truck():Vehicle<T, U>(){
    truckColor = "";
    truckContents = "";
    truckBedMaxLoad = 0.0;
    std::cout << "Truck has been created. Please set the make, model, "
                 "production year, price, color and maximum bed load."
                 <<std::endl;
}

template <typename T, typename U>
Truck<T, U>::Truck(U truckMake, U truckModel, T truckProdYear, T truckPrice,
                   U truckColor, T truckBedMaxLoad,U truckBedContents)
                   :Vehicle<T, U>(truckMake, truckModel, truckProdYear,
                                  truckPrice){
                       this-> truckColor = truckColor;
                       this-> truckBedMaxLoad = truckBedMaxLoad;
                       this-> truckContents = truckBedContents;
                       std::cout <<"Truck has been created with the following"
                                   " attributes.\n"
                                   "Truck Color: " <<truckColor <<".\n" <<
                                   "Truck Bed Max Load: " <<truckBedMaxLoad
                                   << ".\n" <<
                                   "Truck Bed Contents(string format): "
                                   <<truckBedContents <<std::endl;
                   }
// --- Get Functions ---
template <typename T, typename U>
U Truck<T, U>::getTruckColor() const {return truckColor;}

template <typename T, typename U>
T Truck<T, U>::getTruckMaxLoad() const {return truckBedMaxLoad;}

template <typename T, typename U>
U Truck<T, U>::getTruckContents() const {return truckContents;}

// --- Set Functions ---
template <typename T, typename U>
void Truck<T, U>::setTruckBedContents(U contentsString)
{truckContents=contentsString;}

template <typename T, typename U>
void Truck<T, U>::setTruckBedMaxLoad(T weight) {truckBedMaxLoad = weight;}

template <typename T, typename U>
void Truck<T, U>::setTruckColor(U color) {truckColor=color;}

// --- Virtual Functions ---
template <typename T, typename U>
void Truck<T, U>::start() const {
    Vehicle<T, U>::start();
    std::cout << "..." <<std::endl;
}

template <typename T, typename U>
void Truck<T, U>::displayWindowSticker() const {
    Vehicle<T, U>::displayWindowSticker();
    std::cout << "..." <<std::endl;
}

// --- Destructor ---
template <typename T, typename U>
Truck<T, U>::~Truck<T, U>() {}