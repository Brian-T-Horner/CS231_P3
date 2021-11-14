// Car Class Specification (Child class of Vehicle)
//
//
// Author: Brian Horner
// Edit History:
// 11/12/2021 Initial Version

#ifndef PLANE_H
#define PLANE_H

#include <istream>
#include "Vehicle.h"
#include <string>
#include <vector>

template <typename PLANE>
class Plane: public Vehicle<PLANE>{

public:

private:
    std::vector<std::string> passengers;
};
#endif