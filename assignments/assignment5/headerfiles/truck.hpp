#ifndef TRUCK_H
#define TRUCK_H
#include "vehicle.hpp"

int returnLoss(int dollarAmount, int fullCapacity, int currentCapacity){
    return (dollarAmount* (fullCapacity-currentCapacity));
}

class truck: public Vehicle{
    public:
    // finish 
    virtual float returnLoss(){ return 2.0 }
    private:
};




#endif