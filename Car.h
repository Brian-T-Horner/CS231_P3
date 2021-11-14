// Car Class Specification (Child class of Vehicle)
//
//
// Author: Brian Horner
// Edit History:
// 11/12/2021 Initial Version

#ifndef CAR_H
#define CAR_H

#include <iostream>
#include "Vehicle.h"

template <typename CAR>
class Car: public Vehicle<CAR>{

public:
    // Constructors
    Car();

    // Set Functions


    // Get Functions
private:
    std::string carColor;
    unsigned int carDoors;

};

#endif
