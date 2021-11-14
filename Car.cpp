// Car Class Implementation (Child class of Vehicle)
//
//
// Author: Brian Horner
// Edit History:
// 11/12/2021 Initial Version
// 11/13/2021 Added constructor, get & set functions and destructor
// 11/13/2021 Added virtual function overrides
// 11/13 2021 Fixed templates to accept two types

// Standard Library Includes
#include <iostream>
#include <string>


// User built Includes:
#include "Car.h"

// Template options for the class
template class Car<int, std::string>;
template class Car<unsigned int, std::string>;
template class Car<double, std::string>;

// --- Constructors ---
template <typename T, typename U>
Car<T, U>::Car():Vehicle<T, U>(){
    carColor = "";
    carDoors = 0;
    std::cout << "Car has been created. Please set the make, model, "
                 "production year, price, color and number of doors"
                 "."<<std::endl;
}

template <typename T, typename U>
Car<T, U>::Car(U carMake, U carModel, T carProdYear, T carPrice,
               U color, T doors):Vehicle<T, U>(carMake, carModel, carProdYear, carPrice) {
    carColor = color;
    carDoors = doors;
    std::cout << "Car has been created with the following attributes.\n"
                 "Car Color: " <<carColor <<".\n" <<
                 "Car Door Count" <<carDoors << ".\n";
}





// --- Set Functions ---
template <typename T, typename U>
void Car<T, U>::setCarColor(U color) {carColor = color;}
template <typename T, typename U>
void Car<T, U>::setCarDoors(T doors) {carDoors = doors;}


// --- Get Functions ---
template <typename T, typename U>
U Car<T, U>::getCarColor() const {return carColor;}
template <typename T, typename U>
T Car<T, U>::getCarDoors() const {return carDoors;}


// --- Virtual Functions ---
template <typename T, typename U>
void Car<T, U>::start() const {
    Vehicle<T, U>::start();
    std::cout << "..." <<std::endl;
}

template <typename T, typename U>
void Car<T, U>::displayWindowSticker() const {
    Vehicle<T, U>::displayWindowSticker();
    std::cout<< "..." <<std::endl;
}

// --- Destructor ---
template <typename T, typename U>
Car<T, U>::~Car<T, U>() {}