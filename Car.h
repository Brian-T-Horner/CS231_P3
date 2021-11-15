// Car Class Specification (Child class of Vehicle)
//
//
// Author: Brian Horner
// Edit History:
// 11/12/2021 Initial Version
// 11/13/2021 Added get, set and virtual functions
// 11/13 2021 Fixed templates to accept two types

#ifndef CAR_H
#define CAR_H

#include <iostream>
#include "Vehicle.h"

template <typename T, typename U>
class Car: public Vehicle<T, U>{

public:
    // Constructors
    Car();
    Car(U carMake, U carModel, T carProdYear, T carPrice, U carTrans, U
    color, T doors, U type);

    // Set Functions
    void setCarColor(U color);
    void setCarDoors(T doors);
    void setCarType(U type);

    // Get Functions
    U getCarColor() const;
    T getCarDoors() const;
    U getCarType() const;

    // Virtual Functions
    virtual void start() const override; // Virtual function to display info
    // Virtual function to display window sticker
    virtual void displayWindowSticker() const override;

    ~Car(); //Destructor

private:
    U carColor;
    T carDoors;
    U carType;

};

#endif
