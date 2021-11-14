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

template <typename T, typename U>
class Car: public Vehicle<T, U>{

public:
    // Constructors
    Car();
    Car(U carMake, U carModel, T carProdYear, T carPrice, U color, T doors);

    // Set Functions
    void setCarColor(U color);
    void setCarDoors(T doors);

    // Get Functions
    U getCarColor() const;
    T getCarDoors() const;

    // Virtual Functions
    virtual void start() const override; // Virtual function to display info
    virtual void displayWindowSticker() const override; // Virtual function to display windowsticker

    ~Car(); //Destructor

private:
    U carColor;
    T carDoors;

};

#endif
