// A program to manipulate a vehicle parent class and its children
//
// Author: Brian Horner
// Edit History:
// 11/12/2021 Initial Version

// Standard Library Includes
#include <iostream>


// User built Includes:
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include "Plane.h"

int main(){

    // -- Array of Vehicles

    // -- Vehicle Tests --

    std::cout << "\n-- Vehicle Constructor Tests -- \n";
    Vehicle<int, std::string>  vehicle1;
    Vehicle<double, std::string> vehicle2;
    Vehicle<unsigned int, std::string> vehicle3("Honda", "Accord",
                                                2019,30'000,
                                                "Automatic" );


    std::cout << "\n -- Vehicle Set and Get Method Tests -- \n";

    try{
        vehicle1.setVehiclePrice(-1'000);
    }catch(const std::invalid_argument& e){
        std::cout <<"Exception from " <<e.what() <<std::endl;
    }
    try{
        vehicle1.setVehiclePrice(100'000);
    }catch(const std::invalid_argument& e){
        std::cout <<"Exception from " <<e.what() <<std::endl;
    }
    std::cout << "Vehicle 1 price is " << vehicle1.getVehiclePrice()<<std::endl;


    vehicle2.setVehicleMake("Mclaren");
    std::cout << "Vehicle 2 make is " << vehicle2.getVehicleMake()<<std::endl;


    vehicle3.setVehicleTransmission("Manual");
    std::cout <<"Vehicle 3 transmission type is " << vehicle3
    .getVehicleTransmission()<<std::endl;

    vehicle2.setVehicleModel("Accord");
    std::cout <<"Vehicle 2 model is " <<vehicle2.getVehicleModel()<<std::endl;
    try{
    vehicle1.setVehicleProdYear(0);
    }catch(const std::invalid_argument& e){
        std::cout <<"Exception from " <<e.what() <<std::endl;
    }
    try{
    vehicle1.setVehicleProdYear(2019);
    }catch(const std::invalid_argument& e){
        std::cout <<"Exception from " <<e.what() <<std::endl;
    }

    std::cout <<"Vehicle 1 production year is "<<vehicle1.getVehicleProdYear
    ()<<std::endl;


    std::cout <<"\n -- Price Manipulation Method Tests --\n";
    // Raise and Discount by value tests
    try{
        vehicle1.giveDiscountValue(200'000);
    }catch(const std::invalid_argument& e){
        std::cout <<"Exception from " <<e.what() <<std::endl; }
    try{
        vehicle1.giveDiscountValue(10'000);
    }catch(const std::invalid_argument& e){
        std::cout <<"Exception from " <<e.what() <<std::endl; }

    std::cout << "Vehicle 1 price is now " <<vehicle1.getVehiclePrice()
    <<std::endl;

    try{
        vehicle1.raisePriceValue(-1000);
    }catch(const std::invalid_argument& e){
        std::cout <<"Exception from " <<e.what() <<std::endl; }
    try{
        vehicle1.raisePriceValue(5000);
    }catch(const std::invalid_argument& e){
        std::cout <<"Exception from " <<e.what() <<std::endl; }

    std::cout << "Vehicle 1 price is now " <<vehicle1.getVehiclePrice()
    <<std::endl;

    // Discount and Raise by Percentage Tests
    try{
        vehicle1.giveDiscountPercent(-10);
    }catch(const std::invalid_argument& e){
        std::cout <<"Exception from " <<e.what() <<std::endl; }

    try{
        vehicle1.giveDiscountPercent(40);
    }catch(const std::invalid_argument& e){
        std::cout <<"Exception from " <<e.what() <<std::endl; }

    std::cout << "Vehicle 1 price is now " <<vehicle1.getVehiclePrice()
    <<std::endl;

    try{
        vehicle1.raisePricePercent(-10);
    }catch(const std::invalid_argument& e){
        std::cout <<"Exception from " <<e.what() <<std::endl; }
    try{
        vehicle1.raisePricePercent(50);
    }catch(const std::invalid_argument& e){
        std::cout <<"Exception from " <<e.what() <<std::endl; }

    std::cout << "Vehicle 1 price is now " <<vehicle1.getVehiclePrice()
    <<std::endl;

    // Virtual Function Tests
    std::cout<<"\n -- Virtual Function Tests -- \n";
    vehicle1.start();
    vehicle3.displayWindowSticker();

    // -- Car Tests --
    std::cout << "\n-- Car Constructor Tests -- \n";

    std::cout << "\n-- Car Get and Set Tests -- \n";
    std::cout << "\n-- Car Virtual Functions Tests -- \n";
    std::cout << "\n-- Car Inherited Methods Tests -- \n";

    // -- Truck Tests

    // -- Plane Test --


    return 0;
}