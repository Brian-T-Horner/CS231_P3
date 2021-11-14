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

template <typename TRUCK>
class Truck: public Vehicle<TRUCK>{

};

#endif
