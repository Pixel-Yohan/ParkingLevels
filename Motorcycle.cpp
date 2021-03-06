//
// YOHAN G. FLORES | CS 23306.001 | C++ Section
//
#include <vector>
#include <string>
#include <iostream>
#include "Vehicle.h"


//basically implements Vehicle Object methods
class Motorcycle: public Vehicle{
private:
    string color;
    float weight;
public:
    Motorcycle(string color, float weight){
        this->color=color;
        this->weight=weight;
    }
    ~Motorcycle(){}
    string getColor() override{
        return color;
    }
    float getWeight() override{
        return weight;
    }
    string getType() override{
        return "Motorcycle";
    }
    vector<string> getParkingType() override{
        vector<string> parkingType;
        parkingType.push_back("motorcycle");
        parkingType.push_back("1");
        parkingType.push_back("compact");
        parkingType.push_back("1");
        parkingType.push_back("large");
        parkingType.push_back("1");
        return parkingType;
    }
};

