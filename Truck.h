// Truck Class Specification (Child class of Vehicle)
//
//
// Author: Brian Horner
// Edit History:
// 11/12/2021 Initial Version

#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"
#include <iostream>

template <typename T, typename U>
class Truck: public Vehicle<T, U>{

public:
    // Constructors
    Truck();
    Truck(U truckMake, U trucklModel, T truckProdYear, T truckPrice, U
    truckColor, T truckBedMaxLoad, U truckBedContents);

    // Set functions
    void setTruckColor(U color);
    void setTruckBedMaxLoad(T weight);
    void setTruckBedContents(U contentsString);

    // Get functions

    U getTruckColor() const;
    T getTruckMaxLoad() const;
    U getTruckContents() const;

    // Virtual Functions
    virtual void start() const override;
    virtual void displayWindowSticker() const override;

    // Destructor
    ~Truck();

private:
    U truckColor;
    T truckBedMaxLoad;
    U truckContents;


};


#endif
