// Car Class Specification (Child class of Vehicle)
//
//
// Author: Brian Horner
// Edit History:
// 11/12/2021 Initial Version

#ifndef PLANE_H
#define PLANE_H

#include <iostream>
#include "Vehicle.h"

template <typename T, typename U>

class Plane:public Vehicle<T, U>{

public:
    // Constructors
    Plane();
    Plane(U planeMake, U planeModel, T planeProdYear, T planePrice,
          T nPassengers, T nEngines, T totSeats, T availSeats, U callSign);

    // Set Functions
    void setNumOfPassengers(T n);
    void setNumOfEngines(T n);
    void setTotalSeats(T n);
    void setAvailableSeats(T n);
    void setPlaneCallSign(U s);


    // Get Functions
    T getNumOfPassengers() const;
    T getNumOfEngines() const;
    T getTotalSeats() const;
    T getAvailableSeats() const;
    U getPlaneCallSign() const;

    // Virtual Functions
    virtual void start() const override; // Virtual function to display info
    virtual void displayWindowSticker() const override; // Virtual function to display windo


    ~Plane(); // Destructor


private:
    T numOfPassengers;
    T numOfEngines;
    T totalSeats;
    T availableSeats;
    U planeCallSign;
};

#endif