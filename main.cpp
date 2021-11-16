// A program to manipulate a vehicle parent class and its children
//
// Author: Brian Horner
// Edit History:
// 11/12/2021 Initial Version
// 11/14/2021 Added tests for Vehicle Class
// 11/14/2021 Added tests for Car child Class
// 11/14/2021 Added tests for Truck child Class
// 11/14/2021 Added tests for Plane child class

// Standard Library Includes
#include <iostream>


// User built Includes:
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include "Plane.h"

int main(){

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
    std::cout<<"\n -- Vehicle Virtual Function Tests -- \n";
    vehicle1.start();
    vehicle3.displayWindowSticker();

    // -- Car Tests --
    std::cout << "\n-- Car Constructor Tests -- \n";
    Car<unsigned int, std::string> briansCar("Honda", "Accord",
                                             2021, 30'000,
                                             "Automatic", "Black",
                                             4, "Sedan");
    Car<int, std::string> camisCar;
    Car<double, std::string> momsCar;

    std::cout << "\n-- Car Get and Set Tests -- \n";

    camisCar.setCarType("Chevy");
    std::cout << "Cami's car type is " <<camisCar.getCarType()<<std::endl;

    try{
        camisCar.setCarDoors(-1);
    }catch(const std::invalid_argument& e){
        std::cout <<"Exception from " <<e.what() <<std::endl;
    }
    try{
    camisCar.setCarDoors(4);
    }catch(const std::invalid_argument& e){
        std::cout <<"Exception from " <<e.what() <<std::endl;
    }
    std::cout << "Cami's car has " <<camisCar.getCarDoors() <<" doors."
    <<std::endl;


    camisCar.setCarColor("Pink");
    std::cout <<"Cami's car is " <<camisCar.getCarColor()<<std::endl;

    momsCar.setCarType("Coup");
    std::cout<< "Mom's car is a "<<momsCar.getCarType()<<std::endl;

    std::cout << "\n-- Car Virtual Functions Tests -- \n";

    briansCar.start();
    briansCar.displayWindowSticker();

    std::cout << "\n-- Car Inherited Methods Tests -- \n";

    briansCar.setVehicleMake("Audi");
    std::cout<< "Brian's car is a " <<briansCar.getVehicleMake()<<std::endl;
    momsCar.setVehicleModel("Charger");
    std::cout << "Mom's car is a " <<momsCar.getVehicleModel()<<std::endl;

    try{
        momsCar.setVehicleProdYear(-1);
    }catch(const std::invalid_argument& e){
        std::cout <<"Exception from " <<e.what() <<std::endl;
    }
    try{
        momsCar.setVehicleProdYear(2020);
    }catch(const std::invalid_argument& e){
        std::cout <<"Exception from " <<e.what() <<std::endl;
    }
    std::cout << "Mom's car has a production year of  " <<momsCar.getVehicleProdYear()<<std::endl;

    try{
        camisCar.setVehiclePrice(-1);
    }catch(const std::invalid_argument& e){
        std::cout <<"Exception from " <<e.what() <<std::endl;
    }
    try{
        camisCar.setVehiclePrice(40'000);
    }catch(const std::invalid_argument& e){
        std::cout <<"Exception from " <<e.what() <<std::endl;
    }

    std::cout <<"Cami's car has a price of "<<camisCar.getVehiclePrice()
    <<std::endl;


    // -- Truck Tests
    std::cout << "\n-- Truck Constructor Tests -- \n";

    Truck<unsigned int, std::string> patsTruck("Ford", "F150", 2020, 50'000, "Automatic", "Black", 2'000, "Gravel");
    Truck<int, std::string> jacksTruck;
    Truck<double, std::string> chansTruck;

    std::cout << "\n-- Truck Set and Get Tests -- \n";

    chansTruck.setTruckColor("Blue");
    std::cout << "Chan's truck is " <<chansTruck.getTruckColor() <<std::endl;

    jacksTruck.setTruckBedContents("Lumber");
    std::cout << "Jack's truck contains " <<jacksTruck.getTruckContents() <<std::endl;

    try{
        jacksTruck.setTruckBedMaxLoad(-1);
    }catch(const std::invalid_argument& e){
        std::cout <<"Exception from " <<e.what() <<std::endl;
    }

    try{
        jacksTruck.setTruckBedMaxLoad(10'000);
    }catch(const std::invalid_argument& e){
        std::cout <<"Exception from " <<e.what() <<std::endl;
    }

    std::cout << "Jack's Truck has a max load of " <<jacksTruck.getTruckMaxLoad() <<std::endl;

    // Truck virtual function tests
    std::cout << "\n-- Truck Virtual Functions Tests -- \n";
    patsTruck.start();
    patsTruck.displayWindowSticker();


    // Trucks inherited method tests
    std::cout << "\n-- Truck Inherited Methods Tests -- \n";

    patsTruck.setVehicleMake("Chevy");
    std::cout<< "Pat's truck is a " <<patsTruck.getVehicleMake()<<std::endl;
    patsTruck.setVehicleModel("Silverado");
    std::cout << "Pat's truck is a " <<patsTruck.getVehicleModel()<<std::endl;

    try{
        patsTruck.setVehicleProdYear(-1);
    }catch(const std::invalid_argument& e){
        std::cout <<"Exception from " <<e.what() <<std::endl;
    }
    try{
        patsTruck.setVehicleProdYear(1990);
    }catch(const std::invalid_argument& e){
        std::cout <<"Exception from " <<e.what() <<std::endl;
    }
    std::cout << "Pat's truck has a production year of  " <<patsTruck.getVehicleProdYear()<<std::endl;

    try{
        chansTruck.setVehiclePrice(-1);
    }catch(const std::invalid_argument& e){
        std::cout <<"Exception from " <<e.what() <<std::endl;
    }
    try{
        chansTruck.setVehiclePrice(40'000);
    }catch(const std::invalid_argument& e){
        std::cout <<"Exception from " <<e.what() <<std::endl;
    }

    std::cout <<"Chan's truck has a price of "<<chansTruck.getVehiclePrice();

    // -- Plane Test --
    std::cout << "\n-- Plane Constructor Tests -- \n";
    Plane<int, std::string> tomsPlane;
    Plane<double, std::string> bertsPlane;
    Plane<unsigned int, std::string> airforceOne("Boeing", "747", 2018,
                                                 10'000'000, "N/A", 0, 6,
                                                 100, 100, "Airforce One");


    std::cout << "\n-- Plane Set and Get Tests -- \n";

    try{
        tomsPlane.setNumOfPassengers(-1);
    }catch(const std::invalid_argument& e){
        std::cout <<"Exception from " <<e.what() <<std::endl;
    }
    try{
        tomsPlane.setNumOfPassengers(100);
    }catch(const std::invalid_argument& e){
        std::cout <<"Exception from "<<e.what()<<std::endl;
    }

    std::cout <<"Tom's plane has " <<tomsPlane.getNumOfPassengers() <<" passengers." <<std::endl;

    try{
        bertsPlane.setNumOfEngines(-1);
    }catch(const std::invalid_argument& e){
        std::cout<<"Exception from "<<e.what()<<std::endl;
    }
    try{
        bertsPlane.setNumOfEngines(4);
    }catch(const std::invalid_argument& e){
        std::cout<<"Exception from "<<e.what()<<std::endl;
    }
    std::cout<<"Bert's plane has " <<bertsPlane.getNumOfEngines() <<" engines."<<std::endl;

    try{
        bertsPlane.setTotalSeats(-1);
    }catch(const std::invalid_argument& e){
        std::cout<<"Exception from "<<e.what()<<std::endl;
    }
    try{
        bertsPlane.setAvailableSeats(-1);
    } catch (const std::invalid_argument& e) {
        std::cout<<"Exception from "<<e.what()<<std::endl;
    }
    try{
        bertsPlane.setAvailableSeats(10);
    } catch (const std::invalid_argument& e) {
        std::cout<<"Exception from "<<e.what()<<std::endl;
    }
    std::cout<< "Bert's plane has "<<bertsPlane.getTotalSeats() << " and " <<bertsPlane.getAvailableSeats() <<" available seats." <<std::endl;

    bertsPlane.setPlaneCallSign("The Machine");
    std::cout << "Bert's plane has the call sign " <<bertsPlane.getPlaneCallSign() <<"."<<std::endl;

    std::cout << "\n-- Plane Virtual Functions Tests -- \n";
    airforceOne.start();
    airforceOne.displayWindowSticker();

    std::cout << "\n-- Plane Inherited Methods Tests -- \n";

    bertsPlane.setVehicleMake("Airbus");
    std::cout<< "Bert's plane is a " <<bertsPlane.getVehicleMake()<<std::endl;
    bertsPlane.setVehicleModel("Super Bus");
    std::cout << "Bert's plane model is" <<bertsPlane.getVehicleModel()<<std::endl;

    try{
        airforceOne.setVehicleProdYear(-1);
    }catch(const std::invalid_argument& e){
        std::cout <<"Exception from " <<e.what() <<std::endl;
    }
    try{
        airforceOne.setVehicleProdYear(2010);
    }catch(const std::invalid_argument& e){
        std::cout <<"Exception from " <<e.what() <<std::endl;
    }
    std::cout << "Airforce One has a production year of  " <<airforceOne.getVehicleProdYear()<<std::endl;

    try{
        tomsPlane.setVehiclePrice(-1);
    }catch(const std::invalid_argument& e){
        std::cout <<"Exception from " <<e.what() <<std::endl;
    }
    try{
        tomsPlane.setVehiclePrice(400'000);
    }catch(const std::invalid_argument& e){
        std::cout <<"Exception from " <<e.what() <<std::endl;
    }

    std::cout <<"Tom's plane has a price of "<<tomsPlane.getVehiclePrice();


    // -- Array of Vehicles
    std::cout << "\n-- Array of Vehicles -- \n";


    return 0;
}