// Car Class Specification (Child class of Vehicle)
//
//
// Author: Brian Horner
// Edit History:
// 11/12/2021 Initial Version
// 11/13/2021 Added get, set and virtual functions

#ifndef CAR_H
#define CAR_H

#include <iostream>
#include "Vehicle.h"

template <typename T>
class Car: public Vehicle<T>{

public:
    // Constructors
    Car();
    Car(T carMake, T carModel, T carProdYear, T carPrice, T color, T doors);

    // Set Functions
    void setCarColor(T color);
    void setCarDoors(T doors);

    // Get Functions
    T getCarColor() const;
    T getCarDoors() const;

    // Virtual Functions
    virtual void start() const override; // Virtual function to display info
    virtual void displayWindowSticker() const override; // Virtual function to display windowsticker

private:
    T carColor;
    T carDoors;
    static int carCount;

};

#endif
