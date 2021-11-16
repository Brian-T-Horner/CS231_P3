cmake_minimum_required(VERSION 3.20)
project(bhorner_PA3)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(bhorner_PA3
        Car.cpp
        main.cpp
        Vehicle.cpp
        Truck.cpp
        Plane.cpp)
