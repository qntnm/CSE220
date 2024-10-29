using namespace std;
#include "vehicle.hpp"
class truck: public vehicle {
    public:
    virtual int returnLoss(){return 2 ;}
    private:
    static float rate;
};